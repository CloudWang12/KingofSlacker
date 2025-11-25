// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/KS_MainWidgetClass.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKS_MainWidgetClass() {}

// ********** Begin Cross Module References ********************************************************
KINGOFSLACKER_API UClass* Z_Construct_UClass_UKS_MainWidgetClass();
KINGOFSLACKER_API UClass* Z_Construct_UClass_UKS_MainWidgetClass_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_KingofSlacker();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UKS_MainWidgetClass ******************************************************
void UKS_MainWidgetClass::StaticRegisterNativesUKS_MainWidgetClass()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UKS_MainWidgetClass;
UClass* UKS_MainWidgetClass::GetPrivateStaticClass()
{
	using TClass = UKS_MainWidgetClass;
	if (!Z_Registration_Info_UClass_UKS_MainWidgetClass.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KS_MainWidgetClass"),
			Z_Registration_Info_UClass_UKS_MainWidgetClass.InnerSingleton,
			StaticRegisterNativesUKS_MainWidgetClass,
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
	return Z_Registration_Info_UClass_UKS_MainWidgetClass.InnerSingleton;
}
UClass* Z_Construct_UClass_UKS_MainWidgetClass_NoRegister()
{
	return UKS_MainWidgetClass::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKS_MainWidgetClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/KS_MainWidgetClass.h" },
		{ "ModuleRelativePath", "Public/UI/KS_MainWidgetClass.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKS_MainWidgetClass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UKS_MainWidgetClass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_KingofSlacker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKS_MainWidgetClass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKS_MainWidgetClass_Statics::ClassParams = {
	&UKS_MainWidgetClass::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKS_MainWidgetClass_Statics::Class_MetaDataParams), Z_Construct_UClass_UKS_MainWidgetClass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKS_MainWidgetClass()
{
	if (!Z_Registration_Info_UClass_UKS_MainWidgetClass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKS_MainWidgetClass.OuterSingleton, Z_Construct_UClass_UKS_MainWidgetClass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKS_MainWidgetClass.OuterSingleton;
}
UKS_MainWidgetClass::UKS_MainWidgetClass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKS_MainWidgetClass);
UKS_MainWidgetClass::~UKS_MainWidgetClass() {}
// ********** End Class UKS_MainWidgetClass ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_UI_KS_MainWidgetClass_h__Script_KingofSlacker_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKS_MainWidgetClass, UKS_MainWidgetClass::StaticClass, TEXT("UKS_MainWidgetClass"), &Z_Registration_Info_UClass_UKS_MainWidgetClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKS_MainWidgetClass), 2189054735U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_UI_KS_MainWidgetClass_h__Script_KingofSlacker_3170826855(TEXT("/Script/KingofSlacker"),
	Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_UI_KS_MainWidgetClass_h__Script_KingofSlacker_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_UI_KS_MainWidgetClass_h__Script_KingofSlacker_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
