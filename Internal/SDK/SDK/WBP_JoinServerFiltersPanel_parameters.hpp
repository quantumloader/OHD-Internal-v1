#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_JoinServerFiltersPanel

#include "Basic.hpp"

#include "HDMain_structs.hpp"


namespace SDK::Params
{

// Function WBP_JoinServerFiltersPanel.WBP_JoinServerFiltersPanel_C.OnServerFiltersChanged__DelegateSignature
// 0x0050 (0x0050 - 0x0000)
struct WBP_JoinServerFiltersPanel_C_OnServerFiltersChanged__DelegateSignature final 
{
public:
	TMap<class UClass*, struct FHDFilterRuleParams> ActiveFilters;                                     // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_JoinServerFiltersPanel.WBP_JoinServerFiltersPanel_C.ExecuteUbergraph_WBP_JoinServerFiltersPanel
// 0x0068 (0x0068 - 0x0000)
struct WBP_JoinServerFiltersPanel_C_ExecuteUbergraph_WBP_JoinServerFiltersPanel final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1720[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class UClass*, struct FHDFilterRuleParams> K2Node_CustomEvent_ActiveFilters;                  // 0x0008(0x0050)()
	FDelegateProperty_                            K2Node_CreateDelegate_OutputDelegate;              // 0x0058(0x0010)(ZeroConstructor, NoDestructor)
};

// Function WBP_JoinServerFiltersPanel.WBP_JoinServerFiltersPanel_C.FilterSettingsChanged
// 0x0050 (0x0050 - 0x0000)
struct WBP_JoinServerFiltersPanel_C_FilterSettingsChanged final 
{
public:
	TMap<class UClass*, struct FHDFilterRuleParams> ActiveFilters;                                     // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_JoinServerFiltersPanel.WBP_JoinServerFiltersPanel_C.GetFilterRules
// 0x0169 (0x0169 - 0x0000)
struct WBP_JoinServerFiltersPanel_C_GetFilterRules final 
{
public:
	bool                                          bActiveOnly;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1721[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class UClass*, struct FHDFilterRuleParams> FilterRules;                                       // 0x0008(0x0050)(Parm, OutParm)
	TMap<class UClass*, struct FHDFilterRuleParams> Rules;                                             // 0x0058(0x0050)(Edit, BlueprintVisible)
	int32                                         Temp_int_Variable;                                 // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1722[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_ServerFilterRules_C> K2Node_DynamicCast_AsBPI_Server_Filter_Rules;      // 0x00C8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1723[0x3];                                     // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class UClass*, struct FHDFilterRuleParams> CallFunc_GetFilterRules_FilterRules;               // 0x00E0(0x0050)()
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1724[0x3];                                     // 0x0135(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FHDFilterRuleParams>            CallFunc_Map_Values_Values;                        // 0x0138(0x0010)(ReferenceParm, HasGetValueTypeHash)
	TArray<class UClass*>                         CallFunc_Map_Keys_Keys;                            // 0x0148(0x0010)(ReferenceParm, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1725[0x4];                                     // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_Array_Get_Item;                           // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

