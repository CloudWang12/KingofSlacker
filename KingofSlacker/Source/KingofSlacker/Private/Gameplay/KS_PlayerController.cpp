// Fill out your copyright notice in the Description page of Project Settings.


#include "Gameplay/KS_PlayerController.h"
#include "EnhancedInputSubsystems.h"

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
