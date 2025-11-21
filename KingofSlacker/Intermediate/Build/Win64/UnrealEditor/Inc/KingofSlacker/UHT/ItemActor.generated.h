// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory/ItemActor.h"

#ifdef KINGOFSLACKER_ItemActor_generated_h
#error "ItemActor.generated.h already included, missing '#pragma once' in ItemActor.h"
#endif
#define KINGOFSLACKER_ItemActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AItemActor ***************************************************************
KINGOFSLACKER_API UClass* Z_Construct_UClass_AItemActor_NoRegister();

#define FID_KingofSlacker_Source_KingofSlacker_Public_Inventory_ItemActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItemActor(); \
	friend struct Z_Construct_UClass_AItemActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend KINGOFSLACKER_API UClass* Z_Construct_UClass_AItemActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AItemActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KingofSlacker"), Z_Construct_UClass_AItemActor_NoRegister) \
	DECLARE_SERIALIZER(AItemActor)


#define FID_KingofSlacker_Source_KingofSlacker_Public_Inventory_ItemActor_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AItemActor(AItemActor&&) = delete; \
	AItemActor(const AItemActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItemActor) \
	NO_API virtual ~AItemActor();


#define FID_KingofSlacker_Source_KingofSlacker_Public_Inventory_ItemActor_h_9_PROLOG
#define FID_KingofSlacker_Source_KingofSlacker_Public_Inventory_ItemActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_KingofSlacker_Source_KingofSlacker_Public_Inventory_ItemActor_h_12_INCLASS_NO_PURE_DECLS \
	FID_KingofSlacker_Source_KingofSlacker_Public_Inventory_ItemActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AItemActor;

// ********** End Class AItemActor *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_KingofSlacker_Source_KingofSlacker_Public_Inventory_ItemActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
