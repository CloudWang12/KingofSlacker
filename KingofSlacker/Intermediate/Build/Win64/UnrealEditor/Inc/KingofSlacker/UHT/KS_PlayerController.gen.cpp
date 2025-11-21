// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gameplay/KS_PlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKS_PlayerController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
KINGOFSLACKER_API UClass* Z_Construct_UClass_AKS_PlayerController();
KINGOFSLACKER_API UClass* Z_Construct_UClass_AKS_PlayerController_NoRegister();
KINGOFSLACKER_API UClass* Z_Construct_UClass_UDialogueComponent_NoRegister();
KINGOFSLACKER_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_KingofSlacker();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AKS_PlayerController *****************************************************
void AKS_PlayerController::StaticRegisterNativesAKS_PlayerController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AKS_PlayerController;
UClass* AKS_PlayerController::GetPrivateStaticClass()
{
	using TClass = AKS_PlayerController;
	if (!Z_Registration_Info_UClass_AKS_PlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KS_PlayerController"),
			Z_Registration_Info_UClass_AKS_PlayerController.InnerSingleton,
			StaticRegisterNativesAKS_PlayerController,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AKS_PlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_AKS_PlayerController_NoRegister()
{
	return AKS_PlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AKS_PlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Gameplay/KS_PlayerController.h" },
		{ "ModuleRelativePath", "Public/Gameplay/KS_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryComponent_MetaData[] = {
		{ "Category", "AKS | Component | Dialogue" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gameplay/KS_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueComponent_MetaData[] = {
		{ "Category", "AKS | Component | Dialogue" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gameplay/KS_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContexts_MetaData[] = {
		{ "Category", "AKS | Input|Input Mappings" },
		{ "ModuleRelativePath", "Public/Gameplay/KS_PlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultMappingContexts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKS_PlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKS_PlayerController_Statics::NewProp_InventoryComponent = { "InventoryComponent", nullptr, (EPropertyFlags)0x0114000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKS_PlayerController, InventoryComponent), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryComponent_MetaData), NewProp_InventoryComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKS_PlayerController_Statics::NewProp_DialogueComponent = { "DialogueComponent", nullptr, (EPropertyFlags)0x0114000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKS_PlayerController, DialogueComponent), Z_Construct_UClass_UDialogueComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueComponent_MetaData), NewProp_DialogueComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKS_PlayerController_Statics::NewProp_DefaultMappingContexts_Inner = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AKS_PlayerController_Statics::NewProp_DefaultMappingContexts = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKS_PlayerController, DefaultMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContexts_MetaData), NewProp_DefaultMappingContexts_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKS_PlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKS_PlayerController_Statics::NewProp_InventoryComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKS_PlayerController_Statics::NewProp_DialogueComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKS_PlayerController_Statics::NewProp_DefaultMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKS_PlayerController_Statics::NewProp_DefaultMappingContexts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKS_PlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AKS_PlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_KingofSlacker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKS_PlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AKS_PlayerController_Statics::ClassParams = {
	&AKS_PlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AKS_PlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AKS_PlayerController_Statics::PropPointers),
	0,
	0x009003A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKS_PlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AKS_PlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AKS_PlayerController()
{
	if (!Z_Registration_Info_UClass_AKS_PlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKS_PlayerController.OuterSingleton, Z_Construct_UClass_AKS_PlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AKS_PlayerController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AKS_PlayerController);
AKS_PlayerController::~AKS_PlayerController() {}
// ********** End Class AKS_PlayerController *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_PlayerController_h__Script_KingofSlacker_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AKS_PlayerController, AKS_PlayerController::StaticClass, TEXT("AKS_PlayerController"), &Z_Registration_Info_UClass_AKS_PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKS_PlayerController), 2995005244U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_PlayerController_h__Script_KingofSlacker_2175049241(TEXT("/Script/KingofSlacker"),
	Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_PlayerController_h__Script_KingofSlacker_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_PlayerController_h__Script_KingofSlacker_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
