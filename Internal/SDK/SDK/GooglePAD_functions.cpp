#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GooglePAD

#include "Basic.hpp"

#include "GooglePAD_classes.hpp"
#include "GooglePAD_parameters.hpp"


namespace SDK
{

// Function GooglePAD.GooglePADFunctionLibrary.CancelDownload
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>                   AssetPacks                                             (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGooglePADErrorCode          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EGooglePADErrorCode UGooglePADFunctionLibrary::CancelDownload(TArray<class FString>& AssetPacks)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "CancelDownload");

	Params::GooglePADFunctionLibrary_CancelDownload Parms{};

	Parms.AssetPacks = std::move(AssetPacks);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetAssetPackLocation
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                           Name                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGooglePADErrorCode          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EGooglePADErrorCode UGooglePADFunctionLibrary::GetAssetPackLocation(const class FString& Name, int32* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "GetAssetPackLocation");

	Params::GooglePADFunctionLibrary_GetAssetPackLocation Parms{};

	Parms.Name = std::move(Name);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	return Parms.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetAssetsPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                                   Location                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UGooglePADFunctionLibrary::GetAssetsPath(int32 Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "GetAssetsPath");

	Params::GooglePADFunctionLibrary_GetAssetsPath Parms{};

	Parms.Location = Location;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetBytesDownloaded
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                                   State                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGooglePADFunctionLibrary::GetBytesDownloaded(int32 State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "GetBytesDownloaded");

	Params::GooglePADFunctionLibrary_GetBytesDownloaded Parms{};

	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetDownloadState
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                           Name                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   State                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGooglePADErrorCode          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EGooglePADErrorCode UGooglePADFunctionLibrary::GetDownloadState(const class FString& Name, int32* State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "GetDownloadState");

	Params::GooglePADFunctionLibrary_GetDownloadState Parms{};

	Parms.Name = std::move(Name);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (State != nullptr)
		*State = std::move(Parms.State);

	return Parms.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetDownloadStatus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                                   State                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGooglePADDownloadStatus     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EGooglePADDownloadStatus UGooglePADFunctionLibrary::GetDownloadStatus(int32 State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "GetDownloadStatus");

	Params::GooglePADFunctionLibrary_GetDownloadStatus Parms{};

	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetShowCellularDataConfirmationStatus
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EGooglePADCellularDataConfirmStatusStatus                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGooglePADErrorCode          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EGooglePADErrorCode UGooglePADFunctionLibrary::GetShowCellularDataConfirmationStatus(enum class EGooglePADCellularDataConfirmStatus* Status)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "GetShowCellularDataConfirmationStatus");

	Params::GooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Status != nullptr)
		*Status = std::move(Parms.Status);

	return Parms.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetStorageMethod
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                                   Location                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGooglePADStorageMethod      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EGooglePADStorageMethod UGooglePADFunctionLibrary::GetStorageMethod(int32 Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "GetStorageMethod");

	Params::GooglePADFunctionLibrary_GetStorageMethod Parms{};

	Parms.Location = Location;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.GetTotalBytesToDownload
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                                   State                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGooglePADFunctionLibrary::GetTotalBytesToDownload(int32 State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "GetTotalBytesToDownload");

	Params::GooglePADFunctionLibrary_GetTotalBytesToDownload Parms{};

	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.ReleaseAssetPackLocation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                                   Location                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGooglePADFunctionLibrary::ReleaseAssetPackLocation(int32 Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "ReleaseAssetPackLocation");

	Params::GooglePADFunctionLibrary_ReleaseAssetPackLocation Parms{};

	Parms.Location = Location;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GooglePAD.GooglePADFunctionLibrary.ReleaseDownloadState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                                   State                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGooglePADFunctionLibrary::ReleaseDownloadState(int32 State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "ReleaseDownloadState");

	Params::GooglePADFunctionLibrary_ReleaseDownloadState Parms{};

	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function GooglePAD.GooglePADFunctionLibrary.RequestDownload
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>                   AssetPacks                                             (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGooglePADErrorCode          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EGooglePADErrorCode UGooglePADFunctionLibrary::RequestDownload(TArray<class FString>& AssetPacks)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "RequestDownload");

	Params::GooglePADFunctionLibrary_RequestDownload Parms{};

	Parms.AssetPacks = std::move(AssetPacks);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.RequestInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>                   AssetPacks                                             (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGooglePADErrorCode          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EGooglePADErrorCode UGooglePADFunctionLibrary::RequestInfo(TArray<class FString>& AssetPacks)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "RequestInfo");

	Params::GooglePADFunctionLibrary_RequestInfo Parms{};

	Parms.AssetPacks = std::move(AssetPacks);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.RequestRemoval
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           Name                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGooglePADErrorCode          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EGooglePADErrorCode UGooglePADFunctionLibrary::RequestRemoval(const class FString& Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "RequestRemoval");

	Params::GooglePADFunctionLibrary_RequestRemoval Parms{};

	Parms.Name = std::move(Name);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GooglePAD.GooglePADFunctionLibrary.ShowCellularDataConfirmation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EGooglePADErrorCode          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EGooglePADErrorCode UGooglePADFunctionLibrary::ShowCellularDataConfirmation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "ShowCellularDataConfirmation");

	Params::GooglePADFunctionLibrary_ShowCellularDataConfirmation Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

