// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dialogue/DA_DialogueDefinitions.h"
#include "Dialogue/DialogueDefinition.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDA_DialogueDefinitions() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
KINGOFSLACKER_API UClass* Z_Construct_UClass_UDA_DialogueDefinitions();
KINGOFSLACKER_API UClass* Z_Construct_UClass_UDA_DialogueDefinitions_NoRegister();
KINGOFSLACKER_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueStruct();
UPackage* Z_Construct_UPackage__Script_KingofSlacker();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDA_DialogueDefinitions **************************************************
void UDA_DialogueDefinitions::StaticRegisterNativesUDA_DialogueDefinitions()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDA_DialogueDefinitions;
UClass* UDA_DialogueDefinitions::GetPrivateStaticClass()
{
	using TClass = UDA_DialogueDefinitions;
	if (!Z_Registration_Info_UClass_UDA_DialogueDefinitions.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DA_DialogueDefinitions"),
			Z_Registration_Info_UClass_UDA_DialogueDefinitions.InnerSingleton,
			StaticRegisterNativesUDA_DialogueDefinitions,
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
	return Z_Registration_Info_UClass_UDA_DialogueDefinitions.InnerSingleton;
}
UClass* Z_Construct_UClass_UDA_DialogueDefinitions_NoRegister()
{
	return UDA_DialogueDefinitions::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDA_DialogueDefinitions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Dialogue/DA_DialogueDefinitions.h" },
		{ "ModuleRelativePath", "Public/Dialogue/DA_DialogueDefinitions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dialogues_MetaData[] = {
		{ "Category", "DA_DialogueDefinitions" },
		{ "ModuleRelativePath", "Public/Dialogue/DA_DialogueDefinitions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Dialogues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Dialogues;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDA_DialogueDefinitions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDA_DialogueDefinitions_Statics::NewProp_Dialogues_Inner = { "Dialogues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDialogueStruct, METADATA_PARAMS(0, nullptr) }; // 2200901601
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDA_DialogueDefinitions_Statics::NewProp_Dialogues = { "Dialogues", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDA_DialogueDefinitions, Dialogues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dialogues_MetaData), NewProp_Dialogues_MetaData) }; // 2200901601
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDA_DialogueDefinitions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDA_DialogueDefinitions_Statics::NewProp_Dialogues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDA_DialogueDefinitions_Statics::NewProp_Dialogues,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDA_DialogueDefinitions_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDA_DialogueDefinitions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_KingofSlacker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDA_DialogueDefinitions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDA_DialogueDefinitions_Statics::ClassParams = {
	&UDA_DialogueDefinitions::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDA_DialogueDefinitions_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDA_DialogueDefinitions_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDA_DialogueDefinitions_Statics::Class_MetaDataParams), Z_Construct_UClass_UDA_DialogueDefinitions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDA_DialogueDefinitions()
{
	if (!Z_Registration_Info_UClass_UDA_DialogueDefinitions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDA_DialogueDefinitions.OuterSingleton, Z_Construct_UClass_UDA_DialogueDefinitions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDA_DialogueDefinitions.OuterSingleton;
}
UDA_DialogueDefinitions::UDA_DialogueDefinitions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDA_DialogueDefinitions);
UDA_DialogueDefinitions::~UDA_DialogueDefinitions() {}
// ********** End Class UDA_DialogueDefinitions ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Dialogue_DA_DialogueDefinitions_h__Script_KingofSlacker_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDA_DialogueDefinitions, UDA_DialogueDefinitions::StaticClass, TEXT("UDA_DialogueDefinitions"), &Z_Registration_Info_UClass_UDA_DialogueDefinitions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDA_DialogueDefinitions), 752343100U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Dialogue_DA_DialogueDefinitions_h__Script_KingofSlacker_610078371(TEXT("/Script/KingofSlacker"),
	Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Dialogue_DA_DialogueDefinitions_h__Script_KingofSlacker_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Dialogue_DA_DialogueDefinitions_h__Script_KingofSlacker_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
