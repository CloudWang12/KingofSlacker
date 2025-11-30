// Fill out your copyright notice in the Description page of Project Settings.


#include "Gameplay/StationBase.h"

#include "Components/WidgetComponent.h"
#include "Gameplay/KS_PlayerState.h"
#include "Kismet/GameplayStatics.h"
#include "UI/BarPercentageWidget.h"

// Sets default values
AStationBase::AStationBase()
{

	PrimaryActorTick.bCanEverTick = false;

	ProgressBar = CreateDefaultSubobject<UWidgetComponent>(TEXT("ProgressBar"));
	//ProgressBar ->SetupAttachment(GetRootComponent());

}


void AStationBase::BeginPlay()
{
	Super::BeginPlay();

	ProgressBarWidget = Cast<UBarPercentageWidget>(ProgressBar->GetUserWidgetObject());
	//check(ProgressBarWidget);
	APlayerController*PC = GetWorld()->GetFirstPlayerController();
	
	if (PC)
	{
		KS_PlayerState = PC->GetPlayerState<AKS_PlayerState>();
	}
	
}

void AStationBase::StartTimer()
{
	GetWorld()->GetTimerManager().SetTimer(
		TimerHandle,
		this,
		&AStationBase::UpdateData,
		.1f,
		true
	);
}

void AStationBase::StartResetTimer()
{
	GetWorld()->GetTimerManager().SetTimer(
		ResetTimerHandle,
		this,
		&AStationBase::ResetData,
		5.f,
		false
		);
}
void AStationBase::StopTimer()
{
	if (TimerHandle.IsValid())
	{
		GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	}

}


void AStationBase::StopResetTimer()
{
	if (ResetTimerHandle.IsValid())
	{
		GetWorld()->GetTimerManager().ClearTimer(ResetTimerHandle);
	}
}

void AStationBase::StartDealyTimer()
 {
	GetWorld()->GetTimerManager().SetTimer(
		DelayTimerHandle,
		this,
		&AStationBase::DelayData,
		.1f,
		true
		);
 }
 
 void AStationBase::StopDealyTimer()
 {
	if (DelayTimerHandle.IsValid())
	{
		GetWorld()->GetTimerManager().ClearTimer(DelayTimerHandle);
	}
 }

void AStationBase::UpdateData()
{
	if (bInRange)
	{
		BarValue = FMath::Clamp(BarValue + BarIncreaseValue*TimerInterval,0.f,BarMaxValue);
		if (BarValue >= BarMaxValue)
		{
			BarValue = 0.f;
			OnBarProgressMax.Broadcast();
			StopTimer();
		}
		ProgressBarWidget->SetBarPercentage(BarValue/BarMaxValue);
	}
	else
	{
		StopTimer();
	}
}

void AStationBase::ResetData()
{
	StopTimer();
	StartDealyTimer();
}

void AStationBase::DelayData()
{
	BarValue = FMath::Clamp(BarValue - BarIncreaseValue*TimerInterval,0.f,BarMaxValue);
	ProgressBarWidget->SetBarPercentage(BarValue/BarMaxValue);
}


void AStationBase::OnSpacePressed()
{
	bHoldingSpace = true;
	StopDealyTimer();
	StopResetTimer();
	StartTimer();
	
}

void AStationBase::OnSpaceReleased()
{
	bHoldingSpace = false;
	StartResetTimer();
	StopTimer();
}

