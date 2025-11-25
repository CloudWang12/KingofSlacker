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

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Attributes | Global")
	int Expenditure;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Attributes | Global")
	float selfStrive;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Attributes | Global")
	float groupStrive;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Attributes | Global")
	float selfInfect;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Attributes | Global")
	float groupInfect;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Attributes | Player")
	float Energy_Cap;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Attributes | Player")
	float Personal_Struggle;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Attributes | Player")
	float Fish_Energy;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Attributes | Player")
	float Work_Efficiency;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Attributes | Player")
	float Stealth_Skill;
	
};
