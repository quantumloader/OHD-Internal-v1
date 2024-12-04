#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModifierSetting_CheckBox

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_ModifierSetting_CheckBox.WBP_ModifierSetting_CheckBox_C.OnCheckStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_ModifierSetting_CheckBox_C_OnCheckStateChanged__DelegateSignature final 
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ModifierSetting_CheckBox.WBP_ModifierSetting_CheckBox_C.ExecuteUbergraph_WBP_ModifierSetting_CheckBox
// 0x0048 (0x0048 - 0x0000)
struct WBP_ModifierSetting_CheckBox_C_ExecuteUbergraph_WBP_ModifierSetting_CheckBox final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_173D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked;             // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_173E[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0030(0x0018)()
};

// Function WBP_ModifierSetting_CheckBox.WBP_ModifierSetting_CheckBox_C.BndEvt__ModifierCheckBox_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_ModifierSetting_CheckBox_C_BndEvt__ModifierCheckBox_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature final 
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ModifierSetting_CheckBox.WBP_ModifierSetting_CheckBox_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_ModifierSetting_CheckBox_C_PreConstruct final  : public UserWidget_PreConstruct
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ModifierSetting_CheckBox.WBP_ModifierSetting_CheckBox_C.SetSettingText
// 0x0018 (0x0018 - 0x0000)
struct WBP_ModifierSetting_CheckBox_C_SetSettingText final 
{
public:
	class FText                                   InSettingText;                                     // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ModifierSetting_CheckBox.WBP_ModifierSetting_CheckBox_C.GetSettingText
// 0x0018 (0x0018 - 0x0000)
struct WBP_ModifierSetting_CheckBox_C_GetSettingText final 
{
public:
	class FText                                   Param_SettingText;                                 // 0x0000(0x0018)(Parm, OutParm)
};

}

