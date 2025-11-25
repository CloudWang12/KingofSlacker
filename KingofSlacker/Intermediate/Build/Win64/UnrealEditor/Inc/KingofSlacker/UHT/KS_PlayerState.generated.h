// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gameplay/KS_PlayerState.h"

#ifdef KINGOFSLACKER_KS_PlayerState_generated_h
#error "KS_PlayerState.generated.h already included, missing '#pragma once' in KS_PlayerState.h"
#endif
#define KINGOFSLACKER_KS_PlayerState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AKS_PlayerState **********************************************************
KINGOFSLACKER_API UClass* Z_Construct_UClass_AKS_PlayerState_NoRegister();

#define FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_PlayerState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKS_PlayerState(); \
	friend struct Z_Construct_UClass_AKS_PlayerState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend KINGOFSLACKER_API UClass* Z_Construct_UClass_AKS_PlayerState_NoRegister(); \
public: \
	DECLARE_CLASS2(AKS_PlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KingofSlacker"), Z_Construct_UClass_AKS_PlayerState_NoRegister) \
	DECLARE_SERIALIZER(AKS_PlayerState)


#define FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_PlayerState_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AKS_PlayerState(AKS_PlayerState&&) = delete; \
	AKS_PlayerState(const AKS_PlayerState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKS_PlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKS_PlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKS_PlayerState) \
	NO_API virtual ~AKS_PlayerState();


#define FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_PlayerState_h_12_PROLOG
#define FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_PlayerState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_PlayerState_h_15_INCLASS_NO_PURE_DECLS \
	FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_PlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AKS_PlayerState;

// ********** End Class AKS_PlayerState ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_PlayerState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
