#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModifierSetting_Numeric

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.OnValueChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct WBP_ModifierSetting_Numeric_C_OnValueChanged__DelegateSignature final 
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.OnValueCommitted__DelegateSignature
// 0x0005 (0x0005 - 0x0000)
struct WBP_ModifierSetting_Numeric_C_OnValueCommitted__DelegateSignature final 
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETextCommit                        CommitMethod;                                      // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.ExecuteUbergraph_WBP_ModifierSetting_Numeric
// 0x004D (0x004D - 0x0000)
struct WBP_ModifierSetting_Numeric_C_ExecuteUbergraph_WBP_ModifierSetting_Numeric final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_16EF[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_16F0[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0028(0x0018)()
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_16F1[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_ComponentBoundEvent_InValue_1;              // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_InValue;                // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETextCommit                        K2Node_ComponentBoundEvent_CommitMethod;           // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.BndEvt__NumericSpinBox_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature
// 0x0005 (0x0005 - 0x0000)
struct WBP_ModifierSetting_Numeric_C_BndEvt__NumericSpinBox_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature final 
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETextCommit                        CommitMethod;                                      // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.BndEvt__NumericSpinBox_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct WBP_ModifierSetting_Numeric_C_BndEvt__NumericSpinBox_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature final 
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_ModifierSetting_Numeric_C_PreConstruct final  : public UserWidget_PreConstruct
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.SetSettingText
// 0x0018 (0x0018 - 0x0000)
struct WBP_ModifierSetting_Numeric_C_SetSettingText final 
{
public:
	class FText                                   InSettingText;                                     // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.GetSettingText
// 0x0018 (0x0018 - 0x0000)
struct WBP_ModifierSetting_Numeric_C_GetSettingText final 
{
public:
	class FText                                   Param_SettingText;                                 // 0x0000(0x0018)(Parm, OutParm)
};

// Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.SetMagicValueText
// 0x0018 (0x0018 - 0x0000)
struct WBP_ModifierSetting_Numeric_C_SetMagicValueText final 
{
public:
	class FText                                   InMagicValueText;                                  // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.GetMagicValueText
// 0x0018 (0x0018 - 0x0000)
struct WBP_ModifierSetting_Numeric_C_GetMagicValueText final 
{
public:
	class FText                                   Param_MagicValueText;                              // 0x0000(0x0018)(Parm, OutParm)
};

// Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.SetValue
// 0x0004 (0x0004 - 0x0000)
struct WBP_ModifierSetting_Numeric_C_SetValue final 
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.GetValue
// 0x0008 (0x0008 - 0x0000)
struct WBP_ModifierSetting_Numeric_C_GetValue final 
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValue_ReturnValue;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.SetValueSnapDelta
// 0x0009 (0x0009 - 0x0000)
struct WBP_ModifierSetting_Numeric_C_SetValueSnapDelta final 
{
public:
	float                                         InDelta;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDelta_ReturnValue;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.GetValueSnapDelta
// 0x0008 (0x0008 - 0x0000)
struct WBP_ModifierSetting_Numeric_C_GetValueSnapDelta final 
{
public:
	float                                         Delta;                                             // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDelta_ReturnValue;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ModifierSetting_Numeric.WBP_ModifierSetting_Numeric_C.UpdateMagicValueState
// 0x0089 (0x0089 - 0x0000)
struct WBP_ModifierSetting_Numeric_C_UpdateMagicValueState final 
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                   Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                   Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_16F2[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	bool                                          Temp_bool_Variable_2;                              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_16F3[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetValue_ReturnValue;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Map_Find_Value;                           // 0x0028(0x0018)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_16F4[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0048(0x0018)()
	struct FSlateColor                            K2Node_Select_Default_1;                           // 0x0060(0x0028)()
	enum class ESlateVisibility                   K2Node_Select_Default_2;                           // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

