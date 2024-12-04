#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HUDElement_VOIPIndicator_OutputListing

#include "Basic.hpp"

#include "WBP_HUDElement_VOIPIndicator_OutputListing_classes.hpp"
#include "WBP_HUDElement_VOIPIndicator_OutputListing_parameters.hpp"


namespace SDK
{

// Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_bIsDesignTime                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           CallFunc_GetPlayerName_ReturnValue                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                           CallFunc_ToUpper_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FSlateColor                      CallFunc_GetColorForCommChannel_ChannelColor           ()
// class FText                             CallFunc_Conv_StringToText_ReturnValue                 ()
// struct FSlateColor                      CallFunc_GetColorForCommChannel_ChannelColor_1         ()
// struct FGeometry                        K2Node_Event_MyGeometry                                (IsPlainOldData, NoDestructor)
// float                                   K2Node_Event_InDeltaTime                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHDKit*                           K2Node_CustomEvent_NewLoadout                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHDKit*                           CallFunc_GetMostValidLoadoutFromPS_Loadout             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                      K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*               CallFunc_PlayAnimationReverse_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*               CallFunc_PlayAnimationForward_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUDElement_VOIPIndicator_OutputListing_C::ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing(int32 EntryPoint, bool K2Node_Event_bIsDesignTime, const class FString& CallFunc_GetPlayerName_ReturnValue, const class FString& CallFunc_ToUpper_ReturnValue, const struct FSlateColor& CallFunc_GetColorForCommChannel_ChannelColor, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FSlateColor& CallFunc_GetColorForCommChannel_ChannelColor_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UHDKit* K2Node_CustomEvent_NewLoadout, class UHDKit* CallFunc_GetMostValidLoadoutFromPS_Loadout, bool K2Node_Event_IsDesignTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUDElement_VOIPIndicator_OutputListing_C", "ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing");

	Params::WBP_HUDElement_VOIPIndicator_OutputListing_C_ExecuteUbergraph_WBP_HUDElement_VOIPIndicator_OutputListing Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bIsDesignTime = K2Node_Event_bIsDesignTime;
	Parms.CallFunc_GetPlayerName_ReturnValue = std::move(CallFunc_GetPlayerName_ReturnValue);
	Parms.CallFunc_ToUpper_ReturnValue = std::move(CallFunc_ToUpper_ReturnValue);
	Parms.CallFunc_GetColorForCommChannel_ChannelColor = std::move(CallFunc_GetColorForCommChannel_ChannelColor);
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetColorForCommChannel_ChannelColor_1 = std::move(CallFunc_GetColorForCommChannel_ChannelColor_1);
	Parms.K2Node_Event_MyGeometry = std::move(K2Node_Event_MyGeometry);
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_CustomEvent_NewLoadout = K2Node_CustomEvent_NewLoadout;
	Parms.CallFunc_GetMostValidLoadoutFromPS_Loadout = CallFunc_GetMostValidLoadoutFromPS_Loadout;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.InputAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_HUDElement_VOIPIndicator_OutputListing_C::InputAnimFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUDElement_VOIPIndicator_OutputListing_C", "InputAnimFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.Deactivate
// (BlueprintCallable, BlueprintEvent)

void UWBP_HUDElement_VOIPIndicator_OutputListing_C::Deactivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUDElement_VOIPIndicator_OutputListing_C", "Deactivate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.Activate
// (BlueprintCallable, BlueprintEvent)

void UWBP_HUDElement_VOIPIndicator_OutputListing_C::Activate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUDElement_VOIPIndicator_OutputListing_C", "Activate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_HUDElement_VOIPIndicator_OutputListing_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUDElement_VOIPIndicator_OutputListing_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_HUDElement_VOIPIndicator_OutputListing_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUDElement_VOIPIndicator_OutputListing_C", "PreConstruct");

	Params::WBP_HUDElement_VOIPIndicator_OutputListing_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.PlayerLoadoutChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHDKit*                           NewLoadout                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUDElement_VOIPIndicator_OutputListing_C::PlayerLoadoutChanged(class UHDKit* NewLoadout)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUDElement_VOIPIndicator_OutputListing_C", "PlayerLoadoutChanged");

	Params::WBP_HUDElement_VOIPIndicator_OutputListing_C_PlayerLoadoutChanged Parms{};

	Parms.NewLoadout = NewLoadout;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUDElement_VOIPIndicator_OutputListing_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUDElement_VOIPIndicator_OutputListing_C", "Tick");

	Params::WBP_HUDElement_VOIPIndicator_OutputListing_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.OnVoiceMsgInfoSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsDesignTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_HUDElement_VOIPIndicator_OutputListing_C::OnVoiceMsgInfoSet(bool bIsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUDElement_VOIPIndicator_OutputListing_C", "OnVoiceMsgInfoSet");

	Params::WBP_HUDElement_VOIPIndicator_OutputListing_C_OnVoiceMsgInfoSet Parms{};

	Parms.bIsDesignTime = bIsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.GetMostValidLoadoutFromPS
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerState*                     PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHDKit*                           Loadout                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHDPlayerState*                   K2Node_DynamicCast_AsHDPlayer_State                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsValid_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_HUDElement_VOIPIndicator_OutputListing_C::GetMostValidLoadoutFromPS(class APlayerState* PlayerState, class UHDKit** Loadout, class AHDPlayerState* K2Node_DynamicCast_AsHDPlayer_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUDElement_VOIPIndicator_OutputListing_C", "GetMostValidLoadoutFromPS");

	Params::WBP_HUDElement_VOIPIndicator_OutputListing_C_GetMostValidLoadoutFromPS Parms{};

	Parms.PlayerState = PlayerState;
	Parms.K2Node_DynamicCast_AsHDPlayer_State = K2Node_DynamicCast_AsHDPlayer_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Loadout != nullptr)
		*Loadout = std::move(Parms.Loadout);
}


// Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.GetClassSymbolForLoadout
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UHDKit*                           Loadout                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                      ClassSymbolToUse                                       (Parm, OutParm)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                      K2Node_MakeStruct_SlateBrush                           ()
// bool                                    CallFunc_IsValid_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                      K2Node_MakeStruct_SlateBrush_1                         ()

void UWBP_HUDElement_VOIPIndicator_OutputListing_C::GetClassSymbolForLoadout(class UHDKit* Loadout, struct FSlateBrush* ClassSymbolToUse, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_IsValid_ReturnValue_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUDElement_VOIPIndicator_OutputListing_C", "GetClassSymbolForLoadout");

	Params::WBP_HUDElement_VOIPIndicator_OutputListing_C_GetClassSymbolForLoadout Parms{};

	Parms.Loadout = Loadout;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush = std::move(K2Node_MakeStruct_SlateBrush);
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_MakeStruct_SlateBrush_1 = std::move(K2Node_MakeStruct_SlateBrush_1);

	UObject::ProcessEvent(Func, &Parms);

	if (ClassSymbolToUse != nullptr)
		*ClassSymbolToUse = Parms.ClassSymbolToUse;
}


// Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.UpdateClassSymbol
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHDKit*                           Loadout                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                      CallFunc_GetClassSymbolForLoadout_ClassSymbolToUse     ()

void UWBP_HUDElement_VOIPIndicator_OutputListing_C::UpdateClassSymbol(class UHDKit* Loadout, const struct FSlateBrush& CallFunc_GetClassSymbolForLoadout_ClassSymbolToUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUDElement_VOIPIndicator_OutputListing_C", "UpdateClassSymbol");

	Params::WBP_HUDElement_VOIPIndicator_OutputListing_C_UpdateClassSymbol Parms{};

	Parms.Loadout = Loadout;
	Parms.CallFunc_GetClassSymbolForLoadout_ClassSymbolToUse = std::move(CallFunc_GetClassSymbolForLoadout_ClassSymbolToUse);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HUDElement_VOIPIndicator_OutputListing.WBP_HUDElement_VOIPIndicator_OutputListing_C.CheckForClassSymbolUpdates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHDKit*                           CallFunc_GetMostValidLoadoutFromPS_Loadout             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_NotEqual_ObjectObject_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsValid_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_HUDElement_VOIPIndicator_OutputListing_C::CheckForClassSymbolUpdates(bool CallFunc_IsValid_ReturnValue, class UHDKit* CallFunc_GetMostValidLoadoutFromPS_Loadout, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HUDElement_VOIPIndicator_OutputListing_C", "CheckForClassSymbolUpdates");

	Params::WBP_HUDElement_VOIPIndicator_OutputListing_C_CheckForClassSymbolUpdates Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetMostValidLoadoutFromPS_Loadout = CallFunc_GetMostValidLoadoutFromPS_Loadout;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);
}

}

