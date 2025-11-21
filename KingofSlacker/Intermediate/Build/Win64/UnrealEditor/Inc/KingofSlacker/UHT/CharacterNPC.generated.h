// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/CharacterNPC.h"

#ifdef KINGOFSLACKER_CharacterNPC_generated_h
#error "CharacterNPC.generated.h already included, missing '#pragma once' in CharacterNPC.h"
#endif
#define KINGOFSLACKER_CharacterNPC_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACharacterNPC ************************************************************
KINGOFSLACKER_API UClass* Z_Construct_UClass_ACharacterNPC_NoRegister();

#define FID_KingofSlacker_Source_KingofSlacker_Public_Character_CharacterNPC_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacterNPC(); \
	friend struct Z_Construct_UClass_ACharacterNPC_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend KINGOFSLACKER_API UClass* Z_Construct_UClass_ACharacterNPC_NoRegister(); \
public: \
	DECLARE_CLASS2(ACharacterNPC, ACharacterTemplate, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KingofSlacker"), Z_Construct_UClass_ACharacterNPC_NoRegister) \
	DECLARE_SERIALIZER(ACharacterNPC)


#define FID_KingofSlacker_Source_KingofSlacker_Public_Character_CharacterNPC_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACharacterNPC(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACharacterNPC(ACharacterNPC&&) = delete; \
	ACharacterNPC(const ACharacterNPC&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterNPC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterNPC); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharacterNPC) \
	NO_API virtual ~ACharacterNPC();


#define FID_KingofSlacker_Source_KingofSlacker_Public_Character_CharacterNPC_h_12_PROLOG
#define FID_KingofSlacker_Source_KingofSlacker_Public_Character_CharacterNPC_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_KingofSlacker_Source_KingofSlacker_Public_Character_CharacterNPC_h_15_INCLASS_NO_PURE_DECLS \
	FID_KingofSlacker_Source_KingofSlacker_Public_Character_CharacterNPC_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACharacterNPC;

// ********** End Class ACharacterNPC **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_KingofSlacker_Source_KingofSlacker_Public_Character_CharacterNPC_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
