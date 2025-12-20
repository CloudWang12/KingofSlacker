// Fill out your copyright notice in the Description page of Project Settings.


#include "Gameplay/KS_PlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "Dialogue/DialogueComponent.h"
#include "Gameplay/KS_PlayerState.h"

#include "Kismet/KismetSystemLibrary.h"

AKS_PlayerController::AKS_PlayerController()
{

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


AKS_PlayerState* AKS_PlayerController::GetKSPlayerState()
{
	AKS_PlayerState*PS = GetPlayerState<AKS_PlayerState>();
	if (!PS) return nullptr;
	return PS;
}
