// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory/ItemActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeItemActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
KINGOFSLACKER_API UClass* Z_Construct_UClass_AItemActor();
KINGOFSLACKER_API UClass* Z_Construct_UClass_AItemActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_KingofSlacker();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AItemActor ***************************************************************
void AItemActor::StaticRegisterNativesAItemActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AItemActor;
UClass* AItemActor::GetPrivateStaticClass()
{
	using TClass = AItemActor;
	if (!Z_Registration_Info_UClass_AItemActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ItemActor"),
			Z_Registration_Info_UClass_AItemActor.InnerSingleton,
			StaticRegisterNativesAItemActor,
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
	return Z_Registration_Info_UClass_AItemActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AItemActor_NoRegister()
{
	return AItemActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AItemActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Inventory/ItemActor.h" },
		{ "ModuleRelativePath", "Public/Inventory/ItemActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AItemActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_KingofSlacker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AItemActor_Statics::ClassParams = {
	&AItemActor::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AItemActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AItemActor()
{
	if (!Z_Registration_Info_UClass_AItemActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItemActor.OuterSingleton, Z_Construct_UClass_AItemActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AItemActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AItemActor);
AItemActor::~AItemActor() {}
// ********** End Class AItemActor *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Inventory_ItemActor_h__Script_KingofSlacker_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AItemActor, AItemActor::StaticClass, TEXT("AItemActor"), &Z_Registration_Info_UClass_AItemActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItemActor), 3852621199U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Inventory_ItemActor_h__Script_KingofSlacker_661667270(TEXT("/Script/KingofSlacker"),
	Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Inventory_ItemActor_h__Script_KingofSlacker_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Inventory_ItemActor_h__Script_KingofSlacker_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
