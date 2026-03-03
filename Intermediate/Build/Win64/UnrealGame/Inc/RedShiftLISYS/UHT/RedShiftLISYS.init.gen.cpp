// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRedShiftLISYS_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	REDSHIFTLISYS_API UFunction* Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSGetStoreItemsComplete__DelegateSignature();
	REDSHIFTLISYS_API UFunction* Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSHttpGetComplete__DelegateSignature();
	REDSHIFTLISYS_API UFunction* Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSLoginComplete__DelegateSignature();
	REDSHIFTLISYS_API UFunction* Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSPurchaseComplete__DelegateSignature();
	REDSHIFTLISYS_API UFunction* Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSSignUpComplete__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RedShiftLISYS;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RedShiftLISYS()
	{
		if (!Z_Registration_Info_UPackage__Script_RedShiftLISYS.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSGetStoreItemsComplete__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSHttpGetComplete__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSLoginComplete__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSPurchaseComplete__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSSignUpComplete__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/RedShiftLISYS",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x9A5B2747,
			0xFA78F498,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RedShiftLISYS.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_RedShiftLISYS.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RedShiftLISYS(Z_Construct_UPackage__Script_RedShiftLISYS, TEXT("/Script/RedShiftLISYS"), Z_Registration_Info_UPackage__Script_RedShiftLISYS, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9A5B2747, 0xFA78F498));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
