// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CharacterTemplate.generated.h"

UCLASS()
class KINGOFSLACKER_API ACharacterTemplate : public ACharacter
{
	GENERATED_BODY()

public:
	
	ACharacterTemplate();

protected:
	
	virtual void BeginPlay() override;

};
