// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "Inventory/ItemType.h"
#include "KS_PlayerState.generated.h"


class UInventoryComponent;
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnKPIDelegate, float, InKPI);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMoneyDelegate,int,InMoney);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFishDelegate,int,InFish);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStriveDelegate,float,InStrive);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStriveMaxDelegate);



UENUM(BlueprintType, Blueprintable) 
enum class EPlayerStatus : uint8
{
	Player_Fishing,
	Player_Working,
	Player_MaxStrive,
	Player_HighPress,
	Player_Press,
	Player_LowPress,
	Player_Sad,
	Player_HighComfotable,
	Player_LowComfotable,
	Station_Idle,
	Station_Working,
	Station_Fishing
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStatusDelegate,EPlayerStatus,InStatus);
/**
 * 
 */
UCLASS()
class KINGOFSLACKER_API AKS_PlayerState : public APlayerState
{
	GENERATED_BODY()

public:

	AKS_PlayerState();

	UPROPERTY(EditAnywhere,BlueprintReadWrite ,Category="AKS | Component | Inventrory")
	TObjectPtr<UInventoryComponent>InventoryComponent;


	UPROPERTY(BlueprintAssignable, Category="KingofSlacker")
	FOnKPIDelegate OnKPIChanged;
	UPROPERTY(BlueprintAssignable, Category="KingofSlacker")
	FOnMoneyDelegate OnMoneyChanged;
	UPROPERTY(BlueprintAssignable, Category="KingofSlacker")
	FOnFishDelegate OnFishChanged;
	UPROPERTY(BlueprintAssignable, Category="KingofSlacker")
	FOnStriveDelegate OnStriveChanged;
	UPROPERTY(BlueprintAssignable, Category="KingofSlacker")
	FOnStatusDelegate OnStatusChanged;
	UPROPERTY(BlueprintAssignable, Category="KingofSlacker")
	FOnStriveMaxDelegate OnStriveMaxAchieved;
	

	

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Attributes | Global")
	int Money;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Attributes | Global")
	int Income;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Attributes | Global")
	float KPI;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Attributes | Global")
	int KPITimes;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Attributes | Global")
	float KPICount;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Attributes | Global")
	float MaxKPI;


	
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Attributes | Player")
	int Fish_Energy;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Attributes | Player")
	int Fish_Energy_Count;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Attributes | Player")
	int MaxFish_Energy;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Attributes | Player")
	float Fish_EnergyEfficiency;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Attributes | Player")
	float Fish_Time;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Attributes | Player")
	float Strive;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Attributes | Player")
	float StriveCount;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Attributes | Player")
	float MaxStrive;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Attributes | Player")
	float Work_Time;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Attributes | Player")
	float Work_Efficiency;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Attributes | Player")
	float Health;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Attributes | Player")
	float MaxHealth;

	


	UFUNCTION(BlueprintCallable,Category="Attributes | Function")
	void AddUpFishEnergy();

	UFUNCTION(BlueprintCallable,Category="Attributes | Function")
	void AddUpMaxFishEnergy(int InCountAddup);

	UFUNCTION(BlueprintCallable,Category="Attributes | Function")
	void AddUpFishEnergyEfficiency(float InCountAddup);

	UFUNCTION(BlueprintCallable,Category="Attributes | Function")
	void AddUpKPI();

	UFUNCTION(BlueprintCallable,Category="Attributes | Function")
	void AddUpKPICount(int InCount);

	UFUNCTION(BlueprintCallable,Category="Attributes | Function")
	void AddUpWorkTime();

	UFUNCTION(BlueprintCallable,Category="Attributes | Function")
	void AddUpWorkEfficiency(int ItemCount);

	UFUNCTION(BlueprintCallable,Category="Attributes | Function")
	void AddUpStrive();

	UFUNCTION(BlueprintCallable,Category="Attributes | Function")
	void AddUpMaxStrive(float InCountAddup);

	void AddUpMoney(int InMoney);
	
	UFUNCTION(BlueprintCallable,Category="Attributes | Function")
	void LowDownStrive(int InStrive);

	void LowDownKPI();

	UFUNCTION(BlueprintCallable,Category="Attributes | Function")
	void LowDownWorkTime(float InWorkTime);

	UFUNCTION(BlueprintCallable,Category="Attributes | Function")
	void LowDownFishTime(float InFishTime);

	void LowDownInCome();

	void ConsumeMoney(int InMoney);
	

	UFUNCTION(BlueprintCallable,Category="Attributes | Function")
	void ConsumeFishEnergy(int InCountConsume);

	UFUNCTION(BlueprintCallable,Category="Attributes | Function")
	void ConclusionKPI();

	UFUNCTION(BlueprintCallable,Category="Attributes | Function")
	void RestartStrive();
	
	void EffectFishEfficiency(float InStrive);

	UFUNCTION(BlueprintCallable,Category="Attributes | Function")
	void SwitchStatus(EPlayerStatus InStatus);

	UFUNCTION(BlueprintCallable,Category="Attributes | Function")
	void LoadAllAttributes(int InMoney, float InKPI,int InFishEnergy,float InStrive);


};
