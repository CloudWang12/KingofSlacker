// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DA_DialogueDefinitions.generated.h"

struct FDialogueStruct;
/**
 * 
 */
UCLASS()
class KINGOFSLACKER_API UDA_DialogueDefinitions : public UDataAsset
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
	TArray<FDialogueStruct> Dialogues;
	
};
