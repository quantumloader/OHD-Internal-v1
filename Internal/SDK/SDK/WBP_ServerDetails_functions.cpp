#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ServerDetails

#include "Basic.hpp"

#include "WBP_ServerDetails_classes.hpp"
#include "WBP_ServerDetails_parameters.hpp"


namespace SDK
{

// Function WBP_ServerDetails.WBP_ServerDetails_C.OnJoinServerBtnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_ServerDetails_C::OnJoinServerBtnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerDetails_C", "OnJoinServerBtnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ServerDetails.WBP_ServerDetails_C.ExecuteUbergraph_WBP_ServerDetails
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ServerDetails_C::ExecuteUbergraph_WBP_ServerDetails(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerDetails_C", "ExecuteUbergraph_WBP_ServerDetails");

	Params::WBP_ServerDetails_C_ExecuteUbergraph_WBP_ServerDetails Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ServerDetails.WBP_ServerDetails_C.BndEvt__JoinServerBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ServerDetails_C::BndEvt__JoinServerBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerDetails_C", "BndEvt__JoinServerBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ServerDetails.WBP_ServerDetails_C.SetupServerDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHDServerInfo                    ServerInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ServerDetails_C::SetupServerDetails(const struct FHDServerInfo& ServerInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerDetails_C", "SetupServerDetails");

	Params::WBP_ServerDetails_C_SetupServerDetails Parms{};

	Parms.ServerInfo = std::move(ServerInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ServerDetails.WBP_ServerDetails_C.UpdateServerData
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHDServerInfo                    ServerInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                           CallFunc_GetServerIpPort_ReturnValue                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                           CallFunc_Split_LeftS                                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                           CallFunc_Split_RightS                                  (ZeroConstructor, HasGetValueTypeHash)
// bool                                    CallFunc_Split_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             CallFunc_Conv_StringToText_ReturnValue                 ()
// class FText                             CallFunc_Conv_StringToText_ReturnValue_1               ()
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData                   (HasGetValueTypeHash)
// class FText                             CallFunc_Conv_StringToText_ReturnValue_2               ()
// class FText                             CallFunc_Conv_StringToText_ReturnValue_3               ()
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData_1                 (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData>      K2Node_MakeArray_Array                                 (ReferenceParm, HasGetValueTypeHash)
// class FText                             CallFunc_Format_ReturnValue                            ()

void UWBP_ServerDetails_C::UpdateServerData(struct FHDServerInfo& ServerInfo, const class FString& CallFunc_GetServerIpPort_ReturnValue, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_StringToText_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerDetails_C", "UpdateServerData");

	Params::WBP_ServerDetails_C_UpdateServerData Parms{};

	Parms.ServerInfo = std::move(ServerInfo);
	Parms.CallFunc_GetServerIpPort_ReturnValue = std::move(CallFunc_GetServerIpPort_ReturnValue);
	Parms.CallFunc_Split_LeftS = std::move(CallFunc_Split_LeftS);
	Parms.CallFunc_Split_RightS = std::move(CallFunc_Split_RightS);
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = std::move(K2Node_MakeStruct_FormatArgumentData);
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = std::move(K2Node_MakeStruct_FormatArgumentData_1);
	Parms.K2Node_MakeArray_Array = std::move(K2Node_MakeArray_Array);
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	ServerInfo = std::move(Parms.ServerInfo);
	K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);
}


// Function WBP_ServerDetails.WBP_ServerDetails_C.UpdateServerMetaData
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHDServerInfo                    ServerInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                           CallFunc_ToUpper_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                             CallFunc_Conv_StringToText_ReturnValue                 ()

void UWBP_ServerDetails_C::UpdateServerMetaData(struct FHDServerInfo& ServerInfo, const class FString& CallFunc_ToUpper_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerDetails_C", "UpdateServerMetaData");

	Params::WBP_ServerDetails_C_UpdateServerMetaData Parms{};

	Parms.ServerInfo = std::move(ServerInfo);
	Parms.CallFunc_ToUpper_ReturnValue = std::move(CallFunc_ToUpper_ReturnValue);
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	ServerInfo = std::move(Parms.ServerInfo);
}

}
