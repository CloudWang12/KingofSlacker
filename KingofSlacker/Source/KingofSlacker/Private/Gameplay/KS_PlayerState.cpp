// Fill out your copyright notice in the Description page of Project Settings.


#include "Gameplay/KS_PlayerState.h"
#include "Inventory/InventoryComponent.h"
#include "Kismet/KismetSystemLibrary.h"

AKS_PlayerState::AKS_PlayerState()
{
	InventoryComponent = CreateDefaultSubobject<UInventoryComponent>("InventoryComponent");
	
	Money = 888;
	Income = 150;
	KPI = 3.f;
	KPICount = 5.f;
	MaxKPI = 100.f;

	Fish_Energy = 15;
	Fish_Energy_Count = 1;
	MaxFish_Energy = 100;
	Fish_EnergyEfficiency = 1.f;
	Fish_Time = 1.f;

	Work_Efficiency = 1.f;
	Work_Time = 1.f;

	Strive = 0.f;
	StriveCount = 5.f;
	MaxStrive = 100.f;

	Health = 50.f;
	MaxHealth = 100.f;
	
}

void AKS_PlayerState::AddUpFishEnergy()
{
	Fish_Energy +=Fish_EnergyEfficiency*Fish_Energy_Count;
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

void AKS_PlayerState::AddUpFishEnergyEfficiency(float InCountAddup)
{
	Fish_EnergyEfficiency *= InCountAddup;
}

void AKS_PlayerState::ConsumeMoney(int InMoney)
{
	Money -= InMoney;
}

void AKS_PlayerState::ConsumeFishEnergy(int InCountConsume)
{
	Fish_Energy -= InCountConsume;
	Fish_Energy = FMath::Clamp(Fish_Energy,0,MaxFish_Energy);
}

void AKS_PlayerState::AddUpKPI()
{
	KPI += KPICount;
	KPI = FMath::Clamp(KPI,0,MaxKPI);
	
	OnKPIChanged.Broadcast(KPI);
	
	if (KPI >= MaxKPI)
	{
		UKismetSystemLibrary::PrintString(this,TEXT("KPI is reach to the Max,delicate to task system"),true,false,FLinearColor::White,10.f);
	}
}

void AKS_PlayerState::AddUpKPICount(int InCount)
{
	KPICount += InCount;
}

void AKS_PlayerState::ConclusionKPI()
{
	if (KPI >= MaxKPI)
	{
		KPITimes++;
	}
	float KPIPercentage = KPI/MaxKPI;
	AddUpMoney(Income*KPIPercentage);
	
	KPI = 0;
}

void AKS_PlayerState::RestartStrive()
{
	Strive=0.f;
}

void AKS_PlayerState::EffectFishEfficiency(float InStrive)
{
	EPlayerStatus PlayerStatus;
	if (InStrive >= MaxStrive)
	{
		Fish_EnergyEfficiency = FMath::Clamp(.0f,0.f,1.f);
		PlayerStatus = EPlayerStatus::Player_MaxStrive;
		OnStatusChanged.Broadcast(PlayerStatus);
		OnStriveMaxAchieved.Broadcast();
	}
	else if (InStrive == MaxStrive*0.9f)
	{
		Fish_EnergyEfficiency = FMath::Clamp(.1f*Fish_EnergyEfficiency,0.f,1.f);
	}
	else if (InStrive == MaxStrive*.8f)
	{
		Fish_EnergyEfficiency = FMath::Clamp(.2f*Fish_EnergyEfficiency,0.f,1.f);
		UKismetSystemLibrary::PrintString(this,TEXT("Strive is reach to the 80%"),true,false,FLinearColor::White,10.f);
		PlayerStatus = EPlayerStatus::Player_HighPress;
		OnStatusChanged.Broadcast(PlayerStatus);
	}
	else if (InStrive == MaxStrive*.7f)
	{
		Fish_EnergyEfficiency = FMath::Clamp(.3f*Fish_EnergyEfficiency,0.f,1.f);
	}
	else if (InStrive == MaxStrive*.6f)
	{
		Fish_EnergyEfficiency = FMath::Clamp(.4f*Fish_EnergyEfficiency,0.f,1.f);
		UKismetSystemLibrary::PrintString(this,TEXT("Strive is reach to the 60%"),true,false,FLinearColor::White,10.f);
		PlayerStatus = EPlayerStatus::Player_Press;
		OnStatusChanged.Broadcast(PlayerStatus);
	}
	else if (InStrive == MaxStrive*.5f)
	{
		Fish_EnergyEfficiency = FMath::Clamp(.5f*Fish_EnergyEfficiency,0.f,1.f);
	}
	else if (InStrive == MaxStrive*.4f)
	{
		Fish_EnergyEfficiency = FMath::Clamp(.6f*Fish_EnergyEfficiency,0.f,1.f);
		UKismetSystemLibrary::PrintString(this,TEXT("Strive is reach to the 40%"),true,false,FLinearColor::White,10.f);
		PlayerStatus = EPlayerStatus::Player_LowPress;
		OnStatusChanged.Broadcast(PlayerStatus);
	}
	else if (InStrive == MaxStrive*.3f)
	{
		Fish_EnergyEfficiency = FMath::Clamp(.7f*Fish_EnergyEfficiency,0.f,1.f);
	}
	else if (InStrive == MaxStrive*.2f)
	{
		Fish_EnergyEfficiency = FMath::Clamp(.8f*Fish_EnergyEfficiency,0.f,1.f);
		UKismetSystemLibrary::PrintString(this,TEXT("Strive is reach to the 20%"),true,false,FLinearColor::White,10.f);
		PlayerStatus = EPlayerStatus::Player_Working;
		OnStatusChanged.Broadcast(PlayerStatus);
	}
	else if (InStrive == MaxStrive*.1f)
	{
		Fish_EnergyEfficiency = FMath::Clamp(.9f*Fish_EnergyEfficiency,0.f,1.f);
	}
	else if (InStrive == MaxStrive*.0f)
	{
		Fish_EnergyEfficiency = FMath::Clamp(1.f*Fish_EnergyEfficiency,0.f,1.f);
		PlayerStatus = EPlayerStatus::Player_Fishing;
		OnStatusChanged.Broadcast(PlayerStatus);
	}
}

void AKS_PlayerState::SwitchStatus(EPlayerStatus InStatus)
{
	if (InStatus == EPlayerStatus::Station_Idle || InStatus==EPlayerStatus::Station_Fishing || InStatus == EPlayerStatus::Station_Working)
	{
		OnStatusChanged.Broadcast(InStatus);
	}
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
	
	EffectFishEfficiency(Strive);
}

void AKS_PlayerState::AddUpMaxStrive(float InCountAddup)
{
	MaxStrive += InCountAddup;
}


void AKS_PlayerState::AddUpMoney(int InMoney)
{
	Money += InMoney;
}

void AKS_PlayerState::LowDownStrive(int InStrive)
{
	Strive -= InStrive;
	OnStriveChanged.Broadcast(Strive);
	EffectFishEfficiency(Strive);
	
}

void AKS_PlayerState::LowDownWorkTime(float InWorkTime)
{
	Work_Time = InWorkTime;
}

void AKS_PlayerState::LowDownFishTime(float InFishTime)
{
	Fish_Time = InFishTime;
}


