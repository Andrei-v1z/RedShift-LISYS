// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RedShiftLISYSSubsystem.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRedShiftLISYSSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
REDSHIFTLISYS_API UClass* Z_Construct_UClass_URedShiftLISYSSubsystem();
REDSHIFTLISYS_API UClass* Z_Construct_UClass_URedShiftLISYSSubsystem_NoRegister();
REDSHIFTLISYS_API UFunction* Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSGetStoreItemsComplete__DelegateSignature();
REDSHIFTLISYS_API UFunction* Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSHttpGetComplete__DelegateSignature();
REDSHIFTLISYS_API UFunction* Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSLoginComplete__DelegateSignature();
REDSHIFTLISYS_API UFunction* Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSPurchaseComplete__DelegateSignature();
REDSHIFTLISYS_API UFunction* Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSSignUpComplete__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_RedShiftLISYS();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnLISYSLoginComplete *************************************************
struct Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSLoginComplete__DelegateSignature_Statics
{
	struct _Script_RedShiftLISYS_eventOnLISYSLoginComplete_Parms
	{
		bool bSuccess;
		FString ResponseJsonString;
		FString ErrorMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RedShiftLISYSSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseJsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnLISYSLoginComplete constinit property declarations *****************
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ResponseJsonString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnLISYSLoginComplete constinit property declarations *******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnLISYSLoginComplete Property Definitions ****************************
void Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSLoginComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_RedShiftLISYS_eventOnLISYSLoginComplete_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSLoginComplete__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_RedShiftLISYS_eventOnLISYSLoginComplete_Parms), &Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSLoginComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSLoginComplete__DelegateSignature_Statics::NewProp_ResponseJsonString = { "ResponseJsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RedShiftLISYS_eventOnLISYSLoginComplete_Parms, ResponseJsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseJsonString_MetaData), NewProp_ResponseJsonString_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSLoginComplete__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RedShiftLISYS_eventOnLISYSLoginComplete_Parms, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSLoginComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSLoginComplete__DelegateSignature_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSLoginComplete__DelegateSignature_Statics::NewProp_ResponseJsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSLoginComplete__DelegateSignature_Statics::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSLoginComplete__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnLISYSLoginComplete Property Definitions ******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSLoginComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_RedShiftLISYS, nullptr, "OnLISYSLoginComplete__DelegateSignature", 	Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSLoginComplete__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSLoginComplete__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSLoginComplete__DelegateSignature_Statics::_Script_RedShiftLISYS_eventOnLISYSLoginComplete_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSLoginComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSLoginComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSLoginComplete__DelegateSignature_Statics::_Script_RedShiftLISYS_eventOnLISYSLoginComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSLoginComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSLoginComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLISYSLoginComplete_DelegateWrapper(const FMulticastScriptDelegate& OnLISYSLoginComplete, bool bSuccess, const FString& ResponseJsonString, const FString& ErrorMessage)
{
	struct _Script_RedShiftLISYS_eventOnLISYSLoginComplete_Parms
	{
		bool bSuccess;
		FString ResponseJsonString;
		FString ErrorMessage;
	};
	_Script_RedShiftLISYS_eventOnLISYSLoginComplete_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	Parms.ResponseJsonString=ResponseJsonString;
	Parms.ErrorMessage=ErrorMessage;
	OnLISYSLoginComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnLISYSLoginComplete ***************************************************

// ********** Begin Delegate FOnLISYSSignUpComplete ************************************************
struct Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSSignUpComplete__DelegateSignature_Statics
{
	struct _Script_RedShiftLISYS_eventOnLISYSSignUpComplete_Parms
	{
		bool bSuccess;
		FString ResponseJsonString;
		FString ErrorMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RedShiftLISYSSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseJsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnLISYSSignUpComplete constinit property declarations ****************
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ResponseJsonString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnLISYSSignUpComplete constinit property declarations ******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnLISYSSignUpComplete Property Definitions ***************************
void Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSSignUpComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_RedShiftLISYS_eventOnLISYSSignUpComplete_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSSignUpComplete__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_RedShiftLISYS_eventOnLISYSSignUpComplete_Parms), &Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSSignUpComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSSignUpComplete__DelegateSignature_Statics::NewProp_ResponseJsonString = { "ResponseJsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RedShiftLISYS_eventOnLISYSSignUpComplete_Parms, ResponseJsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseJsonString_MetaData), NewProp_ResponseJsonString_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSSignUpComplete__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RedShiftLISYS_eventOnLISYSSignUpComplete_Parms, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSSignUpComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSSignUpComplete__DelegateSignature_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSSignUpComplete__DelegateSignature_Statics::NewProp_ResponseJsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSSignUpComplete__DelegateSignature_Statics::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSSignUpComplete__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnLISYSSignUpComplete Property Definitions *****************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSSignUpComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_RedShiftLISYS, nullptr, "OnLISYSSignUpComplete__DelegateSignature", 	Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSSignUpComplete__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSSignUpComplete__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSSignUpComplete__DelegateSignature_Statics::_Script_RedShiftLISYS_eventOnLISYSSignUpComplete_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSSignUpComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSSignUpComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSSignUpComplete__DelegateSignature_Statics::_Script_RedShiftLISYS_eventOnLISYSSignUpComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSSignUpComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSSignUpComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLISYSSignUpComplete_DelegateWrapper(const FMulticastScriptDelegate& OnLISYSSignUpComplete, bool bSuccess, const FString& ResponseJsonString, const FString& ErrorMessage)
{
	struct _Script_RedShiftLISYS_eventOnLISYSSignUpComplete_Parms
	{
		bool bSuccess;
		FString ResponseJsonString;
		FString ErrorMessage;
	};
	_Script_RedShiftLISYS_eventOnLISYSSignUpComplete_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	Parms.ResponseJsonString=ResponseJsonString;
	Parms.ErrorMessage=ErrorMessage;
	OnLISYSSignUpComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnLISYSSignUpComplete **************************************************

// ********** Begin Delegate FOnLISYSHttpGetComplete ***********************************************
struct Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSHttpGetComplete__DelegateSignature_Statics
{
	struct _Script_RedShiftLISYS_eventOnLISYSHttpGetComplete_Parms
	{
		bool bSuccess;
		FString ResponseJsonString;
		FString ErrorMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RedShiftLISYSSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseJsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnLISYSHttpGetComplete constinit property declarations ***************
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ResponseJsonString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnLISYSHttpGetComplete constinit property declarations *****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnLISYSHttpGetComplete Property Definitions **************************
void Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSHttpGetComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_RedShiftLISYS_eventOnLISYSHttpGetComplete_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSHttpGetComplete__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_RedShiftLISYS_eventOnLISYSHttpGetComplete_Parms), &Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSHttpGetComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSHttpGetComplete__DelegateSignature_Statics::NewProp_ResponseJsonString = { "ResponseJsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RedShiftLISYS_eventOnLISYSHttpGetComplete_Parms, ResponseJsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseJsonString_MetaData), NewProp_ResponseJsonString_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSHttpGetComplete__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RedShiftLISYS_eventOnLISYSHttpGetComplete_Parms, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSHttpGetComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSHttpGetComplete__DelegateSignature_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSHttpGetComplete__DelegateSignature_Statics::NewProp_ResponseJsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSHttpGetComplete__DelegateSignature_Statics::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSHttpGetComplete__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnLISYSHttpGetComplete Property Definitions ****************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSHttpGetComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_RedShiftLISYS, nullptr, "OnLISYSHttpGetComplete__DelegateSignature", 	Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSHttpGetComplete__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSHttpGetComplete__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSHttpGetComplete__DelegateSignature_Statics::_Script_RedShiftLISYS_eventOnLISYSHttpGetComplete_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSHttpGetComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSHttpGetComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSHttpGetComplete__DelegateSignature_Statics::_Script_RedShiftLISYS_eventOnLISYSHttpGetComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSHttpGetComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSHttpGetComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLISYSHttpGetComplete_DelegateWrapper(const FMulticastScriptDelegate& OnLISYSHttpGetComplete, bool bSuccess, const FString& ResponseJsonString, const FString& ErrorMessage)
{
	struct _Script_RedShiftLISYS_eventOnLISYSHttpGetComplete_Parms
	{
		bool bSuccess;
		FString ResponseJsonString;
		FString ErrorMessage;
	};
	_Script_RedShiftLISYS_eventOnLISYSHttpGetComplete_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	Parms.ResponseJsonString=ResponseJsonString;
	Parms.ErrorMessage=ErrorMessage;
	OnLISYSHttpGetComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnLISYSHttpGetComplete *************************************************

// ********** Begin Delegate FOnLISYSGetStoreItemsComplete *****************************************
struct Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSGetStoreItemsComplete__DelegateSignature_Statics
{
	struct _Script_RedShiftLISYS_eventOnLISYSGetStoreItemsComplete_Parms
	{
		bool bSuccess;
		FString ResponseJsonString;
		FString ErrorMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RedShiftLISYSSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseJsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnLISYSGetStoreItemsComplete constinit property declarations *********
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ResponseJsonString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnLISYSGetStoreItemsComplete constinit property declarations ***********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnLISYSGetStoreItemsComplete Property Definitions ********************
void Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSGetStoreItemsComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_RedShiftLISYS_eventOnLISYSGetStoreItemsComplete_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSGetStoreItemsComplete__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_RedShiftLISYS_eventOnLISYSGetStoreItemsComplete_Parms), &Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSGetStoreItemsComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSGetStoreItemsComplete__DelegateSignature_Statics::NewProp_ResponseJsonString = { "ResponseJsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RedShiftLISYS_eventOnLISYSGetStoreItemsComplete_Parms, ResponseJsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseJsonString_MetaData), NewProp_ResponseJsonString_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSGetStoreItemsComplete__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RedShiftLISYS_eventOnLISYSGetStoreItemsComplete_Parms, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSGetStoreItemsComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSGetStoreItemsComplete__DelegateSignature_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSGetStoreItemsComplete__DelegateSignature_Statics::NewProp_ResponseJsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSGetStoreItemsComplete__DelegateSignature_Statics::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSGetStoreItemsComplete__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnLISYSGetStoreItemsComplete Property Definitions **********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSGetStoreItemsComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_RedShiftLISYS, nullptr, "OnLISYSGetStoreItemsComplete__DelegateSignature", 	Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSGetStoreItemsComplete__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSGetStoreItemsComplete__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSGetStoreItemsComplete__DelegateSignature_Statics::_Script_RedShiftLISYS_eventOnLISYSGetStoreItemsComplete_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSGetStoreItemsComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSGetStoreItemsComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSGetStoreItemsComplete__DelegateSignature_Statics::_Script_RedShiftLISYS_eventOnLISYSGetStoreItemsComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSGetStoreItemsComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSGetStoreItemsComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLISYSGetStoreItemsComplete_DelegateWrapper(const FMulticastScriptDelegate& OnLISYSGetStoreItemsComplete, bool bSuccess, const FString& ResponseJsonString, const FString& ErrorMessage)
{
	struct _Script_RedShiftLISYS_eventOnLISYSGetStoreItemsComplete_Parms
	{
		bool bSuccess;
		FString ResponseJsonString;
		FString ErrorMessage;
	};
	_Script_RedShiftLISYS_eventOnLISYSGetStoreItemsComplete_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	Parms.ResponseJsonString=ResponseJsonString;
	Parms.ErrorMessage=ErrorMessage;
	OnLISYSGetStoreItemsComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnLISYSGetStoreItemsComplete *******************************************

// ********** Begin Delegate FOnLISYSPurchaseComplete **********************************************
struct Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSPurchaseComplete__DelegateSignature_Statics
{
	struct _Script_RedShiftLISYS_eventOnLISYSPurchaseComplete_Parms
	{
		bool bSuccess;
		FString ResponseJsonString;
		FString ErrorMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RedShiftLISYSSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseJsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnLISYSPurchaseComplete constinit property declarations **************
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ResponseJsonString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnLISYSPurchaseComplete constinit property declarations ****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnLISYSPurchaseComplete Property Definitions *************************
void Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSPurchaseComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_RedShiftLISYS_eventOnLISYSPurchaseComplete_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSPurchaseComplete__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_RedShiftLISYS_eventOnLISYSPurchaseComplete_Parms), &Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSPurchaseComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSPurchaseComplete__DelegateSignature_Statics::NewProp_ResponseJsonString = { "ResponseJsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RedShiftLISYS_eventOnLISYSPurchaseComplete_Parms, ResponseJsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseJsonString_MetaData), NewProp_ResponseJsonString_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSPurchaseComplete__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RedShiftLISYS_eventOnLISYSPurchaseComplete_Parms, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSPurchaseComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSPurchaseComplete__DelegateSignature_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSPurchaseComplete__DelegateSignature_Statics::NewProp_ResponseJsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSPurchaseComplete__DelegateSignature_Statics::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSPurchaseComplete__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnLISYSPurchaseComplete Property Definitions ***************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSPurchaseComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_RedShiftLISYS, nullptr, "OnLISYSPurchaseComplete__DelegateSignature", 	Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSPurchaseComplete__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSPurchaseComplete__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSPurchaseComplete__DelegateSignature_Statics::_Script_RedShiftLISYS_eventOnLISYSPurchaseComplete_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSPurchaseComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSPurchaseComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSPurchaseComplete__DelegateSignature_Statics::_Script_RedShiftLISYS_eventOnLISYSPurchaseComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSPurchaseComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSPurchaseComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLISYSPurchaseComplete_DelegateWrapper(const FMulticastScriptDelegate& OnLISYSPurchaseComplete, bool bSuccess, const FString& ResponseJsonString, const FString& ErrorMessage)
{
	struct _Script_RedShiftLISYS_eventOnLISYSPurchaseComplete_Parms
	{
		bool bSuccess;
		FString ResponseJsonString;
		FString ErrorMessage;
	};
	_Script_RedShiftLISYS_eventOnLISYSPurchaseComplete_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	Parms.ResponseJsonString=ResponseJsonString;
	Parms.ErrorMessage=ErrorMessage;
	OnLISYSPurchaseComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnLISYSPurchaseComplete ************************************************

// ********** Begin Class URedShiftLISYSSubsystem Function LISYSGetStoreItems **********************
struct Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSGetStoreItems_Statics
{
	struct RedShiftLISYSSubsystem_eventLISYSGetStoreItems_Parms
	{
		UObject* WorldContextObject;
		FString StoreItemsUrl;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RedShift|LISYS" },
		{ "Comment", "/** LISYS: HTTPS GET to fetch store items (micro-transaction catalog). Result via OnLISYSGetStoreItemsComplete. */" },
		{ "DisplayName", "LISYS Get Store Items" },
		{ "ModuleRelativePath", "Public/RedShiftLISYSSubsystem.h" },
		{ "ToolTip", "LISYS: HTTPS GET to fetch store items (micro-transaction catalog). Result via OnLISYSGetStoreItemsComplete." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StoreItemsUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function LISYSGetStoreItems constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StoreItemsUrl;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LISYSGetStoreItems constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LISYSGetStoreItems Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSGetStoreItems_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RedShiftLISYSSubsystem_eventLISYSGetStoreItems_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSGetStoreItems_Statics::NewProp_StoreItemsUrl = { "StoreItemsUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RedShiftLISYSSubsystem_eventLISYSGetStoreItems_Parms, StoreItemsUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StoreItemsUrl_MetaData), NewProp_StoreItemsUrl_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSGetStoreItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSGetStoreItems_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSGetStoreItems_Statics::NewProp_StoreItemsUrl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSGetStoreItems_Statics::PropPointers) < 2048);
// ********** End Function LISYSGetStoreItems Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSGetStoreItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URedShiftLISYSSubsystem, nullptr, "LISYSGetStoreItems", 	Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSGetStoreItems_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSGetStoreItems_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSGetStoreItems_Statics::RedShiftLISYSSubsystem_eventLISYSGetStoreItems_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSGetStoreItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSGetStoreItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSGetStoreItems_Statics::RedShiftLISYSSubsystem_eventLISYSGetStoreItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSGetStoreItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSGetStoreItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URedShiftLISYSSubsystem::execLISYSGetStoreItems)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_StoreItemsUrl);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LISYSGetStoreItems(Z_Param_WorldContextObject,Z_Param_StoreItemsUrl);
	P_NATIVE_END;
}
// ********** End Class URedShiftLISYSSubsystem Function LISYSGetStoreItems ************************

// ********** Begin Class URedShiftLISYSSubsystem Function LISYSHttpGetRequest *********************
struct Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSHttpGetRequest_Statics
{
	struct RedShiftLISYSSubsystem_eventLISYSHttpGetRequest_Parms
	{
		UObject* WorldContextObject;
		FString Url;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RedShift|LISYS" },
		{ "Comment", "/** LISYS: Generic HTTPS GET. Result via OnLISYSHttpGetComplete. */" },
		{ "DisplayName", "LISYS Http Get Request" },
		{ "ModuleRelativePath", "Public/RedShiftLISYSSubsystem.h" },
		{ "ToolTip", "LISYS: Generic HTTPS GET. Result via OnLISYSHttpGetComplete." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function LISYSHttpGetRequest constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LISYSHttpGetRequest constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LISYSHttpGetRequest Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSHttpGetRequest_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RedShiftLISYSSubsystem_eventLISYSHttpGetRequest_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSHttpGetRequest_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RedShiftLISYSSubsystem_eventLISYSHttpGetRequest_Parms, Url), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Url_MetaData), NewProp_Url_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSHttpGetRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSHttpGetRequest_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSHttpGetRequest_Statics::NewProp_Url,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSHttpGetRequest_Statics::PropPointers) < 2048);
// ********** End Function LISYSHttpGetRequest Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSHttpGetRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URedShiftLISYSSubsystem, nullptr, "LISYSHttpGetRequest", 	Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSHttpGetRequest_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSHttpGetRequest_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSHttpGetRequest_Statics::RedShiftLISYSSubsystem_eventLISYSHttpGetRequest_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSHttpGetRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSHttpGetRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSHttpGetRequest_Statics::RedShiftLISYSSubsystem_eventLISYSHttpGetRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSHttpGetRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSHttpGetRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URedShiftLISYSSubsystem::execLISYSHttpGetRequest)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Url);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LISYSHttpGetRequest(Z_Param_WorldContextObject,Z_Param_Url);
	P_NATIVE_END;
}
// ********** End Class URedShiftLISYSSubsystem Function LISYSHttpGetRequest ***********************

// ********** Begin Class URedShiftLISYSSubsystem Function LISYSRequestLogin ***********************
struct Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestLogin_Statics
{
	struct RedShiftLISYSSubsystem_eventLISYSRequestLogin_Parms
	{
		UObject* WorldContextObject;
		FString LoginUrl;
		FString Username;
		FString Password;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RedShift|LISYS" },
		{ "Comment", "/** LISYS: Sends HTTPS POST to PHP login URL (body: username/password). Safer than GET. Response includes session_token if successful. */" },
		{ "DisplayName", "LISYS Request Login" },
		{ "ModuleRelativePath", "Public/RedShiftLISYSSubsystem.h" },
		{ "ToolTip", "LISYS: Sends HTTPS POST to PHP login URL (body: username/password). Safer than GET. Response includes session_token if successful." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoginUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function LISYSRequestLogin constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LoginUrl;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Username;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LISYSRequestLogin constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LISYSRequestLogin Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestLogin_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RedShiftLISYSSubsystem_eventLISYSRequestLogin_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestLogin_Statics::NewProp_LoginUrl = { "LoginUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RedShiftLISYSSubsystem_eventLISYSRequestLogin_Parms, LoginUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoginUrl_MetaData), NewProp_LoginUrl_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestLogin_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RedShiftLISYSSubsystem_eventLISYSRequestLogin_Parms, Username), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Username_MetaData), NewProp_Username_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestLogin_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RedShiftLISYSSubsystem_eventLISYSRequestLogin_Parms, Password), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Password_MetaData), NewProp_Password_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestLogin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestLogin_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestLogin_Statics::NewProp_LoginUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestLogin_Statics::NewProp_Username,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestLogin_Statics::NewProp_Password,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestLogin_Statics::PropPointers) < 2048);
// ********** End Function LISYSRequestLogin Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestLogin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URedShiftLISYSSubsystem, nullptr, "LISYSRequestLogin", 	Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestLogin_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestLogin_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestLogin_Statics::RedShiftLISYSSubsystem_eventLISYSRequestLogin_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestLogin_Statics::Function_MetaDataParams), Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestLogin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestLogin_Statics::RedShiftLISYSSubsystem_eventLISYSRequestLogin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestLogin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestLogin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URedShiftLISYSSubsystem::execLISYSRequestLogin)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_LoginUrl);
	P_GET_PROPERTY(FStrProperty,Z_Param_Username);
	P_GET_PROPERTY(FStrProperty,Z_Param_Password);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LISYSRequestLogin(Z_Param_WorldContextObject,Z_Param_LoginUrl,Z_Param_Username,Z_Param_Password);
	P_NATIVE_END;
}
// ********** End Class URedShiftLISYSSubsystem Function LISYSRequestLogin *************************

// ********** Begin Class URedShiftLISYSSubsystem Function LISYSRequestPurchase ********************
struct Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestPurchase_Statics
{
	struct RedShiftLISYSSubsystem_eventLISYSRequestPurchase_Parms
	{
		UObject* WorldContextObject;
		FString PurchaseUrl;
		FString SessionToken;
		FString ItemId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RedShift|LISYS" },
		{ "Comment", "/** LISYS: Sends HTTPS POST to PHP purchase URL (body: session_token/user_id, item_id). For in-game micro-transactions. */" },
		{ "DisplayName", "LISYS Request Purchase" },
		{ "ModuleRelativePath", "Public/RedShiftLISYSSubsystem.h" },
		{ "ToolTip", "LISYS: Sends HTTPS POST to PHP purchase URL (body: session_token/user_id, item_id). For in-game micro-transactions." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PurchaseUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionToken_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function LISYSRequestPurchase constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PurchaseUrl;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionToken;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LISYSRequestPurchase constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LISYSRequestPurchase Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestPurchase_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RedShiftLISYSSubsystem_eventLISYSRequestPurchase_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestPurchase_Statics::NewProp_PurchaseUrl = { "PurchaseUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RedShiftLISYSSubsystem_eventLISYSRequestPurchase_Parms, PurchaseUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PurchaseUrl_MetaData), NewProp_PurchaseUrl_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestPurchase_Statics::NewProp_SessionToken = { "SessionToken", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RedShiftLISYSSubsystem_eventLISYSRequestPurchase_Parms, SessionToken), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionToken_MetaData), NewProp_SessionToken_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestPurchase_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RedShiftLISYSSubsystem_eventLISYSRequestPurchase_Parms, ItemId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemId_MetaData), NewProp_ItemId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestPurchase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestPurchase_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestPurchase_Statics::NewProp_PurchaseUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestPurchase_Statics::NewProp_SessionToken,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestPurchase_Statics::NewProp_ItemId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestPurchase_Statics::PropPointers) < 2048);
// ********** End Function LISYSRequestPurchase Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestPurchase_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URedShiftLISYSSubsystem, nullptr, "LISYSRequestPurchase", 	Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestPurchase_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestPurchase_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestPurchase_Statics::RedShiftLISYSSubsystem_eventLISYSRequestPurchase_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestPurchase_Statics::Function_MetaDataParams), Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestPurchase_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestPurchase_Statics::RedShiftLISYSSubsystem_eventLISYSRequestPurchase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestPurchase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestPurchase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URedShiftLISYSSubsystem::execLISYSRequestPurchase)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_PurchaseUrl);
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionToken);
	P_GET_PROPERTY(FStrProperty,Z_Param_ItemId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LISYSRequestPurchase(Z_Param_WorldContextObject,Z_Param_PurchaseUrl,Z_Param_SessionToken,Z_Param_ItemId);
	P_NATIVE_END;
}
// ********** End Class URedShiftLISYSSubsystem Function LISYSRequestPurchase **********************

// ********** Begin Class URedShiftLISYSSubsystem Function LISYSRequestSignUp **********************
struct Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestSignUp_Statics
{
	struct RedShiftLISYSSubsystem_eventLISYSRequestSignUp_Parms
	{
		UObject* WorldContextObject;
		FString SignUpUrl;
		FString Username;
		FString Password;
		FString Email;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RedShift|LISYS" },
		{ "Comment", "/** LISYS: Sends HTTPS POST to PHP sign-up URL (body: username/password/email). Response includes session_token if successful. */" },
		{ "DisplayName", "LISYS Request Sign Up" },
		{ "ModuleRelativePath", "Public/RedShiftLISYSSubsystem.h" },
		{ "ToolTip", "LISYS: Sends HTTPS POST to PHP sign-up URL (body: username/password/email). Response includes session_token if successful." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SignUpUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function LISYSRequestSignUp constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SignUpUrl;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Username;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Email;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LISYSRequestSignUp constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LISYSRequestSignUp Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestSignUp_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RedShiftLISYSSubsystem_eventLISYSRequestSignUp_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestSignUp_Statics::NewProp_SignUpUrl = { "SignUpUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RedShiftLISYSSubsystem_eventLISYSRequestSignUp_Parms, SignUpUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SignUpUrl_MetaData), NewProp_SignUpUrl_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestSignUp_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RedShiftLISYSSubsystem_eventLISYSRequestSignUp_Parms, Username), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Username_MetaData), NewProp_Username_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestSignUp_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RedShiftLISYSSubsystem_eventLISYSRequestSignUp_Parms, Password), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Password_MetaData), NewProp_Password_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestSignUp_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RedShiftLISYSSubsystem_eventLISYSRequestSignUp_Parms, Email), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Email_MetaData), NewProp_Email_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestSignUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestSignUp_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestSignUp_Statics::NewProp_SignUpUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestSignUp_Statics::NewProp_Username,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestSignUp_Statics::NewProp_Password,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestSignUp_Statics::NewProp_Email,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestSignUp_Statics::PropPointers) < 2048);
// ********** End Function LISYSRequestSignUp Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestSignUp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URedShiftLISYSSubsystem, nullptr, "LISYSRequestSignUp", 	Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestSignUp_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestSignUp_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestSignUp_Statics::RedShiftLISYSSubsystem_eventLISYSRequestSignUp_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestSignUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestSignUp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestSignUp_Statics::RedShiftLISYSSubsystem_eventLISYSRequestSignUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestSignUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestSignUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URedShiftLISYSSubsystem::execLISYSRequestSignUp)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_SignUpUrl);
	P_GET_PROPERTY(FStrProperty,Z_Param_Username);
	P_GET_PROPERTY(FStrProperty,Z_Param_Password);
	P_GET_PROPERTY(FStrProperty,Z_Param_Email);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LISYSRequestSignUp(Z_Param_WorldContextObject,Z_Param_SignUpUrl,Z_Param_Username,Z_Param_Password,Z_Param_Email);
	P_NATIVE_END;
}
// ********** End Class URedShiftLISYSSubsystem Function LISYSRequestSignUp ************************

// ********** Begin Class URedShiftLISYSSubsystem **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URedShiftLISYSSubsystem;
UClass* URedShiftLISYSSubsystem::GetPrivateStaticClass()
{
	using TClass = URedShiftLISYSSubsystem;
	if (!Z_Registration_Info_UClass_URedShiftLISYSSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RedShiftLISYSSubsystem"),
			Z_Registration_Info_UClass_URedShiftLISYSSubsystem.InnerSingleton,
			StaticRegisterNativesURedShiftLISYSSubsystem,
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
	return Z_Registration_Info_UClass_URedShiftLISYSSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_URedShiftLISYSSubsystem_NoRegister()
{
	return URedShiftLISYSSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URedShiftLISYSSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * RedShift LISYS (Login System). Sends HTTPS GET requests to a PHP login endpoint.\n * PHP checks MySQL and returns JSON. Request/response exposed as JSON.\n * Category \"RedShift|LISYS\" - set RedShift category to red in Editor Preferences for red nodes.\n */" },
		{ "DisplayName", "RedShift LISYS Subsystem" },
		{ "IncludePath", "RedShiftLISYSSubsystem.h" },
		{ "ModuleRelativePath", "Public/RedShiftLISYSSubsystem.h" },
		{ "ToolTip", "RedShift LISYS (Login System). Sends HTTPS GET requests to a PHP login endpoint.\nPHP checks MySQL and returns JSON. Request/response exposed as JSON.\nCategory \"RedShift|LISYS\" - set RedShift category to red in Editor Preferences for red nodes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLISYSLoginComplete_MetaData[] = {
		{ "Category", "RedShift|LISYS" },
		{ "Comment", "/** Called when a LISYS login request completes. */" },
		{ "ModuleRelativePath", "Public/RedShiftLISYSSubsystem.h" },
		{ "ToolTip", "Called when a LISYS login request completes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLISYSHttpGetComplete_MetaData[] = {
		{ "Category", "RedShift|LISYS" },
		{ "Comment", "/** Called when a LISYS GET request completes. */" },
		{ "ModuleRelativePath", "Public/RedShiftLISYSSubsystem.h" },
		{ "ToolTip", "Called when a LISYS GET request completes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLISYSSignUpComplete_MetaData[] = {
		{ "Category", "RedShift|LISYS" },
		{ "Comment", "/** Called when a LISYS sign-up request completes. */" },
		{ "ModuleRelativePath", "Public/RedShiftLISYSSubsystem.h" },
		{ "ToolTip", "Called when a LISYS sign-up request completes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLISYSGetStoreItemsComplete_MetaData[] = {
		{ "Category", "RedShift|LISYS" },
		{ "Comment", "/** Called when a LISYS get store items request completes. */" },
		{ "ModuleRelativePath", "Public/RedShiftLISYSSubsystem.h" },
		{ "ToolTip", "Called when a LISYS get store items request completes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLISYSPurchaseComplete_MetaData[] = {
		{ "Category", "RedShift|LISYS" },
		{ "Comment", "/** Called when a LISYS purchase (micro-transaction) request completes. */" },
		{ "ModuleRelativePath", "Public/RedShiftLISYSSubsystem.h" },
		{ "ToolTip", "Called when a LISYS purchase (micro-transaction) request completes." },
	};
#endif // WITH_METADATA

// ********** Begin Class URedShiftLISYSSubsystem constinit property declarations ******************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLISYSLoginComplete;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLISYSHttpGetComplete;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLISYSSignUpComplete;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLISYSGetStoreItemsComplete;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLISYSPurchaseComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URedShiftLISYSSubsystem constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("LISYSGetStoreItems"), .Pointer = &URedShiftLISYSSubsystem::execLISYSGetStoreItems },
		{ .NameUTF8 = UTF8TEXT("LISYSHttpGetRequest"), .Pointer = &URedShiftLISYSSubsystem::execLISYSHttpGetRequest },
		{ .NameUTF8 = UTF8TEXT("LISYSRequestLogin"), .Pointer = &URedShiftLISYSSubsystem::execLISYSRequestLogin },
		{ .NameUTF8 = UTF8TEXT("LISYSRequestPurchase"), .Pointer = &URedShiftLISYSSubsystem::execLISYSRequestPurchase },
		{ .NameUTF8 = UTF8TEXT("LISYSRequestSignUp"), .Pointer = &URedShiftLISYSSubsystem::execLISYSRequestSignUp },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSGetStoreItems, "LISYSGetStoreItems" }, // 2646114540
		{ &Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSHttpGetRequest, "LISYSHttpGetRequest" }, // 3408302001
		{ &Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestLogin, "LISYSRequestLogin" }, // 1471151777
		{ &Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestPurchase, "LISYSRequestPurchase" }, // 2031497802
		{ &Z_Construct_UFunction_URedShiftLISYSSubsystem_LISYSRequestSignUp, "LISYSRequestSignUp" }, // 2112903825
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URedShiftLISYSSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URedShiftLISYSSubsystem_Statics

// ********** Begin Class URedShiftLISYSSubsystem Property Definitions *****************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URedShiftLISYSSubsystem_Statics::NewProp_OnLISYSLoginComplete = { "OnLISYSLoginComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URedShiftLISYSSubsystem, OnLISYSLoginComplete), Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSLoginComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLISYSLoginComplete_MetaData), NewProp_OnLISYSLoginComplete_MetaData) }; // 2962365251
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URedShiftLISYSSubsystem_Statics::NewProp_OnLISYSHttpGetComplete = { "OnLISYSHttpGetComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URedShiftLISYSSubsystem, OnLISYSHttpGetComplete), Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSHttpGetComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLISYSHttpGetComplete_MetaData), NewProp_OnLISYSHttpGetComplete_MetaData) }; // 2697292461
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URedShiftLISYSSubsystem_Statics::NewProp_OnLISYSSignUpComplete = { "OnLISYSSignUpComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URedShiftLISYSSubsystem, OnLISYSSignUpComplete), Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSSignUpComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLISYSSignUpComplete_MetaData), NewProp_OnLISYSSignUpComplete_MetaData) }; // 2902276764
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URedShiftLISYSSubsystem_Statics::NewProp_OnLISYSGetStoreItemsComplete = { "OnLISYSGetStoreItemsComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URedShiftLISYSSubsystem, OnLISYSGetStoreItemsComplete), Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSGetStoreItemsComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLISYSGetStoreItemsComplete_MetaData), NewProp_OnLISYSGetStoreItemsComplete_MetaData) }; // 2161759600
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URedShiftLISYSSubsystem_Statics::NewProp_OnLISYSPurchaseComplete = { "OnLISYSPurchaseComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URedShiftLISYSSubsystem, OnLISYSPurchaseComplete), Z_Construct_UDelegateFunction_RedShiftLISYS_OnLISYSPurchaseComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLISYSPurchaseComplete_MetaData), NewProp_OnLISYSPurchaseComplete_MetaData) }; // 4270210175
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URedShiftLISYSSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URedShiftLISYSSubsystem_Statics::NewProp_OnLISYSLoginComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URedShiftLISYSSubsystem_Statics::NewProp_OnLISYSHttpGetComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URedShiftLISYSSubsystem_Statics::NewProp_OnLISYSSignUpComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URedShiftLISYSSubsystem_Statics::NewProp_OnLISYSGetStoreItemsComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URedShiftLISYSSubsystem_Statics::NewProp_OnLISYSPurchaseComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URedShiftLISYSSubsystem_Statics::PropPointers) < 2048);
// ********** End Class URedShiftLISYSSubsystem Property Definitions *******************************
UObject* (*const Z_Construct_UClass_URedShiftLISYSSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_RedShiftLISYS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URedShiftLISYSSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URedShiftLISYSSubsystem_Statics::ClassParams = {
	&URedShiftLISYSSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URedShiftLISYSSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URedShiftLISYSSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URedShiftLISYSSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_URedShiftLISYSSubsystem_Statics::Class_MetaDataParams)
};
void URedShiftLISYSSubsystem::StaticRegisterNativesURedShiftLISYSSubsystem()
{
	UClass* Class = URedShiftLISYSSubsystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_URedShiftLISYSSubsystem_Statics::Funcs));
}
UClass* Z_Construct_UClass_URedShiftLISYSSubsystem()
{
	if (!Z_Registration_Info_UClass_URedShiftLISYSSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URedShiftLISYSSubsystem.OuterSingleton, Z_Construct_UClass_URedShiftLISYSSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URedShiftLISYSSubsystem.OuterSingleton;
}
URedShiftLISYSSubsystem::URedShiftLISYSSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URedShiftLISYSSubsystem);
URedShiftLISYSSubsystem::~URedShiftLISYSSubsystem() {}
// ********** End Class URedShiftLISYSSubsystem ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_nader_Downloads_RedShiftLISYS_HostProject_Plugins_RedShiftLISYS_Source_RedShiftLISYS_Public_RedShiftLISYSSubsystem_h__Script_RedShiftLISYS_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URedShiftLISYSSubsystem, URedShiftLISYSSubsystem::StaticClass, TEXT("URedShiftLISYSSubsystem"), &Z_Registration_Info_UClass_URedShiftLISYSSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URedShiftLISYSSubsystem), 2438774982U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_nader_Downloads_RedShiftLISYS_HostProject_Plugins_RedShiftLISYS_Source_RedShiftLISYS_Public_RedShiftLISYSSubsystem_h__Script_RedShiftLISYS_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nader_Downloads_RedShiftLISYS_HostProject_Plugins_RedShiftLISYS_Source_RedShiftLISYS_Public_RedShiftLISYSSubsystem_h__Script_RedShiftLISYS_3973384438{
	TEXT("/Script/RedShiftLISYS"),
	Z_CompiledInDeferFile_FID_Users_nader_Downloads_RedShiftLISYS_HostProject_Plugins_RedShiftLISYS_Source_RedShiftLISYS_Public_RedShiftLISYSSubsystem_h__Script_RedShiftLISYS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nader_Downloads_RedShiftLISYS_HostProject_Plugins_RedShiftLISYS_Source_RedShiftLISYS_Public_RedShiftLISYSSubsystem_h__Script_RedShiftLISYS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
