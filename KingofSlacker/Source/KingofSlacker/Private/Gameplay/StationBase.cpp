#include "Gameplay/StationBase.h"
#include "Components/StaticMeshComponent.h"
#include "Components/WidgetComponent.h"
#include "Gameplay/KS_PlayerState.h"
#include "Kismet/GameplayStatics.h"
#include "UI/BarPercentageWidget.h"

AStationBase::AStationBase()
{
	PrimaryActorTick.bCanEverTick = false;

	Root = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Root"));
	SetRootComponent(Root);
	
	Root->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	Root->SetHiddenInGame(true);
	
	ProgressBar = CreateDefaultSubobject<UWidgetComponent>(TEXT("ProgressBar"));
	ProgressBar->SetupAttachment(Root);
	
	ProgressBar->SetRelativeLocation(FVector(0, 0, 100));
	ProgressBar->SetRelativeScale3D(FVector(1.0f));
	
	ProgressBar->SetWidgetSpace(EWidgetSpace::World);
	
	ProgressBar->SetDrawSize(FVector2D(200, 50));
}

void AStationBase::BeginPlay()
{
	Super::BeginPlay();

	if (ProgressBar)
	{
		ProgressBarWidget = Cast<UBarPercentageWidget>(ProgressBar->GetUserWidgetObject());
		if (ProgressBarWidget && BarMaxValue > 0)
		{
			ProgressBarWidget->SetBarPercentage(BarValue / BarMaxValue);
		}
	}
}

AKS_PlayerState* AStationBase::GetKSPlayerState()
{
	UWorld* World = GetWorld();
	if (World)
	{
		APlayerController* PC = World->GetFirstPlayerController();
		if (PC)
		{
			KS_PlayerState = PC->GetPlayerState<AKS_PlayerState>();
			return KS_PlayerState;
		}
	}
	return nullptr;
}

void AStationBase::ResetProgress()
{
	BarValue = 0.f;
	LoopCount = 0;
	
	if (ProgressBarWidget)
	{
		ProgressBarWidget->SetBarPercentage(0.f);
	}
	
}

void AStationBase::StartTimer()
{
	if (!TimerHandle.IsValid())
	{
		GetWorld()->GetTimerManager().SetTimer(
			TimerHandle,
			this,
			&AStationBase::UpdateData,
			TimerInterval,
			true
		);
	}
}

void AStationBase::StopTimer()
{
	if (TimerHandle.IsValid())
	{
		GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	}
}

void AStationBase::UpdateData()
{
	if (bInRange && bHoldingSpace)
	{
		float Delta = BarIncreaseValue * TimerInterval * EffectTimes;
		
		float OldValue = BarValue;
		BarValue = FMath::Clamp(BarValue + Delta, 0.f, BarMaxValue);
		
		if (BarValue != OldValue && ProgressBarWidget)
		{
			ProgressBarWidget->SetBarPercentage(BarValue / BarMaxValue);
		}
		
		if (BarValue >= BarMaxValue)
		{
			LoopCount++;
			
			OnBarProgressMax.Broadcast();
			
			
			bool bShouldContinue = bLoopEnabled && bHoldingSpace && bInRange;
			
			if (MaxLoopCount > 0 && LoopCount >= MaxLoopCount)
			{
				bShouldContinue = false;
			}
			
			if (bShouldContinue)
			{
				BarValue = 0.f;
				
				if (ProgressBarWidget)
				{
					ProgressBarWidget->SetBarPercentage(0.f);
				}
			}
			else
			{
				StopTimer();
				
				BarValue = BarMaxValue;
				if (ProgressBarWidget)
				{
					ProgressBarWidget->SetBarPercentage(1.f);
				}
			}
		}
	}
	else
	{
		StopTimer();
	}
}

void AStationBase::OnSpacePressed()
{
	bHoldingSpace = true;
	
	if (BarValue >= BarMaxValue && bLoopEnabled)
	{
		BarValue = 0.f;
		if (ProgressBarWidget)
		{
			ProgressBarWidget->SetBarPercentage(0.f);
		}
	}
	
	StartTimer();
}

void AStationBase::OnSpaceReleased()
{
	bHoldingSpace = false;
	
	StopTimer();
}