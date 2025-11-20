// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gameplay/KS_GameModeBase.h"

#ifdef KINGOFSLACKER_KS_GameModeBase_generated_h
#error "KS_GameModeBase.generated.h already included, missing '#pragma once' in KS_GameModeBase.h"
#endif
#define KINGOFSLACKER_KS_GameModeBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AKS_GameModeBase *********************************************************
KINGOFSLACKER_API UClass* Z_Construct_UClass_AKS_GameModeBase_NoRegister();

#define FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_GameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKS_GameModeBase(); \
	friend struct Z_Construct_UClass_AKS_GameModeBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend KINGOFSLACKER_API UClass* Z_Construct_UClass_AKS_GameModeBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AKS_GameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/KingofSlacker"), Z_Construct_UClass_AKS_GameModeBase_NoRegister) \
	DECLARE_SERIALIZER(AKS_GameModeBase)


#define FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_GameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AKS_GameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AKS_GameModeBase(AKS_GameModeBase&&) = delete; \
	AKS_GameModeBase(const AKS_GameModeBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKS_GameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKS_GameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKS_GameModeBase) \
	NO_API virtual ~AKS_GameModeBase();


#define FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_GameModeBase_h_12_PROLOG
#define FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_GameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_GameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_GameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AKS_GameModeBase;

// ********** End Class AKS_GameModeBase ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_GameModeBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
