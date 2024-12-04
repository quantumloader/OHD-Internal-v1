#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HDVictoryMenuBase

#include "Basic.hpp"

#include "WBP_HDVictoryMenuBase_classes.hpp"
#include "WBP_HDVictoryMenuBase_parameters.hpp"


namespace SDK
{

// Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.ExecuteUbergraph_WBP_HDVictoryMenuBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHDTeamState*                     CallFunc_GetHDTeamStateForTeam_HDTeamState             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHDTeamState*                     CallFunc_GetHDTeamStateForTeam_HDTeamState_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHDTeamState*                     CallFunc_GetHDTeamStateForTeam_HDTeamState_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           K2Node_ClassDynamicCast_AsBP_HDFaction_Info_Base       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_ClassDynamicCast_bSuccess                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                           K2Node_ClassDynamicCast_AsBP_HDFaction_Info_Base_1     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_ClassDynamicCast_bSuccess_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_HDVictoryMenuBase_C::ExecuteUbergraph_WBP_HDVictoryMenuBase(int32 EntryPoint, class AHDTeamState* CallFunc_GetHDTeamStateForTeam_HDTeamState, class AHDTeamState* CallFunc_GetHDTeamStateForTeam_HDTeamState_1, class AHDTeamState* CallFunc_GetHDTeamStateForTeam_HDTeamState_2, class UClass* K2Node_ClassDynamicCast_AsBP_HDFaction_Info_Base, bool K2Node_ClassDynamicCast_bSuccess, class UClass* K2Node_ClassDynamicCast_AsBP_HDFaction_Info_Base_1, bool K2Node_ClassDynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDVictoryMenuBase_C", "ExecuteUbergraph_WBP_HDVictoryMenuBase");

	Params::WBP_HDVictoryMenuBase_C_ExecuteUbergraph_WBP_HDVictoryMenuBase Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetHDTeamStateForTeam_HDTeamState = CallFunc_GetHDTeamStateForTeam_HDTeamState;
	Parms.CallFunc_GetHDTeamStateForTeam_HDTeamState_1 = CallFunc_GetHDTeamStateForTeam_HDTeamState_1;
	Parms.CallFunc_GetHDTeamStateForTeam_HDTeamState_2 = CallFunc_GetHDTeamStateForTeam_HDTeamState_2;
	Parms.K2Node_ClassDynamicCast_AsBP_HDFaction_Info_Base = K2Node_ClassDynamicCast_AsBP_HDFaction_Info_Base;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_ClassDynamicCast_AsBP_HDFaction_Info_Base_1 = K2Node_ClassDynamicCast_AsBP_HDFaction_Info_Base_1;
	Parms.K2Node_ClassDynamicCast_bSuccess_1 = K2Node_ClassDynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.OnVictoryInit
// (Event, Protected, BlueprintEvent)

void UWBP_HDVictoryMenuBase_C::OnVictoryInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDVictoryMenuBase_C", "OnVictoryInit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_HDVictoryMenuBase_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDVictoryMenuBase_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)
// struct FEventReply                      CallFunc_Handled_ReturnValue                           ()

struct FEventReply UWBP_HDVictoryMenuBase_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDVictoryMenuBase_C", "OnMouseButtonDown");

	Params::WBP_HDVictoryMenuBase_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);
	Parms.CallFunc_Handled_ReturnValue = std::move(CallFunc_Handled_ReturnValue);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        InMyGeometry                                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    InMouseEvent                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)
// struct FEventReply                      CallFunc_Handled_ReturnValue                           ()

struct FEventReply UWBP_HDVictoryMenuBase_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, struct FPointerEvent& InMouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDVictoryMenuBase_C", "OnMouseButtonDoubleClick");

	Params::WBP_HDVictoryMenuBase_C_OnMouseButtonDoubleClick Parms{};

	Parms.InMyGeometry = std::move(InMyGeometry);
	Parms.InMouseEvent = std::move(InMouseEvent);
	Parms.CallFunc_Handled_ReturnValue = std::move(CallFunc_Handled_ReturnValue);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.SetupVictoryText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EHDTeam                      Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             K2Node_Select_Default                                  ()
// class FText                             CallFunc_TextToUpper_ReturnValue                       ()

void UWBP_HDVictoryMenuBase_C::SetupVictoryText(enum class EHDTeam Temp_byte_Variable, class FText K2Node_Select_Default, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDVictoryMenuBase_C", "SetupVictoryText");

	Params::WBP_HDVictoryMenuBase_C_SetupVictoryText Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.SetupForceNameText
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_HDVictoryMenuBase_C::SetupForceNameText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDVictoryMenuBase_C", "SetupForceNameText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.SetupMapNameText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           CallFunc_GetMapName_ReturnValue                        (ZeroConstructor, HasGetValueTypeHash)
// class AWorldSettings*                   CallFunc_GetWorldSettings_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             CallFunc_Conv_StringToText_ReturnValue                 ()
// class ATBWorldSettings*                 K2Node_DynamicCast_AsTBWorld_Settings                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_TextIsEmpty_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             K2Node_Select_Default                                  ()
// class FText                             CallFunc_TextToUpper_ReturnValue                       ()

void UWBP_HDVictoryMenuBase_C::SetupMapNameText(bool Temp_bool_Variable, const class FString& CallFunc_GetMapName_ReturnValue, class AWorldSettings* CallFunc_GetWorldSettings_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class ATBWorldSettings* K2Node_DynamicCast_AsTBWorld_Settings, bool K2Node_DynamicCast_bSuccess, bool CallFunc_TextIsEmpty_ReturnValue, class FText K2Node_Select_Default, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDVictoryMenuBase_C", "SetupMapNameText");

	Params::WBP_HDVictoryMenuBase_C_SetupMapNameText Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetMapName_ReturnValue = std::move(CallFunc_GetMapName_ReturnValue);
	Parms.CallFunc_GetWorldSettings_ReturnValue = CallFunc_GetWorldSettings_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_DynamicCast_AsTBWorld_Settings = K2Node_DynamicCast_AsTBWorld_Settings;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.SetupElapsedTimeText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CallFunc_Divide_IntInt_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Percent_IntInt_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             CallFunc_Conv_IntToText_ReturnValue                    ()
// class FText                             CallFunc_Conv_IntToText_ReturnValue_1                  ()
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData                   (HasGetValueTypeHash)
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData_1                 (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData>      K2Node_MakeArray_Array                                 (ReferenceParm, HasGetValueTypeHash)
// class FText                             CallFunc_Format_ReturnValue                            ()

void UWBP_HDVictoryMenuBase_C::SetupElapsedTimeText(int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDVictoryMenuBase_C", "SetupElapsedTimeText");

	Params::WBP_HDVictoryMenuBase_C_SetupElapsedTimeText Parms{};

	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = std::move(K2Node_MakeStruct_FormatArgumentData);
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = std::move(K2Node_MakeStruct_FormatArgumentData_1);
	Parms.K2Node_MakeArray_Array = std::move(K2Node_MakeArray_Array);
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);
}


// Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.SetupGameModeNameText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*                   CallFunc_GetGameState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           K2Node_ClassDynamicCast_AsDFBase_Game_Mode             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_ClassDynamicCast_bSuccess                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           CallFunc_GetClassDisplayName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// bool                                    CallFunc_TextIsEmpty_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             CallFunc_Conv_StringToText_ReturnValue                 ()
// class FText                             K2Node_Select_Default                                  ()
// class FText                             CallFunc_TextToUpper_ReturnValue                       ()

void UWBP_HDVictoryMenuBase_C::SetupGameModeNameText(bool Temp_bool_Variable, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsDFBase_Game_Mode, bool K2Node_ClassDynamicCast_bSuccess, const class FString& CallFunc_GetClassDisplayName_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_Select_Default, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDVictoryMenuBase_C", "SetupGameModeNameText");

	Params::WBP_HDVictoryMenuBase_C_SetupGameModeNameText Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsDFBase_Game_Mode = K2Node_ClassDynamicCast_AsDFBase_Game_Mode;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_GetClassDisplayName_ReturnValue = std::move(CallFunc_GetClassDisplayName_ReturnValue);
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.SetupTeamScoreText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             CallFunc_Conv_IntToText_ReturnValue                    ()
// class FText                             CallFunc_Conv_IntToText_ReturnValue_1                  ()

void UWBP_HDVictoryMenuBase_C::SetupTeamScoreText(class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDVictoryMenuBase_C", "SetupTeamScoreText");

	Params::WBP_HDVictoryMenuBase_C_SetupTeamScoreText Parms{};

	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.PlayWinLossMenuMusic
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           CallFunc_GetDisplayName_ReturnValue                    (ZeroConstructor, HasGetValueTypeHash)
// class FString                           CallFunc_Concat_StrStr_ReturnValue                     (ZeroConstructor, HasGetValueTypeHash)
// enum class EHDTeam                      CallFunc_GetPlayerTeam_PlayerTeam                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           CallFunc_Concat_StrStr_ReturnValue_1                   (ZeroConstructor, HasGetValueTypeHash)
// class USoundBase*                       CallFunc_GetMusicTrackToUse_SoundToUse                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*                  CallFunc_SpawnSound2D_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HDVictoryMenuBase_C::PlayWinLossMenuMusic(bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, enum class EHDTeam CallFunc_GetPlayerTeam_PlayerTeam, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class USoundBase* CallFunc_GetMusicTrackToUse_SoundToUse, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDVictoryMenuBase_C", "PlayWinLossMenuMusic");

	Params::WBP_HDVictoryMenuBase_C_PlayWinLossMenuMusic Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = std::move(CallFunc_GetDisplayName_ReturnValue);
	Parms.CallFunc_Concat_StrStr_ReturnValue = std::move(CallFunc_Concat_StrStr_ReturnValue);
	Parms.CallFunc_GetPlayerTeam_PlayerTeam = CallFunc_GetPlayerTeam_PlayerTeam;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = std::move(CallFunc_Concat_StrStr_ReturnValue_1);
	Parms.CallFunc_GetMusicTrackToUse_SoundToUse = CallFunc_GetMusicTrackToUse_SoundToUse;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.GetMusicTrackToUse
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EHDTeam                      PlayerTeam                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bPlayerWon                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                       SoundToUse                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                       Temp_object_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHDTeam                      Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                       Temp_object_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EHDTeam                      Temp_byte_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                       K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                       K2Node_Select_Default_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                       K2Node_Select_Default_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HDVictoryMenuBase_C::GetMusicTrackToUse(enum class EHDTeam PlayerTeam, bool bPlayerWon, class USoundBase** SoundToUse, class USoundBase* Temp_object_Variable, enum class EHDTeam Temp_byte_Variable, class USoundBase* Temp_object_Variable_1, bool Temp_bool_Variable, enum class EHDTeam Temp_byte_Variable_1, class USoundBase* K2Node_Select_Default, class USoundBase* K2Node_Select_Default_1, class USoundBase* K2Node_Select_Default_2) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDVictoryMenuBase_C", "GetMusicTrackToUse");

	Params::WBP_HDVictoryMenuBase_C_GetMusicTrackToUse Parms{};

	Parms.PlayerTeam = PlayerTeam;
	Parms.bPlayerWon = bPlayerWon;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

	if (SoundToUse != nullptr)
		*SoundToUse = std::move(Parms.SoundToUse);
}


// Function WBP_HDVictoryMenuBase.WBP_HDVictoryMenuBase_C.GetPlayerTeam
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EHDTeam                      PlayerTeam                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EHDTeam                      Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHDTeam                      Temp_byte_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Temp_bool_Variable_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EHDTeam                      Temp_byte_Variable_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_NotEqual_ByteByte_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EHDTeam                      K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHDTeam                      K2Node_Select_Default_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHDTeam                      K2Node_Select_Default_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HDVictoryMenuBase_C::GetPlayerTeam(enum class EHDTeam* PlayerTeam, bool Temp_bool_Variable, enum class EHDTeam Temp_byte_Variable, enum class EHDTeam Temp_byte_Variable_1, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, enum class EHDTeam Temp_byte_Variable_2, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EHDTeam K2Node_Select_Default, enum class EHDTeam K2Node_Select_Default_1, enum class EHDTeam K2Node_Select_Default_2) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDVictoryMenuBase_C", "GetPlayerTeam");

	Params::WBP_HDVictoryMenuBase_C_GetPlayerTeam Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

	if (PlayerTeam != nullptr)
		*PlayerTeam = std::move(Parms.PlayerTeam);
}

}
