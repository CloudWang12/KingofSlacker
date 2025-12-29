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
	Fish_Energy_Additive = 0;
	Fish_Time = 1.f;

	Work_Efficiency = 1.f;
	Work_Time = 1.f;

	Strive = 0.f;
	StriveCount = 5.f;
	MaxStrive = 100.f;

	Health = 50.f;
	MaxHealth = 100.f;
	InfectionCount = 0;

	MonthCost = 0;
	BeArrestMoney = 0;
	HospitalCost = 0;
	
}

void AKS_PlayerState::AddUpFishEnergy()
{
	if (Strive>=0&&Strive<=30)
	{
		Fish_Energy_Count = 5 + Fish_Energy_Additive;
		Fish_Energy+=Fish_Energy_Count;
		Fish_Energy = FMath::Clamp(Fish_Energy,0,MaxFish_Energy);
	}
	else if (Strive>30&&Strive<=60)
	{
		Fish_Energy_Count = 3+ Fish_Energy_Additive;
		Fish_Energy+=Fish_Energy_Count;
		Fish_Energy = FMath::Clamp(Fish_Energy,0,MaxFish_Energy);
	}
	else if (Strive>60&&Strive<=100)
	{
		Fish_Energy_Count = 1+ Fish_Energy_Additive;
		Fish_Energy+=Fish_Energy_Count;
		Fish_Energy = FMath::Clamp(Fish_Energy,0,MaxFish_Energy);
	}
	
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

void AKS_PlayerState::AddUpFishEnergyAdditive(bool bHaveItem)
{
	if (bHaveItem)
	{
		Fish_Energy_Additive = 1;
	}
	else
	{
		Fish_Energy_Additive = 0;
	}
}


void AKS_PlayerState::PurchaseItems(EItemCategory ItemCategory, int InConsumeAccount)
{
	if (ItemCategory==EItemCategory::Consumable)
	{
		LowDownMoney(InConsumeAccount);
	}
	else if (ItemCategory==EItemCategory::Equipable)
	{
		LowDownFishEnergy(InConsumeAccount);
	}
}

bool AKS_PlayerState::CheckEnoughToken(EItemCategory ItemCategory, int InConsumeAccount)
{
	if (ItemCategory==EItemCategory::Consumable && Money >= InConsumeAccount)
	{
		return true;
	}
	else if (ItemCategory==EItemCategory::Equipable && Fish_Energy >= InConsumeAccount)
	{
		return true;
	}
	return false;
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

int AKS_PlayerState::ConclusionKPI()
{
	if (KPI >= MaxKPI)
	{
		KPITimes++;
	}
	float KPIPercentage = KPI/MaxKPI;
	//AddUpMoney(Income*KPIPercentage);
	
	//KPI = 0;
	//OnKPIChanged.Broadcast(KPI);
	Income*= KPIPercentage;
	return Income;
}

void AKS_PlayerState::RestartKPI()
{
	KPI = 0;
	OnKPIChanged.Broadcast(KPI);
}

void AKS_PlayerState::RestartStrive()
{
	Strive=0.f;
	OnStriveChanged.Broadcast(Strive);
}

void AKS_PlayerState::EffectFishEfficiency(float InStrive)
{
	ECharacterState PlayerStates;
	if (InStrive >= MaxStrive)
	{
		
		PlayerStates = ECharacterState::Character_ExtremPress;
		OnCharacterStateChanged.Broadcast(PlayerStates);
		OnStriveMaxAchieved.Broadcast();
	}
	else if (InStrive == MaxStrive*.8f)
	{
		UKismetSystemLibrary::PrintString(this,TEXT("Strive is reach to the 80%"),true,false,FLinearColor::White,10.f);
		PlayerStates = ECharacterState::Character_HighPress;
		OnCharacterStateChanged.Broadcast(PlayerStates);
	}
	else if (InStrive == MaxStrive*.6f)
	{
		UKismetSystemLibrary::PrintString(this,TEXT("Strive is reach to the 60%"),true,false,FLinearColor::White,10.f);
		PlayerStates = ECharacterState::Character_LowPress;
		OnCharacterStateChanged.Broadcast(PlayerStates);
	}

	else if (InStrive == MaxStrive*.4f)
	{
		UKismetSystemLibrary::PrintString(this,TEXT("Strive is reach to the 40%"),true,false,FLinearColor::White,10.f);
		PlayerStates = ECharacterState::Character_Working;
		OnCharacterStateChanged.Broadcast(PlayerStates);
	}
	else if (InStrive == MaxStrive*.0f)
	{

		PlayerStates = ECharacterState::Character_Fishing;
		OnCharacterStateChanged.Broadcast(PlayerStates);
	}
}

void AKS_PlayerState::SwitchStatus(EPlayerStatus InStatus)
{
	if (InStatus == EPlayerStatus::Station_Idle || InStatus==EPlayerStatus::Station_Fishing || InStatus == EPlayerStatus::Station_Working)
	{
		OnStatusChanged.Broadcast(InStatus);
	}
}

void AKS_PlayerState::LoadAllAttributes(int InMoney, float InKPI,int InFishEnergy,float InStrive)
{
	OnMoneyChanged.Broadcast(InMoney);
	OnKPIChanged.Broadcast(InKPI);
	OnFishChanged.Broadcast(InFishEnergy);
	OnStriveChanged.Broadcast(MaxStrive);
	
}


void AKS_PlayerState::AddUpWorkTime()
{
	Work_Time += 1.f;
}

void AKS_PlayerState::AddUpWorkEfficiency(int ItemCount)
{
	Work_Efficiency *= ItemCount;
	//Work_Efficiency=FMath::Clamp(Work_Efficiency,0.f,1.f);
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
	OnMoneyChanged.Broadcast(Money);
}

void AKS_PlayerState::LowDownMoney(int InMoney)
{
	Money -= InMoney;
	OnMoneyChanged.Broadcast(Money);
}

void AKS_PlayerState::LowDownFishEnergy(float InCountFishEnergy)
{
	Fish_Energy-=InCountFishEnergy;
	OnFishChanged.Broadcast(Fish_Energy);
}

void AKS_PlayerState::LowDownStrive(int InStrive)
{
	Strive = FMath::Clamp(Strive -= InStrive,0,MaxStrive);
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


