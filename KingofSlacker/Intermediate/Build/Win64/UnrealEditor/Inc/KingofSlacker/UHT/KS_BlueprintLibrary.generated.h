// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gameplay/KS_BlueprintLibrary.h"

#ifdef KINGOFSLACKER_KS_BlueprintLibrary_generated_h
#error "KS_BlueprintLibrary.generated.h already included, missing '#pragma once' in KS_BlueprintLibrary.h"
#endif
#define KINGOFSLACKER_KS_BlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UKS_BlueprintLibrary *****************************************************
KINGOFSLACKER_API UClass* Z_Construct_UClass_UKS_BlueprintLibrary_NoRegister();

#define FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_BlueprintLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKS_BlueprintLibrary(); \
	friend struct Z_Construct_UClass_UKS_BlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend KINGOFSLACKER_API UClass* Z_Construct_UClass_UKS_BlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UKS_BlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KingofSlacker"), Z_Construct_UClass_UKS_BlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UKS_BlueprintLibrary)


#define FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_BlueprintLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKS_BlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UKS_BlueprintLibrary(UKS_BlueprintLibrary&&) = delete; \
	UKS_BlueprintLibrary(const UKS_BlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKS_BlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKS_BlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKS_BlueprintLibrary) \
	NO_API virtual ~UKS_BlueprintLibrary();


#define FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_BlueprintLibrary_h_13_PROLOG
#define FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_BlueprintLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_BlueprintLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_BlueprintLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UKS_BlueprintLibrary;

// ********** End Class UKS_BlueprintLibrary *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_BlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
