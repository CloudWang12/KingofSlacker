// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gameplay/KS_HUD.h"

#ifdef KINGOFSLACKER_KS_HUD_generated_h
#error "KS_HUD.generated.h already included, missing '#pragma once' in KS_HUD.h"
#endif
#define KINGOFSLACKER_KS_HUD_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AKS_HUD ******************************************************************
KINGOFSLACKER_API UClass* Z_Construct_UClass_AKS_HUD_NoRegister();

#define FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_HUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKS_HUD(); \
	friend struct Z_Construct_UClass_AKS_HUD_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend KINGOFSLACKER_API UClass* Z_Construct_UClass_AKS_HUD_NoRegister(); \
public: \
	DECLARE_CLASS2(AKS_HUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/KingofSlacker"), Z_Construct_UClass_AKS_HUD_NoRegister) \
	DECLARE_SERIALIZER(AKS_HUD)


#define FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_HUD_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AKS_HUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AKS_HUD(AKS_HUD&&) = delete; \
	AKS_HUD(const AKS_HUD&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKS_HUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKS_HUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKS_HUD) \
	NO_API virtual ~AKS_HUD();


#define FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_HUD_h_12_PROLOG
#define FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_HUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_HUD_h_15_INCLASS_NO_PURE_DECLS \
	FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_HUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AKS_HUD;

// ********** End Class AKS_HUD ********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_HUD_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
