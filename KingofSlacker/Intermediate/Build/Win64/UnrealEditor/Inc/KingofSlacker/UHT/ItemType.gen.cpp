// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory/ItemType.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeItemType() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
KINGOFSLACKER_API UScriptStruct* Z_Construct_UScriptStruct_FItemType();
UPackage* Z_Construct_UPackage__Script_KingofSlacker();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FItemType *********************************************************
static_assert(std::is_polymorphic<FItemType>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FItemType cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FItemType;
class UScriptStruct* FItemType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FItemType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FItemType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemType, (UObject*)Z_Construct_UPackage__Script_KingofSlacker(), TEXT("ItemType"));
	}
	return Z_Registration_Info_UScriptStruct_FItemType.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FItemType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Inventory/ItemType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "Category", "ItemDefinition" },
		{ "ModuleRelativePath", "Public/Inventory/ItemType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDescription_MetaData[] = {
		{ "Category", "ItemDefinition" },
		{ "ModuleRelativePath", "Public/Inventory/ItemType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemQuantity_MetaData[] = {
		{ "Category", "ItemDefinition" },
		{ "ModuleRelativePath", "Public/Inventory/ItemType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemMesh_MetaData[] = {
		{ "Category", "ItemDefinition" },
		{ "ModuleRelativePath", "Public/Inventory/ItemType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemTexture_MetaData[] = {
		{ "Category", "ItemDefinition" },
		{ "ModuleRelativePath", "Public/Inventory/ItemType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ItemDescription;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemQuantity;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ItemMesh;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ItemTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemType>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemType_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemType, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemType_Statics::NewProp_ItemDescription = { "ItemDescription", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemType, ItemDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDescription_MetaData), NewProp_ItemDescription_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemType_Statics::NewProp_ItemQuantity = { "ItemQuantity", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemType, ItemQuantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemQuantity_MetaData), NewProp_ItemQuantity_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FItemType_Statics::NewProp_ItemMesh = { "ItemMesh", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemType, ItemMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemMesh_MetaData), NewProp_ItemMesh_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FItemType_Statics::NewProp_ItemTexture = { "ItemTexture", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemType, ItemTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemTexture_MetaData), NewProp_ItemTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemType_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemType_Statics::NewProp_ItemDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemType_Statics::NewProp_ItemQuantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemType_Statics::NewProp_ItemMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemType_Statics::NewProp_ItemTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemType_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KingofSlacker,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ItemType",
	Z_Construct_UScriptStruct_FItemType_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemType_Statics::PropPointers),
	sizeof(FItemType),
	alignof(FItemType),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemType_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemType_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemType()
{
	if (!Z_Registration_Info_UScriptStruct_FItemType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FItemType.InnerSingleton, Z_Construct_UScriptStruct_FItemType_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FItemType.InnerSingleton;
}
// ********** End ScriptStruct FItemType ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Inventory_ItemType_h__Script_KingofSlacker_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FItemType::StaticStruct, Z_Construct_UScriptStruct_FItemType_Statics::NewStructOps, TEXT("ItemType"), &Z_Registration_Info_UScriptStruct_FItemType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemType), 3145974729U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Inventory_ItemType_h__Script_KingofSlacker_3013286246(TEXT("/Script/KingofSlacker"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Inventory_ItemType_h__Script_KingofSlacker_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KingofSlacker_Source_KingofSlacker_Public_Inventory_ItemType_h__Script_KingofSlacker_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
