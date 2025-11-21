// Fill out your copyright notice in the Description page of Project Settings.


#include "Gameplay/KS_PlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "Dialogue/DialogueComponent.h"
#include "Inventory/InventoryComponent.h"

AKS_PlayerController::AKS_PlayerController()
{
	InventoryComponent = CreateDefaultSubobject<UInventoryComponent>("InventoryComponent");

	DialogueComponent = CreateDefaultSubobject<UDialogueComponent>("DialogueComponent");

}

void AKS_PlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	if (IsLocalPlayerController())
	{
		// Add Input Mapping Contexts
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
		{
			for (UInputMappingContext* CurrentContext : DefaultMappingContexts)
			{
				Subsystem->AddMappingContext(CurrentContext, 0);
			}
		}
	}
}

void AKS_PlayerController::BeginPlay()
{
	Super::BeginPlay();
	
	this->SetShowMouseCursor(true);
}
