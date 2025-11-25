// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gameplay/KS_BlueprintLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeKS_BlueprintLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
KINGOFSLACKER_API UClass* Z_Construct_UClass_UKS_BlueprintLibrary();
KINGOFSLACKER_API UClass* Z_Construct_UClass_UKS_BlueprintLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_KingofSlacker();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UKS_BlueprintLibrary *****************************************************
void UKS_BlueprintLibrary::StaticRegisterNativesUKS_BlueprintLibrary()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UKS_BlueprintLibrary;
UClass* UKS_BlueprintLibrary::GetPrivateStaticClass()
{
	using TClass = UKS_BlueprintLibrary;
	if (!Z_Registration_Info_UClass_UKS_BlueprintLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("KS_BlueprintLibrary"),
			Z_Registration_Info_UClass_UKS_BlueprintLibrary.InnerSingleton,
			StaticRegisterNativesUKS_BlueprintLibrary,
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
	return Z_Registration_Info_UClass_UKS_BlueprintLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UKS_BlueprintLibrary_NoRegister()
{
	return UKS_BlueprintLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKS_BlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Gameplay/KS_BlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/Gameplay/KS_BlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKS_BlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UKS_BlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_KingofSlacker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKS_BlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKS_BlueprintLibrary_Statics::ClassParams = {
	&UKS_BlueprintLibrary::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKS_BlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UKS_BlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UKS_BlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UKS_BlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKS_BlueprintLibrary.OuterSingleton, Z_Construct_UClass_UKS_BlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKS_BlueprintLibrary.OuterSingleton;
}
UKS_BlueprintLibrary::UKS_BlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UKS_BlueprintLibrary);
UKS_BlueprintLibrary::~UKS_BlueprintLibrary() {}
// ********** End Class UKS_BlueprintLibrary *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_BlueprintLibrary_h__Script_KingofSlacker_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKS_BlueprintLibrary, UKS_BlueprintLibrary::StaticClass, TEXT("UKS_BlueprintLibrary"), &Z_Registration_Info_UClass_UKS_BlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKS_BlueprintLibrary), 1367758415U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_BlueprintLibrary_h__Script_KingofSlacker_2201657877(TEXT("/Script/KingofSlacker"),
	Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_BlueprintLibrary_h__Script_KingofSlacker_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Gameplay_KS_BlueprintLibrary_h__Script_KingofSlacker_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
