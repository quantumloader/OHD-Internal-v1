#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ServerListModifierSettings_BasicFilters

#include "Basic.hpp"

#include "HDMain_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "FServerSortPreference_structs.hpp"
#include "EHDListSortOrder_structs.hpp"


namespace SDK::Params
{

// Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.OnSortPreferenceChanged__DelegateSignature
// 0x0002 (0x0002 - 0x0000)
struct WBP_ServerListModifierSettings_BasicFilters_C_OnSortPreferenceChanged__DelegateSignature final 
{
public:
	struct FFServerSortPreference                 SortPreference;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.OnFilterSettingsChanged__DelegateSignature
// 0x0050 (0x0050 - 0x0000)
struct WBP_ServerListModifierSettings_BasicFilters_C_OnFilterSettingsChanged__DelegateSignature final 
{
public:
	TMap<class UClass*, struct FHDFilterRuleParams> ActiveFilters;                                     // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.ExecuteUbergraph_WBP_ServerListModifierSettings_BasicFilters
// 0x014B (0x014B - 0x0000)
struct WBP_ServerListModifierSettings_BasicFilters_C_ExecuteUbergraph_WBP_ServerListModifierSettings_BasicFilters final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_173F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class UClass*, struct FHDFilterRuleParams> CallFunc_GetFilterRules_FilterRules;               // 0x0008(0x0050)()
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1740[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem_1;         // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	enum class ESelectInfo                        K2Node_ComponentBoundEvent_SelectionType_1;        // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFServerSortPreference                 CallFunc_GetSelectedServerSortPreference_SortPreference; // 0x0079(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem;           // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	enum class ESelectInfo                        K2Node_ComponentBoundEvent_SelectionType;          // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFServerSortPreference                 K2Node_MakeStruct_FServerSortPreference;           // 0x0091(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFServerSortPreference                 CallFunc_GetSelectedServerSortPreference_SortPreference_1; // 0x0093(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_CustomEvent_Rule;                           // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHDFilterRuleParams                    K2Node_CustomEvent_RuleParams;                     // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x00A8(0x0010)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	FDelegateProperty_                            K2Node_CreateDelegate_OutputDelegate;              // 0x00B8(0x0010)(ZeroConstructor, NoDestructor)
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1741[0x4];                                     // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ServerListModifierSetting_FilterRule_Toggle_C* K2Node_DynamicCast_AsWBP_Server_List_Modifier_Setting_Filter_Rule_Toggle; // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1742[0x6];                                     // 0x00E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ServerListModifierSetting_FilterRule_C* K2Node_DynamicCast_AsWBP_Server_List_Modifier_Setting_Filter_Rule; // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_DoesImplementInterface_ReturnValue;       // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                   CallFunc_GetVisibility_ReturnValue;                // 0x00F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1743[0x5];                                     // 0x00F3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class UClass*, struct FHDFilterRuleParams> CallFunc_GetFilterRules_FilterRules_1;             // 0x00F8(0x0050)()
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x014A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.FilterSettingChanged
// 0x000A (0x000A - 0x0000)
struct WBP_ServerListModifierSettings_BasicFilters_C_FilterSettingChanged final 
{
public:
	class UClass*                                 Rule;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHDFilterRuleParams                    RuleParams;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.BndEvt__SortByOrder_K2Node_ComponentBoundEvent_3_OnSelectionChanged__DelegateSignature
// 0x0011 (0x0011 - 0x0000)
struct WBP_ServerListModifierSettings_BasicFilters_C_BndEvt__SortByOrder_K2Node_ComponentBoundEvent_3_OnSelectionChanged__DelegateSignature final 
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	enum class ESelectInfo                        SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.BndEvt__SortByPreference_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
// 0x0011 (0x0011 - 0x0000)
struct WBP_ServerListModifierSettings_BasicFilters_C_BndEvt__SortByPreference_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature final 
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	enum class ESelectInfo                        SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.GetSelectedServerSortPreference
// 0x0026 (0x0026 - 0x0000)
struct WBP_ServerListModifierSettings_BasicFilters_C_GetSelectedServerSortPreference final 
{
public:
	struct FFServerSortPreference                 SortPreference;                                    // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EHDListSortOrder                   Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EHDListSortOrder                   Temp_byte_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFServerSortPreference                 K2Node_MakeStruct_FServerSortPreference;           // 0x0006(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsActive_bActive;                         // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1744[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSelectedIndex_ReturnValue;             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1745[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSelectedIndex_ReturnValue_1;           // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EHDListSortOrder                   K2Node_Select_Default;                             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1746[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFServerSortPreference                 K2Node_MakeStruct_FServerSortPreference_1;         // 0x0022(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFServerSortPreference                 K2Node_Select_Default_1;                           // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ServerListModifierSettings_BasicFilters.WBP_ServerListModifierSettings_BasicFilters_C.GetFilterRules
// 0x0106 (0x0106 - 0x0000)
struct WBP_ServerListModifierSettings_BasicFilters_C_GetFilterRules final 
{
public:
	bool                                          bActiveOnly;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1747[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class UClass*, struct FHDFilterRuleParams> FilterRules;                                       // 0x0008(0x0050)(Parm, OutParm)
	TMap<class UClass*, struct FHDFilterRuleParams> Rules;                                             // 0x0058(0x0050)(Edit, BlueprintVisible)
	int32                                         Temp_int_Variable;                                 // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_ServerFilterRuleSetting_C> K2Node_DynamicCast_AsBPI_Server_Filter_Rule_Setting; // 0x00B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1748[0x3];                                     // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFilterEnabled_bActive;                  // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1749[0x3];                                     // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_174A[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_ServerFilterRuleSetting_C> K2Node_DynamicCast_AsBPI_Server_Filter_Rule_Setting_1; // 0x00E0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                   CallFunc_GetVisibility_ReturnValue;                // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_174B[0x6];                                     // 0x00F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetFilterRulePair_Rule;                   // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHDFilterRuleParams                    CallFunc_GetFilterRulePair_RuleParams;             // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0102(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0103(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsActive_bActive;                         // 0x0105(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

