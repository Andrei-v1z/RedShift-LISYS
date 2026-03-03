// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RedShiftLISYSSubsystem.h"

#ifdef REDSHIFTLISYS_RedShiftLISYSSubsystem_generated_h
#error "RedShiftLISYSSubsystem.generated.h already included, missing '#pragma once' in RedShiftLISYSSubsystem.h"
#endif
#define REDSHIFTLISYS_RedShiftLISYSSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;

// ********** Begin Delegate FOnLISYSLoginComplete *************************************************
#define FID_Users_nader_Downloads_RedShiftLISYS_HostProject_Plugins_RedShiftLISYS_Source_RedShiftLISYS_Public_RedShiftLISYSSubsystem_h_10_DELEGATE \
REDSHIFTLISYS_API void FOnLISYSLoginComplete_DelegateWrapper(const FMulticastScriptDelegate& OnLISYSLoginComplete, bool bSuccess, const FString& ResponseJsonString, const FString& ErrorMessage);


// ********** End Delegate FOnLISYSLoginComplete ***************************************************

// ********** Begin Delegate FOnLISYSSignUpComplete ************************************************
#define FID_Users_nader_Downloads_RedShiftLISYS_HostProject_Plugins_RedShiftLISYS_Source_RedShiftLISYS_Public_RedShiftLISYSSubsystem_h_11_DELEGATE \
REDSHIFTLISYS_API void FOnLISYSSignUpComplete_DelegateWrapper(const FMulticastScriptDelegate& OnLISYSSignUpComplete, bool bSuccess, const FString& ResponseJsonString, const FString& ErrorMessage);


// ********** End Delegate FOnLISYSSignUpComplete **************************************************

// ********** Begin Delegate FOnLISYSHttpGetComplete ***********************************************
#define FID_Users_nader_Downloads_RedShiftLISYS_HostProject_Plugins_RedShiftLISYS_Source_RedShiftLISYS_Public_RedShiftLISYSSubsystem_h_12_DELEGATE \
REDSHIFTLISYS_API void FOnLISYSHttpGetComplete_DelegateWrapper(const FMulticastScriptDelegate& OnLISYSHttpGetComplete, bool bSuccess, const FString& ResponseJsonString, const FString& ErrorMessage);


// ********** End Delegate FOnLISYSHttpGetComplete *************************************************

// ********** Begin Delegate FOnLISYSGetStoreItemsComplete *****************************************
#define FID_Users_nader_Downloads_RedShiftLISYS_HostProject_Plugins_RedShiftLISYS_Source_RedShiftLISYS_Public_RedShiftLISYSSubsystem_h_13_DELEGATE \
REDSHIFTLISYS_API void FOnLISYSGetStoreItemsComplete_DelegateWrapper(const FMulticastScriptDelegate& OnLISYSGetStoreItemsComplete, bool bSuccess, const FString& ResponseJsonString, const FString& ErrorMessage);


// ********** End Delegate FOnLISYSGetStoreItemsComplete *******************************************

// ********** Begin Delegate FOnLISYSPurchaseComplete **********************************************
#define FID_Users_nader_Downloads_RedShiftLISYS_HostProject_Plugins_RedShiftLISYS_Source_RedShiftLISYS_Public_RedShiftLISYSSubsystem_h_14_DELEGATE \
REDSHIFTLISYS_API void FOnLISYSPurchaseComplete_DelegateWrapper(const FMulticastScriptDelegate& OnLISYSPurchaseComplete, bool bSuccess, const FString& ResponseJsonString, const FString& ErrorMessage);


// ********** End Delegate FOnLISYSPurchaseComplete ************************************************

// ********** Begin Class URedShiftLISYSSubsystem **************************************************
#define FID_Users_nader_Downloads_RedShiftLISYS_HostProject_Plugins_RedShiftLISYS_Source_RedShiftLISYS_Public_RedShiftLISYSSubsystem_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLISYSRequestPurchase); \
	DECLARE_FUNCTION(execLISYSGetStoreItems); \
	DECLARE_FUNCTION(execLISYSHttpGetRequest); \
	DECLARE_FUNCTION(execLISYSRequestSignUp); \
	DECLARE_FUNCTION(execLISYSRequestLogin);


struct Z_Construct_UClass_URedShiftLISYSSubsystem_Statics;
REDSHIFTLISYS_API UClass* Z_Construct_UClass_URedShiftLISYSSubsystem_NoRegister();

#define FID_Users_nader_Downloads_RedShiftLISYS_HostProject_Plugins_RedShiftLISYS_Source_RedShiftLISYS_Public_RedShiftLISYSSubsystem_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURedShiftLISYSSubsystem(); \
	friend struct ::Z_Construct_UClass_URedShiftLISYSSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REDSHIFTLISYS_API UClass* ::Z_Construct_UClass_URedShiftLISYSSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(URedShiftLISYSSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RedShiftLISYS"), Z_Construct_UClass_URedShiftLISYSSubsystem_NoRegister) \
	DECLARE_SERIALIZER(URedShiftLISYSSubsystem)


#define FID_Users_nader_Downloads_RedShiftLISYS_HostProject_Plugins_RedShiftLISYS_Source_RedShiftLISYS_Public_RedShiftLISYSSubsystem_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URedShiftLISYSSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URedShiftLISYSSubsystem(URedShiftLISYSSubsystem&&) = delete; \
	URedShiftLISYSSubsystem(const URedShiftLISYSSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URedShiftLISYSSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URedShiftLISYSSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URedShiftLISYSSubsystem) \
	NO_API virtual ~URedShiftLISYSSubsystem();


#define FID_Users_nader_Downloads_RedShiftLISYS_HostProject_Plugins_RedShiftLISYS_Source_RedShiftLISYS_Public_RedShiftLISYSSubsystem_h_21_PROLOG
#define FID_Users_nader_Downloads_RedShiftLISYS_HostProject_Plugins_RedShiftLISYS_Source_RedShiftLISYS_Public_RedShiftLISYSSubsystem_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_nader_Downloads_RedShiftLISYS_HostProject_Plugins_RedShiftLISYS_Source_RedShiftLISYS_Public_RedShiftLISYSSubsystem_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_nader_Downloads_RedShiftLISYS_HostProject_Plugins_RedShiftLISYS_Source_RedShiftLISYS_Public_RedShiftLISYSSubsystem_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_nader_Downloads_RedShiftLISYS_HostProject_Plugins_RedShiftLISYS_Source_RedShiftLISYS_Public_RedShiftLISYSSubsystem_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URedShiftLISYSSubsystem;

// ********** End Class URedShiftLISYSSubsystem ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_nader_Downloads_RedShiftLISYS_HostProject_Plugins_RedShiftLISYS_Source_RedShiftLISYS_Public_RedShiftLISYSSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
