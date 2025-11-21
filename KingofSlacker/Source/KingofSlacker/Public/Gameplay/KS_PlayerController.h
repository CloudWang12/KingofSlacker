// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "KS_PlayerController.generated.h"


class UInputMappingContext;

UCLASS(Abstract)
class KINGOFSLACKER_API AKS_PlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	
	UPROPERTY(EditAnywhere, Category ="Input|Input Mappings")
	TArray<UInputMappingContext*> DefaultMappingContexts;
	
	virtual void SetupInputComponent() override;

	virtual void BeginPlay() override;

	
};
