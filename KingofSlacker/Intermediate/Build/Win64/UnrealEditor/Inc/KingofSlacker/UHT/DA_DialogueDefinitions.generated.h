// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dialogue/DA_DialogueDefinitions.h"

#ifdef KINGOFSLACKER_DA_DialogueDefinitions_generated_h
#error "DA_DialogueDefinitions.generated.h already included, missing '#pragma once' in DA_DialogueDefinitions.h"
#endif
#define KINGOFSLACKER_DA_DialogueDefinitions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDA_DialogueDefinitions **************************************************
KINGOFSLACKER_API UClass* Z_Construct_UClass_UDA_DialogueDefinitions_NoRegister();

#define FID_KingofSlacker_Source_KingofSlacker_Public_Dialogue_DA_DialogueDefinitions_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDA_DialogueDefinitions(); \
	friend struct Z_Construct_UClass_UDA_DialogueDefinitions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend KINGOFSLACKER_API UClass* Z_Construct_UClass_UDA_DialogueDefinitions_NoRegister(); \
public: \
	DECLARE_CLASS2(UDA_DialogueDefinitions, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KingofSlacker"), Z_Construct_UClass_UDA_DialogueDefinitions_NoRegister) \
	DECLARE_SERIALIZER(UDA_DialogueDefinitions)


#define FID_KingofSlacker_Source_KingofSlacker_Public_Dialogue_DA_DialogueDefinitions_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDA_DialogueDefinitions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDA_DialogueDefinitions(UDA_DialogueDefinitions&&) = delete; \
	UDA_DialogueDefinitions(const UDA_DialogueDefinitions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDA_DialogueDefinitions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDA_DialogueDefinitions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDA_DialogueDefinitions) \
	NO_API virtual ~UDA_DialogueDefinitions();


#define FID_KingofSlacker_Source_KingofSlacker_Public_Dialogue_DA_DialogueDefinitions_h_13_PROLOG
#define FID_KingofSlacker_Source_KingofSlacker_Public_Dialogue_DA_DialogueDefinitions_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_KingofSlacker_Source_KingofSlacker_Public_Dialogue_DA_DialogueDefinitions_h_16_INCLASS_NO_PURE_DECLS \
	FID_KingofSlacker_Source_KingofSlacker_Public_Dialogue_DA_DialogueDefinitions_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDA_DialogueDefinitions;

// ********** End Class UDA_DialogueDefinitions ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_KingofSlacker_Source_KingofSlacker_Public_Dialogue_DA_DialogueDefinitions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
