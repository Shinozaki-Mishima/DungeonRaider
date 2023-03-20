// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonRaider_init() {}
	DUNGEONRAIDER_API UFunction* Z_Construct_UDelegateFunction_DungeonRaider_OnPickUp__DelegateSignature();
	DUNGEONRAIDER_API UFunction* Z_Construct_UDelegateFunction_DungeonRaider_OnUseItem__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DungeonRaider;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DungeonRaider()
	{
		if (!Z_Registration_Info_UPackage__Script_DungeonRaider.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DungeonRaider_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DungeonRaider_OnUseItem__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DungeonRaider",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x26390EF2,
				0x7C1BE6C7,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DungeonRaider.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DungeonRaider.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DungeonRaider(Z_Construct_UPackage__Script_DungeonRaider, TEXT("/Script/DungeonRaider"), Z_Registration_Info_UPackage__Script_DungeonRaider, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x26390EF2, 0x7C1BE6C7));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
