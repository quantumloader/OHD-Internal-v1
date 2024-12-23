#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModifierSetting_ComboBox

#include "Basic.hpp"

#include "WBP_ModifierSetting_ComboBox_classes.hpp"
#include "WBP_ModifierSetting_ComboBox_parameters.hpp"


namespace SDK
{

// Function WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C.OnSelectionChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo                  SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModifierSetting_ComboBox_C::OnSelectionChanged__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModifierSetting_ComboBox_C", "OnSelectionChanged__DelegateSignature");

	Params::WBP_ModifierSetting_ComboBox_C_OnSelectionChanged__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C.OnOpening__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_ModifierSetting_ComboBox_C::OnOpening__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModifierSetting_ComboBox_C", "OnOpening__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C.ExecuteUbergraph_WBP_ModifierSetting_ComboBox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Array_Index_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Loop_Counter_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_TextIsEmpty_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           CallFunc_Array_Get_Item                                (ZeroConstructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             Temp_text_Variable                                     ()
// class FString                           K2Node_ComponentBoundEvent_SelectedItem                (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo                  K2Node_ComponentBoundEvent_SelectionType               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             K2Node_Select_Default                                  ()
// class USizeBoxSlot*                     CallFunc_SlotAsSizeBoxSlot_ReturnValue                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModifierSetting_ComboBox_C::ExecuteUbergraph_WBP_ModifierSetting_ComboBox(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_TextIsEmpty_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FText Temp_text_Variable, const class FString& K2Node_ComponentBoundEvent_SelectedItem, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType, bool Temp_bool_Variable, class FText K2Node_Select_Default, class USizeBoxSlot* CallFunc_SlotAsSizeBoxSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModifierSetting_ComboBox_C", "ExecuteUbergraph_WBP_ModifierSetting_ComboBox");

	Params::WBP_ModifierSetting_ComboBox_C_ExecuteUbergraph_WBP_ModifierSetting_ComboBox Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Array_Get_Item = std::move(CallFunc_Array_Get_Item);
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_ComponentBoundEvent_SelectedItem = std::move(K2Node_ComponentBoundEvent_SelectedItem);
	Parms.K2Node_ComponentBoundEvent_SelectionType = K2Node_ComponentBoundEvent_SelectionType;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SlotAsSizeBoxSlot_ReturnValue = CallFunc_SlotAsSizeBoxSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ModifierSetting_ComboBox_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModifierSetting_ComboBox_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C.BndEvt__ModifierComboBox_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ModifierSetting_ComboBox_C::BndEvt__ModifierComboBox_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModifierSetting_ComboBox_C", "BndEvt__ModifierComboBox_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C.BndEvt__ModifierComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo                  SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModifierSetting_ComboBox_C::BndEvt__ModifierComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModifierSetting_ComboBox_C", "BndEvt__ModifierComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");

	Params::WBP_ModifierSetting_ComboBox_C_BndEvt__ModifierComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ModifierSetting_ComboBox_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModifierSetting_ComboBox_C", "PreConstruct");

	Params::WBP_ModifierSetting_ComboBox_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C.SetSettingText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InSettingText                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ModifierSetting_ComboBox_C::SetSettingText(class FText InSettingText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModifierSetting_ComboBox_C", "SetSettingText");

	Params::WBP_ModifierSetting_ComboBox_C_SetSettingText Parms{};

	Parms.InSettingText = InSettingText;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModifierSetting_ComboBox.WBP_ModifierSetting_ComboBox_C.GetSettingText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             Param_SettingText                                      (Parm, OutParm)

void UWBP_ModifierSetting_ComboBox_C::GetSettingText(class FText* Param_SettingText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModifierSetting_ComboBox_C", "GetSettingText");

	Params::WBP_ModifierSetting_ComboBox_C_GetSettingText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_SettingText != nullptr)
		*Param_SettingText = std::move(Parms.Param_SettingText);
}

}

