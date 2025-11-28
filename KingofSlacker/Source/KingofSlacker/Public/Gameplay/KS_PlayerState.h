// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "KS_PlayerState.generated.h"



/**
 * 
 */
UCLASS()
class KINGOFSLACKER_API AKS_PlayerState : public APlayerState
{
	GENERATED_BODY()

public:

	AKS_PlayerState();

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Attributes | Global")
	int Money;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Attributes | Global")
	int Income;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Attributes | Global")
	float OKR;


	
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Attributes | Player")
	int Fish_Energy;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Attributes | Player")
	int MaxFish_Energy;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Attributes | Player")
	float Fish_EnergyEfficiency;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Attributes | Player")
	float Fish_Time;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Attributes | Player")
	float Strive;

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
};
