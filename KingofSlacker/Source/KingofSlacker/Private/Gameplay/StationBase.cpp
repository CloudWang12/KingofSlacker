// Fill out your copyright notice in the Description page of Project Settings.


#include "Gameplay/StationBase.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AStationBase::AStationBase()
{

	PrimaryActorTick.bCanEverTick = false;

}


void AStationBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void AStationBase::ComputerStationGameplay()
{
	if (APlayerController*MyPC = UGameplayStatics::GetPlayerController(this,0))
	{
		EnableInput(MyPC);
		InputComponent->BindAction("IA_Space",IE_Pressed,this,&AStationBase::OnSpacePressed);
		InputComponent->BindAction("IA_Space",IE_Released,this,&AStationBase::OnSpaceReleased);
	}
}

void AStationBase::StopComputerStationGameplay()
{
	bHoldingSpace = false;
	if (APlayerController*MyPC = UGameplayStatics::GetPlayerController(this,0))
	{
		DisableInput(MyPC);
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

void AStationBase::StopTimer()
{
	if (TimerHandle.IsValid())
	{
		GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	}

}

void AStationBase::UpdateData()
{
	if (bInRange)
	{
		BarValue = FMath::Clamp(BarValue + BarIncreaseValue*TimerInterval,0.f,BarMaxValue);
	}
	else
	{
		StopTimer();
	}
}


void AStationBase::OnSpacePressed()
{
	bHoldingSpace = true;
	StartTimer();
	
}

void AStationBase::OnSpaceReleased()
{
	bHoldingSpace = false;
	StopTimer();
}

