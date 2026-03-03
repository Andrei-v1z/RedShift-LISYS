// Copyright Andrei / RedShift. All Rights Reserved.

#include "RedShiftLISYSSubsystem.h"
#include "HttpModule.h"
#include "Interfaces/IHttpRequest.h"
#include "Interfaces/IHttpResponse.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"
#include "Engine/World.h"
#include "Engine/Engine.h"

namespace
{
	FString UrlEncode(const FString& Text)
	{
		FString Result;
		for (TCHAR C : Text)
		{
			FString CharStr;
			CharStr += C;
			if (FChar::IsAlnum(C) || CharStr == TEXT("-") || CharStr == TEXT("_") || CharStr == TEXT(".") || CharStr == TEXT("~"))
			{
				Result += C;
			}
			else
			{
				Result += TEXT("%");
				Result += FString::Printf(TEXT("%02X"), static_cast<int32>(C));
			}
		}
		return Result;
	}
}

void URedShiftLISYSSubsystem::LISYSRequestLogin(UObject* WorldContextObject, const FString& LoginUrl, const FString& Username, const FString& Password)
{
	TSharedRef<IHttpRequest> Request = CreateLISYSLoginPostRequest(LoginUrl, Username, Password, [this](FHttpRequestPtr Req, FHttpResponsePtr Res, bool bOk)
	{
		OnLISYSLoginRequestComplete(Req, Res, bOk);
	});

	Request->ProcessRequest();
}

void URedShiftLISYSSubsystem::LISYSRequestSignUp(UObject* WorldContextObject, const FString& SignUpUrl, const FString& Username, const FString& Password, const FString& Email)
{
	TSharedRef<IHttpRequest> Request = CreateLISYSSignUpPostRequest(SignUpUrl, Username, Password, Email, [this](FHttpRequestPtr Req, FHttpResponsePtr Res, bool bOk)
	{
		OnLISYSSignUpRequestComplete(Req, Res, bOk);
	});

	Request->ProcessRequest();
}

void URedShiftLISYSSubsystem::LISYSHttpGetRequest(UObject* WorldContextObject, const FString& Url)
{
	TSharedRef<IHttpRequest> Request = CreateLISYSHttpGetRequest(Url, [this](FHttpRequestPtr Req, FHttpResponsePtr Res, bool bOk)
	{
		OnLISYSHttpGetRequestComplete(Req, Res, bOk);
	});

	Request->ProcessRequest();
}

void URedShiftLISYSSubsystem::LISYSGetStoreItems(UObject* WorldContextObject, const FString& StoreItemsUrl)
{
	TSharedRef<IHttpRequest> Request = CreateLISYSHttpGetRequest(StoreItemsUrl, [this](FHttpRequestPtr Req, FHttpResponsePtr Res, bool bOk)
	{
		OnLISYSGetStoreItemsRequestComplete(Req, Res, bOk);
	});

	Request->ProcessRequest();
}

void URedShiftLISYSSubsystem::LISYSRequestPurchase(UObject* WorldContextObject, const FString& PurchaseUrl, const FString& SessionToken, const FString& ItemId)
{
	TSharedRef<IHttpRequest> Request = CreateLISYSPurchasePostRequest(PurchaseUrl, SessionToken, ItemId, [this](FHttpRequestPtr Req, FHttpResponsePtr Res, bool bOk)
	{
		OnLISYSPurchaseRequestComplete(Req, Res, bOk);
	});

	Request->ProcessRequest();
}

void URedShiftLISYSSubsystem::OnLISYSLoginRequestComplete(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	bool bLoginSuccess = false;
	FString ResponseJsonString;
	FString ErrorMessage;

	if (bWasSuccessful && Response.IsValid())
	{
		ResponseJsonString = Response->GetContentAsString();

		if (Response->GetResponseCode() >= 200 && Response->GetResponseCode() < 300)
		{
			TSharedPtr<FJsonObject> JsonObject;
			TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(ResponseJsonString);
			if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
			{
				bLoginSuccess = JsonObject->GetBoolField(TEXT("success"));
				if (JsonObject->HasField(TEXT("message")))
				{
					ErrorMessage = JsonObject->GetStringField(TEXT("message"));
				}
			}
			else
			{
				ErrorMessage = TEXT("Invalid JSON response");
			}
		}
		else
		{
			ErrorMessage = FString::Printf(TEXT("HTTP %d"), Response->GetResponseCode());
		}
	}
	else
	{
		ErrorMessage = TEXT("Request failed or no response");
	}

	OnLISYSLoginComplete.Broadcast(bLoginSuccess, ResponseJsonString, ErrorMessage);
}

void URedShiftLISYSSubsystem::OnLISYSSignUpRequestComplete(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	bool bSignUpSuccess = false;
	FString ResponseJsonString;
	FString ErrorMessage;

	if (bWasSuccessful && Response.IsValid())
	{
		ResponseJsonString = Response->GetContentAsString();

		if (Response->GetResponseCode() >= 200 && Response->GetResponseCode() < 300)
		{
			TSharedPtr<FJsonObject> JsonObject;
			TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(ResponseJsonString);
			if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
			{
				bSignUpSuccess = JsonObject->GetBoolField(TEXT("success"));
				if (JsonObject->HasField(TEXT("message")))
				{
					ErrorMessage = JsonObject->GetStringField(TEXT("message"));
				}
			}
			else
			{
				ErrorMessage = TEXT("Invalid JSON response");
			}
		}
		else
		{
			ErrorMessage = FString::Printf(TEXT("HTTP %d"), Response->GetResponseCode());
		}
	}
	else
	{
		ErrorMessage = TEXT("Request failed or no response");
	}

	OnLISYSSignUpComplete.Broadcast(bSignUpSuccess, ResponseJsonString, ErrorMessage);
}

void URedShiftLISYSSubsystem::OnLISYSHttpGetRequestComplete(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	bool bSuccess = false;
	FString ResponseJsonString;
	FString ErrorMessage;

	if (bWasSuccessful && Response.IsValid())
	{
		ResponseJsonString = Response->GetContentAsString();
		bSuccess = Response->GetResponseCode() >= 200 && Response->GetResponseCode() < 300;
		if (!bSuccess)
		{
			ErrorMessage = FString::Printf(TEXT("HTTP %d"), Response->GetResponseCode());
		}
	}
	else
	{
		ErrorMessage = TEXT("Request failed or no response");
	}

	OnLISYSHttpGetComplete.Broadcast(bSuccess, ResponseJsonString, ErrorMessage);
}

void URedShiftLISYSSubsystem::OnLISYSGetStoreItemsRequestComplete(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	bool bSuccess = false;
	FString ResponseJsonString;
	FString ErrorMessage;

	if (bWasSuccessful && Response.IsValid())
	{
		ResponseJsonString = Response->GetContentAsString();
		bSuccess = Response->GetResponseCode() >= 200 && Response->GetResponseCode() < 300;
		if (!bSuccess)
		{
			ErrorMessage = FString::Printf(TEXT("HTTP %d"), Response->GetResponseCode());
		}
	}
	else
	{
		ErrorMessage = TEXT("Request failed or no response");
	}

	OnLISYSGetStoreItemsComplete.Broadcast(bSuccess, ResponseJsonString, ErrorMessage);
}

void URedShiftLISYSSubsystem::OnLISYSPurchaseRequestComplete(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	bool bPurchaseSuccess = false;
	FString ResponseJsonString;
	FString ErrorMessage;

	if (bWasSuccessful && Response.IsValid())
	{
		ResponseJsonString = Response->GetContentAsString();

		if (Response->GetResponseCode() >= 200 && Response->GetResponseCode() < 300)
		{
			TSharedPtr<FJsonObject> JsonObject;
			TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(ResponseJsonString);
			if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
			{
				bPurchaseSuccess = JsonObject->GetBoolField(TEXT("success"));
				if (JsonObject->HasField(TEXT("message")))
				{
					ErrorMessage = JsonObject->GetStringField(TEXT("message"));
				}
			}
			else
			{
				ErrorMessage = TEXT("Invalid JSON response");
			}
		}
		else
		{
			ErrorMessage = FString::Printf(TEXT("HTTP %d"), Response->GetResponseCode());
		}
	}
	else
	{
		ErrorMessage = TEXT("Request failed or no response");
	}

	OnLISYSPurchaseComplete.Broadcast(bPurchaseSuccess, ResponseJsonString, ErrorMessage);
}

TSharedRef<IHttpRequest> URedShiftLISYSSubsystem::CreateLISYSHttpGetRequest(const FString& Url, TFunction<void(FHttpRequestPtr, FHttpResponsePtr, bool)> Callback)
{
	TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
	Request->SetURL(Url);
	Request->SetVerb(TEXT("GET"));
	Request->SetHeader(TEXT("Accept"), TEXT("application/json"));
	Request->SetHeader(TEXT("X-LISYS-Client"), TEXT("UnrealEngine"));
	Request->OnProcessRequestComplete().BindLambda([Callback](FHttpRequestPtr Req, FHttpResponsePtr Res, bool bOk)
	{
		Callback(Req, Res, bOk);
	});
	return Request;
}

TSharedRef<IHttpRequest> URedShiftLISYSSubsystem::CreateLISYSLoginPostRequest(const FString& LoginUrl, const FString& Username, const FString& Password, TFunction<void(FHttpRequestPtr, FHttpResponsePtr, bool)> Callback)
{
	TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
	Request->SetURL(LoginUrl);
	Request->SetVerb(TEXT("POST"));
	Request->SetHeader(TEXT("Accept"), TEXT("application/json"));
	Request->SetHeader(TEXT("X-LISYS-Client"), TEXT("UnrealEngine"));
	Request->SetHeader(TEXT("Content-Type"), TEXT("application/x-www-form-urlencoded"));
	Request->SetContentAsString(BuildLISYSLoginPostBody(Username, Password));
	Request->OnProcessRequestComplete().BindLambda([Callback](FHttpRequestPtr Req, FHttpResponsePtr Res, bool bOk)
	{
		Callback(Req, Res, bOk);
	});
	return Request;
}

TSharedRef<IHttpRequest> URedShiftLISYSSubsystem::CreateLISYSSignUpPostRequest(const FString& SignUpUrl, const FString& Username, const FString& Password, const FString& Email, TFunction<void(FHttpRequestPtr, FHttpResponsePtr, bool)> Callback)
{
	TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
	Request->SetURL(SignUpUrl);
	Request->SetVerb(TEXT("POST"));
	Request->SetHeader(TEXT("Accept"), TEXT("application/json"));
	Request->SetHeader(TEXT("X-LISYS-Client"), TEXT("UnrealEngine"));
	Request->SetHeader(TEXT("Content-Type"), TEXT("application/x-www-form-urlencoded"));
	Request->SetContentAsString(BuildLISYSSignUpPostBody(Username, Password, Email));
	Request->OnProcessRequestComplete().BindLambda([Callback](FHttpRequestPtr Req, FHttpResponsePtr Res, bool bOk)
	{
		Callback(Req, Res, bOk);
	});
	return Request;
}

TSharedRef<IHttpRequest> URedShiftLISYSSubsystem::CreateLISYSPurchasePostRequest(const FString& PurchaseUrl, const FString& SessionToken, const FString& ItemId, TFunction<void(FHttpRequestPtr, FHttpResponsePtr, bool)> Callback)
{
	TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
	Request->SetURL(PurchaseUrl);
	Request->SetVerb(TEXT("POST"));
	Request->SetHeader(TEXT("Accept"), TEXT("application/json"));
	Request->SetHeader(TEXT("X-LISYS-Client"), TEXT("UnrealEngine"));
	Request->SetHeader(TEXT("Content-Type"), TEXT("application/x-www-form-urlencoded"));
	Request->SetContentAsString(BuildLISYSPurchasePostBody(SessionToken, ItemId));
	Request->OnProcessRequestComplete().BindLambda([Callback](FHttpRequestPtr Req, FHttpResponsePtr Res, bool bOk)
	{
		Callback(Req, Res, bOk);
	});
	return Request;
}

FString URedShiftLISYSSubsystem::BuildLISYSLoginPostBody(const FString& Username, const FString& Password)
{
	return FString::Printf(TEXT("username=%s&password=%s"), *UrlEncode(Username), *UrlEncode(Password));
}

FString URedShiftLISYSSubsystem::BuildLISYSSignUpPostBody(const FString& Username, const FString& Password, const FString& Email)
{
	return FString::Printf(TEXT("username=%s&password=%s&email=%s"), *UrlEncode(Username), *UrlEncode(Password), *UrlEncode(Email));
}

FString URedShiftLISYSSubsystem::BuildLISYSPurchasePostBody(const FString& SessionToken, const FString& ItemId)
{
	return FString::Printf(TEXT("session_token=%s&item_id=%s"), *UrlEncode(SessionToken), *UrlEncode(ItemId));
}
