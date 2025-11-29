// Fill out your copyright notice in the Description page of Project Settings.


#include "Gameplay/KS_PlayerState.h"

#include "Kismet/KismetSystemLibrary.h"

AKS_PlayerState::AKS_PlayerState()
{
	Money = 888;
	Income = 150;
	KPI = 3.f;
	KPICount = 5.f;
	MaxKPI = 100.f;

	Fish_Energy = 15;
	Fish_Energy_Count = 1;
	MaxFish_Energy = 100;
	Fish_EnergyEfficiency = 1.f;
	Fish_Time = 3.f;

	Work_Efficiency = 1.f;
	Work_Time = 3.f;

	Strive = 0.f;
	StriveCount = 5.f;
	MaxStrive = 100.f;

	Health = 50.f;
	MaxHealth = 100.f;
	
}

void AKS_PlayerState::AddUpFishEnergy()
{
	Fish_Energy += Fish_Energy_Count;
	Fish_Energy = FMath::Clamp(Fish_Energy,0,MaxFish_Energy);
	
	OnFishChanged.Broadcast(Fish_Energy);
	
	if (Fish_Energy >= MaxFish_Energy)
	{
		UKismetSystemLibrary::PrintString(this,TEXT("Fish Energy is reach to the Max,delicate to task system"),true,false,FLinearColor::White,10.f);
	}
}

void AKS_PlayerState::AddUpMaxFishEnergy(int InCountAddup)
{
	MaxFish_Energy += InCountAddup;
}

void AKS_PlayerState::AddUpFishEnergyEfficiency(int InCountAddup)
{
	Fish_Energy *= InCountAddup;
}

void AKS_PlayerState::ConsumeFishEnergy(int InCountConsume)
{
	Fish_Energy -= InCountConsume;
	Fish_Energy = FMath::Clamp(Fish_Energy,0,MaxFish_Energy);
}

void AKS_PlayerState::AddupKPI()
{
	KPI += KPICount;
	KPI = FMath::Clamp(KPI,0,MaxKPI);
	
	OnKPIChanged.Broadcast(KPI);
	
	if (KPI >= MaxKPI)
	{
		UKismetSystemLibrary::PrintString(this,TEXT("KPI is reach to the Max,delicate to task system"),true,false,FLinearColor::White,10.f);
	}
}

void AKS_PlayerState::ConclusionKPI()
{
	
}

void AKS_PlayerState::AddUpWorkTime()
{
	Work_Time += 1.f;
}

void AKS_PlayerState::AddUpWorkEfficiency(int ItemCount)
{
	Work_Efficiency *= ItemCount;
}

void AKS_PlayerState::AddUpStrive()
{
	Strive += StriveCount;
	Strive = FMath::Clamp(Strive,0,MaxStrive);

	OnStriveChanged.Broadcast(Strive);

	
	if (Strive==40)
	{
		UKismetSystemLibrary::PrintString(this,TEXT("Strive is reach to the 40%"),true,false,FLinearColor::White,10.f);
	}
	else if (Strive==60)
	{
		UKismetSystemLibrary::PrintString(this,TEXT("Strive is reach to the 60%"),true,false,FLinearColor::White,10.f);
	}
	else if (Strive == 80)
	{
		UKismetSystemLibrary::PrintString(this,TEXT("Strive is reach to the 80%"),true,false,FLinearColor::White,10.f);
	}
	else if (Strive >= MaxStrive)
	{
		UKismetSystemLibrary::PrintString(this,TEXT("Strive is reach to the 100%"),true,false,FLinearColor::White,10.f);
	}
}

void AKS_PlayerState::AddUpMaxStrive(float InCountAddup)
{
	MaxStrive += InCountAddup;
}
