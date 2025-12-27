// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/CharacterTemplate.h"
#include "CharacterNPC.generated.h"


UENUM(BlueprintType, Blueprintable)
enum class ENPCState : uint8
{
	None,
	NPC_Idle,
	NPC_Working,
	NPC_Fishing,
	NPC_Eating,
	NPC_Talking
	//NPC_Sad,
	//NPC_HighPress,
	//NPC_LowPress,
	//NPC_HighComfotable,
	//NPC_LowComfotable
};

/**
 * 
 */
UCLASS()
class KINGOFSLACKER_API ACharacterNPC : public ACharacterTemplate
{
	GENERATED_BODY()


	public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="NPC", meta=(AllowPrivateAccess=true))
	float NPCHealth;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="NPC", meta=(AllowPrivateAccess=true))
	float NPCMaxHealth;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="NPC", meta=(AllowPrivateAccess=true))
	int FishProgress;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="NPC", meta=(AllowPrivateAccess=true))
	int MaxFishProgress;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="NPC")
	float FishHealthTime;
	
};
