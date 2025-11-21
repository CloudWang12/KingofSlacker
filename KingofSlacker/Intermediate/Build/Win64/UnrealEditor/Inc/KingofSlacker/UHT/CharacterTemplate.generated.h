// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/CharacterTemplate.h"

#ifdef KINGOFSLACKER_CharacterTemplate_generated_h
#error "CharacterTemplate.generated.h already included, missing '#pragma once' in CharacterTemplate.h"
#endif
#define KINGOFSLACKER_CharacterTemplate_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACharacterTemplate *******************************************************
KINGOFSLACKER_API UClass* Z_Construct_UClass_ACharacterTemplate_NoRegister();

#define FID_KingofSlacker_Source_KingofSlacker_Public_Character_CharacterTemplate_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacterTemplate(); \
	friend struct Z_Construct_UClass_ACharacterTemplate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend KINGOFSLACKER_API UClass* Z_Construct_UClass_ACharacterTemplate_NoRegister(); \
public: \
	DECLARE_CLASS2(ACharacterTemplate, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KingofSlacker"), Z_Construct_UClass_ACharacterTemplate_NoRegister) \
	DECLARE_SERIALIZER(ACharacterTemplate)


#define FID_KingofSlacker_Source_KingofSlacker_Public_Character_CharacterTemplate_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACharacterTemplate(ACharacterTemplate&&) = delete; \
	ACharacterTemplate(const ACharacterTemplate&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterTemplate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterTemplate); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharacterTemplate) \
	NO_API virtual ~ACharacterTemplate();


#define FID_KingofSlacker_Source_KingofSlacker_Public_Character_CharacterTemplate_h_9_PROLOG
#define FID_KingofSlacker_Source_KingofSlacker_Public_Character_CharacterTemplate_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_KingofSlacker_Source_KingofSlacker_Public_Character_CharacterTemplate_h_12_INCLASS_NO_PURE_DECLS \
	FID_KingofSlacker_Source_KingofSlacker_Public_Character_CharacterTemplate_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACharacterTemplate;

// ********** End Class ACharacterTemplate *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_KingofSlacker_Source_KingofSlacker_Public_Character_CharacterTemplate_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
