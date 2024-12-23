#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OptionsMenuItem_Slider

#include "Basic.hpp"

#include "WBP_OptionsMenuItem_Slider_classes.hpp"
#include "WBP_OptionsMenuItem_Slider_parameters.hpp"


namespace SDK
{

// Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.ValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionsMenuItem_Slider_C::ValueChanged__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsMenuItem_Slider_C", "ValueChanged__DelegateSignature");

	Params::WBP_OptionsMenuItem_Slider_C_ValueChanged__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.ExecuteUbergraph_WBP_OptionsMenuItem_Slider
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_FClamp_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   K2Node_ComponentBoundEvent_Value                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_Percent_FloatFloat_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_Subtract_FloatFloat_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetValue_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_NotEqual_FloatFloat_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*               CallFunc_SlotAsHorizontalBoxSlot_ReturnValue           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*               CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionsMenuItem_Slider_C::ExecuteUbergraph_WBP_OptionsMenuItem_Slider(int32 EntryPoint, float CallFunc_FClamp_ReturnValue, float K2Node_ComponentBoundEvent_Value, float CallFunc_Percent_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetValue_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool K2Node_Event_IsDesignTime, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsMenuItem_Slider_C", "ExecuteUbergraph_WBP_OptionsMenuItem_Slider");

	Params::WBP_OptionsMenuItem_Slider_C_ExecuteUbergraph_WBP_OptionsMenuItem_Slider Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_Percent_FloatFloat_ReturnValue = CallFunc_Percent_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1 = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.BndEvt__OptionSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionsMenuItem_Slider_C::BndEvt__OptionSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsMenuItem_Slider_C", "BndEvt__OptionSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	Params::WBP_OptionsMenuItem_Slider_C_BndEvt__OptionSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_OptionsMenuItem_Slider_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsMenuItem_Slider_C", "PreConstruct");

	Params::WBP_OptionsMenuItem_Slider_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.GetValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Value                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetValue_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionsMenuItem_Slider_C::GetValue(float* Value, float CallFunc_GetValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsMenuItem_Slider_C", "GetValue");

	Params::WBP_OptionsMenuItem_Slider_C_GetValue Parms{};

	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = std::move(Parms.Value);
}


// Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.SetValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionsMenuItem_Slider_C::SetValue(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsMenuItem_Slider_C", "SetValue");

	Params::WBP_OptionsMenuItem_Slider_C_SetValue Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.IsLocked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bOutLocked                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_OptionsMenuItem_Slider_C::IsLocked(bool* bOutLocked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsMenuItem_Slider_C", "IsLocked");

	Params::WBP_OptionsMenuItem_Slider_C_IsLocked Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bOutLocked != nullptr)
		*bOutLocked = std::move(Parms.bOutLocked);
}


// Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.SetLocked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInLocked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_OptionsMenuItem_Slider_C::SetLocked(bool bInLocked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsMenuItem_Slider_C", "SetLocked");

	Params::WBP_OptionsMenuItem_Slider_C_SetLocked Parms{};

	Parms.bInLocked = bInLocked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.SetNormalizedValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InNormValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_Multiply_FloatFloat_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionsMenuItem_Slider_C::SetNormalizedValue(float InNormValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsMenuItem_Slider_C", "SetNormalizedValue");

	Params::WBP_OptionsMenuItem_Slider_C_SetNormalizedValue Parms{};

	Parms.InNormValue = InNormValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.GetNormalizedValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   ValueNormalized                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetNormalizedValue_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionsMenuItem_Slider_C::GetNormalizedValue(float* ValueNormalized, float CallFunc_GetNormalizedValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsMenuItem_Slider_C", "GetNormalizedValue");

	Params::WBP_OptionsMenuItem_Slider_C_GetNormalizedValue Parms{};

	Parms.CallFunc_GetNormalizedValue_ReturnValue = CallFunc_GetNormalizedValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ValueNormalized != nullptr)
		*ValueNormalized = std::move(Parms.ValueNormalized);
}


// Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.UpdateSliderText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData                   (HasGetValueTypeHash)
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData_1                 (HasGetValueTypeHash)
// class FText                             CallFunc_Conv_FloatToText_ReturnValue                  ()
// class FText                             CallFunc_Map_Find_Value                                ()
// bool                                    CallFunc_Map_Find_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             CallFunc_TextToUpper_ReturnValue                       ()
// class FText                             K2Node_Select_Default                                  ()
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData_2                 (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData>      K2Node_MakeArray_Array                                 (ReferenceParm, HasGetValueTypeHash)
// class FText                             CallFunc_Format_ReturnValue                            ()

void UWBP_OptionsMenuItem_Slider_C::UpdateSliderText(float NewValue, bool Temp_bool_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Conv_FloatToText_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsMenuItem_Slider_C", "UpdateSliderText");

	Params::WBP_OptionsMenuItem_Slider_C_UpdateSliderText Parms{};

	Parms.NewValue = NewValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_FormatArgumentData = std::move(K2Node_MakeStruct_FormatArgumentData);
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = std::move(K2Node_MakeStruct_FormatArgumentData_1);
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = std::move(K2Node_MakeStruct_FormatArgumentData_2);
	Parms.K2Node_MakeArray_Array = std::move(K2Node_MakeArray_Array);
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);
}


// Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.SetValueMin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NewMin                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_FMin_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionsMenuItem_Slider_C::SetValueMin(float NewMin, float CallFunc_FMin_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsMenuItem_Slider_C", "SetValueMin");

	Params::WBP_OptionsMenuItem_Slider_C_SetValueMin Parms{};

	Parms.NewMin = NewMin;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.SetValueMax
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NewMax                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_FMax_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionsMenuItem_Slider_C::SetValueMax(float NewMax, float CallFunc_FMax_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsMenuItem_Slider_C", "SetValueMax");

	Params::WBP_OptionsMenuItem_Slider_C_SetValueMax Parms{};

	Parms.NewMax = NewMax;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.SetValueStepSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NewStepSize                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionsMenuItem_Slider_C::SetValueStepSize(float NewStepSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsMenuItem_Slider_C", "SetValueStepSize");

	Params::WBP_OptionsMenuItem_Slider_C_SetValueStepSize Parms{};

	Parms.NewStepSize = NewStepSize;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.SetMouseUsesStep
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInMouseUsesStep                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_OptionsMenuItem_Slider_C::SetMouseUsesStep(bool bInMouseUsesStep)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsMenuItem_Slider_C", "SetMouseUsesStep");

	Params::WBP_OptionsMenuItem_Slider_C_SetMouseUsesStep Parms{};

	Parms.bInMouseUsesStep = bInMouseUsesStep;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.DoesMouseUseStep
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bOutMouseUsesStep                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_OptionsMenuItem_Slider_C::DoesMouseUseStep(bool* bOutMouseUsesStep)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsMenuItem_Slider_C", "DoesMouseUseStep");

	Params::WBP_OptionsMenuItem_Slider_C_DoesMouseUseStep Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bOutMouseUsesStep != nullptr)
		*bOutMouseUsesStep = std::move(Parms.bOutMouseUsesStep);
}


// Function WBP_OptionsMenuItem_Slider.WBP_OptionsMenuItem_Slider_C.SetValueInternal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bDirectSet                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_Greater_FloatFloat_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   CallFunc_GridSnap_Float_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanAND_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_FClamp_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionsMenuItem_Slider_C::SetValueInternal(float InValue, bool bDirectSet, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool Temp_bool_Variable, float CallFunc_GridSnap_Float_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, float K2Node_Select_Default, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsMenuItem_Slider_C", "SetValueInternal");

	Params::WBP_OptionsMenuItem_Slider_C_SetValueInternal Parms{};

	Parms.InValue = InValue;
	Parms.bDirectSet = bDirectSet;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GridSnap_Float_ReturnValue = CallFunc_GridSnap_Float_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

