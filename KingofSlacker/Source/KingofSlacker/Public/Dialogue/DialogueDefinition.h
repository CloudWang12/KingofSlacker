// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DialogueDefinition.generated.h"

USTRUCT(BlueprintType)
struct FDialogueStruct
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite,Category="DialogueDefinition")
	FText DialogueSpeaker = FText();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite,Category="DialogueDefinition")
	FText DialogueContext = FText();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite,Category="DialogueDefinition")
	UTexture2D* SpeakerAvatar = nullptr;
};