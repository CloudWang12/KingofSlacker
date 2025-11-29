// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractInterface.h"
#include "GameFramework/PlayerController.h"
#include "KS_PlayerController.generated.h"


class AKS_PlayerState;
class UDialogueComponent;
class UInventoryComponent;
class UInputMappingContext;

UCLASS(Abstract)
class KINGOFSLACKER_API AKS_PlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AKS_PlayerController();
	
	UPROPERTY(EditAnywhere, Category="AKS | Component | Dialogue")
	TObjectPtr<UInventoryComponent>InventoryComponent;

	UPROPERTY(EditAnywhere, Category="AKS | Component | Dialogue")
	TObjectPtr<UDialogueComponent>DialogueComponent;

protected:
	
	UPROPERTY(EditAnywhere, Category ="AKS | Input|Input Mappings")
	TArray<UInputMappingContext*> DefaultMappingContexts;
	
	virtual void SetupInputComponent() override;

	virtual void BeginPlay() override;


public:

	UFUNCTION(BlueprintPure,Category="AKS | Getter")
	AKS_PlayerState*GetKSPlayerState();
};
