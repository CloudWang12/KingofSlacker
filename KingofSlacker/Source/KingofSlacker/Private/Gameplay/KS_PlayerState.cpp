// Fill out your copyright notice in the Description page of Project Settings.


#include "Gameplay/KS_PlayerState.h"

AKS_PlayerState::AKS_PlayerState()
{
	Money = 0;
	Income = 600;
	OKR = 0.f;
	Expenditure=300;
	selfStrive = 0.f;
	selfInfect = 0.f;
	groupStrive = 0.f;
	groupInfect = 0.f;
	
	Energy_Cap = 0.f;
	Personal_Struggle = 0.f;
	Fish_Energy = 0.f;
	Work_Efficiency = 0.f;
	Stealth_Skill = 0.f;
}
