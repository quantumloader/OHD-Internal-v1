#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ServerListEntryColumn

#include "Basic.hpp"

#include "WBP_ServerListEntryColumn_classes.hpp"
#include "WBP_ServerListEntryColumn_parameters.hpp"


namespace SDK
{

// Function WBP_ServerListEntryColumn.WBP_ServerListEntryColumn_C.ExecuteUbergraph_WBP_ServerListEntryColumn
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Temp_bool_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   CallFunc_Max_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Multiply_IntInt_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Max_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_Conv_IntToFloat_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Multiply_IntInt_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_Conv_IntToFloat_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_Less_FloatFloat_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_Less_FloatFloat_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   K2Node_Select_Default_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_FloatFloat_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_Less_FloatFloat_ReturnValue_3                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ServerListEntryColumn_C::ExecuteUbergraph_WBP_ServerListEntryColumn(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, bool K2Node_Event_IsDesignTime, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, float K2Node_Select_Default, float K2Node_Select_Default_1, bool CallFunc_Less_FloatFloat_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerListEntryColumn_C", "ExecuteUbergraph_WBP_ServerListEntryColumn");

	Params::WBP_ServerListEntryColumn_C_ExecuteUbergraph_WBP_ServerListEntryColumn Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Max_ReturnValue_1 = CallFunc_Max_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue_1 = CallFunc_Multiply_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_2 = CallFunc_Less_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_3 = CallFunc_Less_FloatFloat_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ServerListEntryColumn.WBP_ServerListEntryColumn_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ServerListEntryColumn_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerListEntryColumn_C", "PreConstruct");

	Params::WBP_ServerListEntryColumn_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ServerListEntryColumn.WBP_ServerListEntryColumn_C.SetItemText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Temp_bool_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           CallFunc_Conv_TextToString_ReturnValue                 (ZeroConstructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   CallFunc_Len_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   K2Node_Select_Default_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           CallFunc_AbbreviateString_AbbrevString                 (ZeroConstructor, HasGetValueTypeHash)
// class FString                           CallFunc_ToUpper_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                             CallFunc_Conv_StringToText_ReturnValue                 ()

void UWBP_ServerListEntryColumn_C::SetItemText(class FText InText, bool Temp_bool_Variable, bool Temp_bool_Variable_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Len_ReturnValue, int32 K2Node_Select_Default, bool CallFunc_Less_IntInt_ReturnValue_1, int32 K2Node_Select_Default_1, const class FString& CallFunc_AbbreviateString_AbbrevString, const class FString& CallFunc_ToUpper_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerListEntryColumn_C", "SetItemText");

	Params::WBP_ServerListEntryColumn_C_SetItemText Parms{};

	Parms.InText = InText;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = std::move(CallFunc_Conv_TextToString_ReturnValue);
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_AbbreviateString_AbbrevString = std::move(CallFunc_AbbreviateString_AbbrevString);
	Parms.CallFunc_ToUpper_ReturnValue = std::move(CallFunc_ToUpper_ReturnValue);
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ServerListEntryColumn.WBP_ServerListEntryColumn_C.SetItemSubText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Temp_bool_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           CallFunc_Conv_TextToString_ReturnValue                 (ZeroConstructor, HasGetValueTypeHash)
// int32                                   CallFunc_Len_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_Less_IntInt_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   K2Node_Select_Default_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           CallFunc_AbbreviateString_AbbrevString                 (ZeroConstructor, HasGetValueTypeHash)
// class FString                           CallFunc_ToUpper_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                             CallFunc_Conv_StringToText_ReturnValue                 ()

void UWBP_ServerListEntryColumn_C::SetItemSubText(class FText InText, bool Temp_bool_Variable, bool Temp_bool_Variable_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 K2Node_Select_Default, int32 K2Node_Select_Default_1, const class FString& CallFunc_AbbreviateString_AbbrevString, const class FString& CallFunc_ToUpper_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ServerListEntryColumn_C", "SetItemSubText");

	Params::WBP_ServerListEntryColumn_C_SetItemSubText Parms{};

	Parms.InText = InText;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = std::move(CallFunc_Conv_TextToString_ReturnValue);
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_AbbreviateString_AbbrevString = std::move(CallFunc_AbbreviateString_AbbrevString);
	Parms.CallFunc_ToUpper_ReturnValue = std::move(CallFunc_ToUpper_ReturnValue);
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

