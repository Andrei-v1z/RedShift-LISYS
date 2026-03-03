// Copyright Andrei / RedShift. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Interfaces/IHttpRequest.h"
#include "RedShiftLISYSSubsystem.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnLISYSLoginComplete, bool, bSuccess, const FString&, ResponseJsonString, const FString&, ErrorMessage);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnLISYSSignUpComplete, bool, bSuccess, const FString&, ResponseJsonString, const FString&, ErrorMessage);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnLISYSHttpGetComplete, bool, bSuccess, const FString&, ResponseJsonString, const FString&, ErrorMessage);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnLISYSGetStoreItemsComplete, bool, bSuccess, const FString&, ResponseJsonString, const FString&, ErrorMessage);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnLISYSPurchaseComplete, bool, bSuccess, const FString&, ResponseJsonString, const FString&, ErrorMessage);

/**
 * RedShift LISYS (Login System). Sends HTTPS GET requests to a PHP login endpoint.
 * PHP checks MySQL and returns JSON. Request/response exposed as JSON.
 * Category "RedShift|LISYS" - set RedShift category to red in Editor Preferences for red nodes.
 */
UCLASS(meta = (DisplayName = "RedShift LISYS Subsystem"))
class REDSHIFTLISYS_API URedShiftLISYSSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	/** Called when a LISYS login request completes. */
	UPROPERTY(BlueprintAssignable, Category = "RedShift|LISYS")
	FOnLISYSLoginComplete OnLISYSLoginComplete;

	/** Called when a LISYS GET request completes. */
	UPROPERTY(BlueprintAssignable, Category = "RedShift|LISYS")
	FOnLISYSHttpGetComplete OnLISYSHttpGetComplete;

	/** Called when a LISYS sign-up request completes. */
	UPROPERTY(BlueprintAssignable, Category = "RedShift|LISYS")
	FOnLISYSSignUpComplete OnLISYSSignUpComplete;

	/** Called when a LISYS get store items request completes. */
	UPROPERTY(BlueprintAssignable, Category = "RedShift|LISYS")
	FOnLISYSGetStoreItemsComplete OnLISYSGetStoreItemsComplete;

	/** Called when a LISYS purchase (micro-transaction) request completes. */
	UPROPERTY(BlueprintAssignable, Category = "RedShift|LISYS")
	FOnLISYSPurchaseComplete OnLISYSPurchaseComplete;

	/** LISYS: Sends HTTPS POST to PHP login URL (body: username/password). Safer than GET. Response includes session_token if successful. */
	UFUNCTION(BlueprintCallable, Category = "RedShift|LISYS", meta = (WorldContext = "WorldContextObject", DisplayName = "LISYS Request Login"))
	void LISYSRequestLogin(UObject* WorldContextObject, const FString& LoginUrl, const FString& Username, const FString& Password);

	/** LISYS: Sends HTTPS POST to PHP sign-up URL (body: username/password/email). Response includes session_token if successful. */
	UFUNCTION(BlueprintCallable, Category = "RedShift|LISYS", meta = (WorldContext = "WorldContextObject", DisplayName = "LISYS Request Sign Up"))
	void LISYSRequestSignUp(UObject* WorldContextObject, const FString& SignUpUrl, const FString& Username, const FString& Password, const FString& Email);

	/** LISYS: Generic HTTPS GET. Result via OnLISYSHttpGetComplete. */
	UFUNCTION(BlueprintCallable, Category = "RedShift|LISYS", meta = (WorldContext = "WorldContextObject", DisplayName = "LISYS Http Get Request"))
	void LISYSHttpGetRequest(UObject* WorldContextObject, const FString& Url);

	/** LISYS: HTTPS GET to fetch store items (micro-transaction catalog). Result via OnLISYSGetStoreItemsComplete. */
	UFUNCTION(BlueprintCallable, Category = "RedShift|LISYS", meta = (WorldContext = "WorldContextObject", DisplayName = "LISYS Get Store Items"))
	void LISYSGetStoreItems(UObject* WorldContextObject, const FString& StoreItemsUrl);

	/** LISYS: Sends HTTPS POST to PHP purchase URL (body: session_token/user_id, item_id). For in-game micro-transactions. */
	UFUNCTION(BlueprintCallable, Category = "RedShift|LISYS", meta = (WorldContext = "WorldContextObject", DisplayName = "LISYS Request Purchase"))
	void LISYSRequestPurchase(UObject* WorldContextObject, const FString& PurchaseUrl, const FString& SessionToken, const FString& ItemId);

private:
	void OnLISYSLoginRequestComplete(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
	void OnLISYSSignUpRequestComplete(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
	void OnLISYSHttpGetRequestComplete(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
	void OnLISYSGetStoreItemsRequestComplete(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
	void OnLISYSPurchaseRequestComplete(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
	TSharedRef<IHttpRequest> CreateLISYSHttpGetRequest(const FString& Url, TFunction<void(FHttpRequestPtr, FHttpResponsePtr, bool)> Callback);
	TSharedRef<IHttpRequest> CreateLISYSLoginPostRequest(const FString& LoginUrl, const FString& Username, const FString& Password, TFunction<void(FHttpRequestPtr, FHttpResponsePtr, bool)> Callback);
	TSharedRef<IHttpRequest> CreateLISYSSignUpPostRequest(const FString& SignUpUrl, const FString& Username, const FString& Password, const FString& Email, TFunction<void(FHttpRequestPtr, FHttpResponsePtr, bool)> Callback);
	TSharedRef<IHttpRequest> CreateLISYSPurchasePostRequest(const FString& PurchaseUrl, const FString& SessionToken, const FString& ItemId, TFunction<void(FHttpRequestPtr, FHttpResponsePtr, bool)> Callback);
	static FString BuildLISYSLoginPostBody(const FString& Username, const FString& Password);
	static FString BuildLISYSSignUpPostBody(const FString& Username, const FString& Password, const FString& Email);
	static FString BuildLISYSPurchasePostBody(const FString& SessionToken, const FString& ItemId);
};
