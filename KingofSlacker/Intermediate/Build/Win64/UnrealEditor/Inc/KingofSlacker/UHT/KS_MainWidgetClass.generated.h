// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/KS_MainWidgetClass.h"

#ifdef KINGOFSLACKER_KS_MainWidgetClass_generated_h
#error "KS_MainWidgetClass.generated.h already included, missing '#pragma once' in KS_MainWidgetClass.h"
#endif
#define KINGOFSLACKER_KS_MainWidgetClass_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UKS_MainWidgetClass ******************************************************
KINGOFSLACKER_API UClass* Z_Construct_UClass_UKS_MainWidgetClass_NoRegister();

#define FID_KingofSlacker_Source_KingofSlacker_Public_UI_KS_MainWidgetClass_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKS_MainWidgetClass(); \
	friend struct Z_Construct_UClass_UKS_MainWidgetClass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend KINGOFSLACKER_API UClass* Z_Construct_UClass_UKS_MainWidgetClass_NoRegister(); \
public: \
	DECLARE_CLASS2(UKS_MainWidgetClass, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KingofSlacker"), Z_Construct_UClass_UKS_MainWidgetClass_NoRegister) \
	DECLARE_SERIALIZER(UKS_MainWidgetClass)


#define FID_KingofSlacker_Source_KingofSlacker_Public_UI_KS_MainWidgetClass_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKS_MainWidgetClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UKS_MainWidgetClass(UKS_MainWidgetClass&&) = delete; \
	UKS_MainWidgetClass(const UKS_MainWidgetClass&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKS_MainWidgetClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKS_MainWidgetClass); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKS_MainWidgetClass) \
	NO_API virtual ~UKS_MainWidgetClass();


#define FID_KingofSlacker_Source_KingofSlacker_Public_UI_KS_MainWidgetClass_h_12_PROLOG
#define FID_KingofSlacker_Source_KingofSlacker_Public_UI_KS_MainWidgetClass_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_KingofSlacker_Source_KingofSlacker_Public_UI_KS_MainWidgetClass_h_15_INCLASS_NO_PURE_DECLS \
	FID_KingofSlacker_Source_KingofSlacker_Public_UI_KS_MainWidgetClass_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UKS_MainWidgetClass;

// ********** End Class UKS_MainWidgetClass ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_KingofSlacker_Source_KingofSlacker_Public_UI_KS_MainWidgetClass_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
