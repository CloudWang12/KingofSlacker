// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gameplay/KS_PlayerController.h"

#ifdef KINGOFSLACKER_KS_PlayerController_generated_h
#error "KS_PlayerController.generated.h already included, missing '#pragma once' in KS_PlayerController.h"
#endif
#define KINGOFSLACKER_KS_PlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AKS_PlayerController *****************************************************
KINGOFSLACKER_API UClass* Z_Construct_UClass_AKS_PlayerController_NoRegister();

#define FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_PlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKS_PlayerController(); \
	friend struct Z_Construct_UClass_AKS_PlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend KINGOFSLACKER_API UClass* Z_Construct_UClass_AKS_PlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AKS_PlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/KingofSlacker"), Z_Construct_UClass_AKS_PlayerController_NoRegister) \
	DECLARE_SERIALIZER(AKS_PlayerController)


#define FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_PlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AKS_PlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AKS_PlayerController(AKS_PlayerController&&) = delete; \
	AKS_PlayerController(const AKS_PlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKS_PlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKS_PlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKS_PlayerController) \
	NO_API virtual ~AKS_PlayerController();


#define FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_PlayerController_h_12_PROLOG
#define FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_PlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_PlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_PlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AKS_PlayerController;

// ********** End Class AKS_PlayerController *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_PlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
