// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Attribute/AttributeComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAttributeComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
KINGOFSLACKER_API UClass* Z_Construct_UClass_UAttributeComponent();
KINGOFSLACKER_API UClass* Z_Construct_UClass_UAttributeComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_KingofSlacker();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAttributeComponent ******************************************************
void UAttributeComponent::StaticRegisterNativesUAttributeComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAttributeComponent;
UClass* UAttributeComponent::GetPrivateStaticClass()
{
	using TClass = UAttributeComponent;
	if (!Z_Registration_Info_UClass_UAttributeComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AttributeComponent"),
			Z_Registration_Info_UClass_UAttributeComponent.InnerSingleton,
			StaticRegisterNativesUAttributeComponent,
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
	return Z_Registration_Info_UClass_UAttributeComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UAttributeComponent_NoRegister()
{
	return UAttributeComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAttributeComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Attribute/AttributeComponent.h" },
		{ "ModuleRelativePath", "Public/Attribute/AttributeComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAttributeComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_KingofSlacker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributeComponent_Statics::ClassParams = {
	&UAttributeComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttributeComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAttributeComponent()
{
	if (!Z_Registration_Info_UClass_UAttributeComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributeComponent.OuterSingleton, Z_Construct_UClass_UAttributeComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAttributeComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeComponent);
UAttributeComponent::~UAttributeComponent() {}
// ********** End Class UAttributeComponent ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Attribute_AttributeComponent_h__Script_KingofSlacker_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAttributeComponent, UAttributeComponent::StaticClass, TEXT("UAttributeComponent"), &Z_Registration_Info_UClass_UAttributeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributeComponent), 3088620053U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Attribute_AttributeComponent_h__Script_KingofSlacker_3802512488(TEXT("/Script/KingofSlacker"),
	Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Attribute_AttributeComponent_h__Script_KingofSlacker_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Attribute_AttributeComponent_h__Script_KingofSlacker_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
