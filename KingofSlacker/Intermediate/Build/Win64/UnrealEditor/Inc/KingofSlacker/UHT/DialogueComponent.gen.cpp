// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dialogue/DialogueComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDialogueComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
KINGOFSLACKER_API UClass* Z_Construct_UClass_UDialogueComponent();
KINGOFSLACKER_API UClass* Z_Construct_UClass_UDialogueComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_KingofSlacker();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDialogueComponent *******************************************************
void UDialogueComponent::StaticRegisterNativesUDialogueComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDialogueComponent;
UClass* UDialogueComponent::GetPrivateStaticClass()
{
	using TClass = UDialogueComponent;
	if (!Z_Registration_Info_UClass_UDialogueComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DialogueComponent"),
			Z_Registration_Info_UClass_UDialogueComponent.InnerSingleton,
			StaticRegisterNativesUDialogueComponent,
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
	return Z_Registration_Info_UClass_UDialogueComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UDialogueComponent_NoRegister()
{
	return UDialogueComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDialogueComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Dialogue/DialogueComponent.h" },
		{ "ModuleRelativePath", "Public/Dialogue/DialogueComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDialogueComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_KingofSlacker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueComponent_Statics::ClassParams = {
	&UDialogueComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogueComponent()
{
	if (!Z_Registration_Info_UClass_UDialogueComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueComponent.OuterSingleton, Z_Construct_UClass_UDialogueComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueComponent);
UDialogueComponent::~UDialogueComponent() {}
// ********** End Class UDialogueComponent *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Dialogue_DialogueComponent_h__Script_KingofSlacker_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueComponent, UDialogueComponent::StaticClass, TEXT("UDialogueComponent"), &Z_Registration_Info_UClass_UDialogueComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueComponent), 1725104047U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Dialogue_DialogueComponent_h__Script_KingofSlacker_2366478693(TEXT("/Script/KingofSlacker"),
	Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Dialogue_DialogueComponent_h__Script_KingofSlacker_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Dialogue_DialogueComponent_h__Script_KingofSlacker_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
