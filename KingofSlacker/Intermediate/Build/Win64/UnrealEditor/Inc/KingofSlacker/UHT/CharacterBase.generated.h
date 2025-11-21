// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/CharacterBase.h"

#ifdef KINGOFSLACKER_CharacterBase_generated_h
#error "CharacterBase.generated.h already included, missing '#pragma once' in CharacterBase.h"
#endif
#define KINGOFSLACKER_CharacterBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACharacterBase ***********************************************************
#define FID_KingofSlacker_Source_KingofSlacker_Public_Character_CharacterBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


KINGOFSLACKER_API UClass* Z_Construct_UClass_ACharacterBase_NoRegister();

#define FID_KingofSlacker_Source_KingofSlacker_Public_Character_CharacterBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacterBase(); \
	friend struct Z_Construct_UClass_ACharacterBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend KINGOFSLACKER_API UClass* Z_Construct_UClass_ACharacterBase_NoRegister(); \
public: \
	DECLARE_CLASS2(ACharacterBase, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/KingofSlacker"), Z_Construct_UClass_ACharacterBase_NoRegister) \
	DECLARE_SERIALIZER(ACharacterBase)


#define FID_KingofSlacker_Source_KingofSlacker_Public_Character_CharacterBase_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACharacterBase(ACharacterBase&&) = delete; \
	ACharacterBase(const ACharacterBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ACharacterBase) \
	NO_API virtual ~ACharacterBase();


#define FID_KingofSlacker_Source_KingofSlacker_Public_Character_CharacterBase_h_14_PROLOG
#define FID_KingofSlacker_Source_KingofSlacker_Public_Character_CharacterBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_KingofSlacker_Source_KingofSlacker_Public_Character_CharacterBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_KingofSlacker_Source_KingofSlacker_Public_Character_CharacterBase_h_17_INCLASS_NO_PURE_DECLS \
	FID_KingofSlacker_Source_KingofSlacker_Public_Character_CharacterBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACharacterBase;

// ********** End Class ACharacterBase *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_KingofSlacker_Source_KingofSlacker_Public_Character_CharacterBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
