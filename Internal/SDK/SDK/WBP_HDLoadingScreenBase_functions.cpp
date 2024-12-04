#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HDLoadingScreenBase

#include "Basic.hpp"

#include "WBP_HDLoadingScreenBase_classes.hpp"
#include "WBP_HDLoadingScreenBase_parameters.hpp"


namespace SDK
{

// Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.ExecuteUbergraph_WBP_HDLoadingScreenBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLoadingScreenDescription        K2Node_Event_Description                               (ConstParm)
// TSoftObjectPtr<class UTexture2D>        CallFunc_Array_Get_Item                                (HasGetValueTypeHash)
// struct FLoadScreenLevelData             K2Node_Event_LevelData                                 (ConstParm)
// class UObject*                          CallFunc_LoadAsset_Blocking_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValidSoftObjectReference_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                       K2Node_DynamicCast_AsTexture_2D                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_TextIsEmpty_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             CallFunc_TextToUpper_ReturnValue                       ()
// class FText                             CallFunc_TextToUpper_ReturnValue_1                     ()
// bool                                    CallFunc_TextIsEmpty_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility             Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility             Temp_byte_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility             Temp_byte_Variable_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility             K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility             Temp_byte_Variable_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility             K2Node_Select_Default_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Subtract_IntInt_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_RandomIntegerInRange_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>        CallFunc_Array_Get_Item_1                              (HasGetValueTypeHash)

void UWBP_HDLoadingScreenBase_C::ExecuteUbergraph_WBP_HDLoadingScreenBase(int32 EntryPoint, struct FLoadingScreenDescription& K2Node_Event_Description, TSoftObjectPtr<class UTexture2D> CallFunc_Array_Get_Item, struct FLoadScreenLevelData& K2Node_Event_LevelData, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_1, bool CallFunc_TextIsEmpty_ReturnValue_1, bool K2Node_Event_IsDesignTime, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_Array_Get_Item_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDLoadingScreenBase_C", "ExecuteUbergraph_WBP_HDLoadingScreenBase");

	Params::WBP_HDLoadingScreenBase_C_ExecuteUbergraph_WBP_HDLoadingScreenBase Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Description = std::move(K2Node_Event_Description);
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_Event_LevelData = std::move(K2Node_Event_LevelData);
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue_1 = CallFunc_TextToUpper_ReturnValue_1;
	Parms.CallFunc_TextIsEmpty_ReturnValue_1 = CallFunc_TextIsEmpty_ReturnValue_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_HDLoadingScreenBase_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDLoadingScreenBase_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_HDLoadingScreenBase_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDLoadingScreenBase_C", "PreConstruct");

	Params::WBP_HDLoadingScreenBase_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.SetLevelLoadData
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FLoadScreenLevelData             LevelData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_HDLoadingScreenBase_C::SetLevelLoadData(struct FLoadScreenLevelData& LevelData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDLoadingScreenBase_C", "SetLevelLoadData");

	Params::WBP_HDLoadingScreenBase_C_SetLevelLoadData Parms{};

	Parms.LevelData = std::move(LevelData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.SetLoadingScreenDescription
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FLoadingScreenDescription        Description                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_HDLoadingScreenBase_C::SetLoadingScreenDescription(struct FLoadingScreenDescription& Description)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDLoadingScreenBase_C", "SetLoadingScreenDescription");

	Params::WBP_HDLoadingScreenBase_C_SetLoadingScreenDescription Parms{};

	Parms.Description = std::move(Description);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.SetMapElementVisibility
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility             NewVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HDLoadingScreenBase_C::SetMapElementVisibility(enum class ESlateVisibility NewVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDLoadingScreenBase_C", "SetMapElementVisibility");

	Params::WBP_HDLoadingScreenBase_C_SetMapElementVisibility Parms{};

	Parms.NewVisibility = NewVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.SetBluforStartingTicketCount
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TicketCount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData                   (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData>      K2Node_MakeArray_Array                                 (ReferenceParm, HasGetValueTypeHash)
// class FText                             CallFunc_Format_ReturnValue                            ()

void UWBP_HDLoadingScreenBase_C::SetBluforStartingTicketCount(int32 TicketCount, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDLoadingScreenBase_C", "SetBluforStartingTicketCount");

	Params::WBP_HDLoadingScreenBase_C_SetBluforStartingTicketCount Parms{};

	Parms.TicketCount = TicketCount;
	Parms.K2Node_MakeStruct_FormatArgumentData = std::move(K2Node_MakeStruct_FormatArgumentData);
	Parms.K2Node_MakeArray_Array = std::move(K2Node_MakeArray_Array);
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);
}


// Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.SetOpforStartingTicketCount
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TicketCount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData                   (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData>      K2Node_MakeArray_Array                                 (ReferenceParm, HasGetValueTypeHash)
// class FText                             CallFunc_Format_ReturnValue                            ()

void UWBP_HDLoadingScreenBase_C::SetOpforStartingTicketCount(int32 TicketCount, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDLoadingScreenBase_C", "SetOpforStartingTicketCount");

	Params::WBP_HDLoadingScreenBase_C_SetOpforStartingTicketCount Parms{};

	Parms.TicketCount = TicketCount;
	Parms.K2Node_MakeStruct_FormatArgumentData = std::move(K2Node_MakeStruct_FormatArgumentData);
	Parms.K2Node_MakeArray_Array = std::move(K2Node_MakeArray_Array);
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);
}


// Function WBP_HDLoadingScreenBase.WBP_HDLoadingScreenBase_C.SetMapBgImage
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>        InBgImage                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                          CallFunc_LoadAsset_Blocking_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       K2Node_DynamicCast_AsTexture_2D                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_HDLoadingScreenBase_C::SetMapBgImage(TSoftObjectPtr<class UTexture2D> InBgImage, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_HDLoadingScreenBase_C", "SetMapBgImage");

	Params::WBP_HDLoadingScreenBase_C_SetMapBgImage Parms{};

	Parms.InBgImage = InBgImage;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}

}

