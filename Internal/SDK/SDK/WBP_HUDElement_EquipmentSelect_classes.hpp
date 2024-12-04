#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HUDElement_EquipmentSelect

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FEqpSlotData_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_HUDElement_EquipmentSelect.WBP_HUDElement_EquipmentSelect_C
// 0x0028 (0x0258 - 0x0230)
class UWBP_HUDElement_EquipmentSelect_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           SlotVBox;                                          // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         CurrentSlotIndex;                                  // 0x0240(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentSlotNum;                                    // 0x0244(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFEqpSlotData>                  SlotData;                                          // 0x0248(0x0010)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_HUDElement_EquipmentSelect(int32 EntryPoint, class UObject* Temp_object_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetChildAt_ReturnValue, bool K2Node_Event_IsDesignTime, class UWBP_EquipmentSelect_EqBox_C* K2Node_DynamicCast_AsWBP_Equipment_Select_Eq_Box, bool K2Node_DynamicCast_bSuccess_1, TSoftObjectPtr<class UTexture2D> K2Node_CustomEvent_IconToLoad, int32 K2Node_CustomEvent_SlotNum, class AHDBaseWeapon* K2Node_CustomEvent_EqpItem, class UObject* K2Node_CustomEvent_Loaded, bool CallFunc_IsSelectableEquipment_ReturnValue);
	void OnEquipmentListModified();
	void LoadEquipmentAsset(TSoftObjectPtr<class UTexture2D> IconToLoad, int32 SlotNum, class AHDBaseWeapon* EqpItem);
	void PreConstruct(bool IsDesignTime);
	void OnLoaded_B4ECD00040B15A8A41EE1DA4CE775D64(class UObject* Loaded);
	void SelectNextItem(int32 CallFunc_Add_IntInt_ReturnValue);
	void SelectPrevItem(int32 CallFunc_Subtract_IntInt_ReturnValue);
	void SelectItem(int32 NewSlotIndex, bool CallFunc_Less_IntInt_ReturnValue, bool Temp_bool_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UWBP_EquipmentSelect_EqBox_C* K2Node_DynamicCast_AsWBP_Equipment_Select_Eq_Box, bool K2Node_DynamicCast_bSuccess, class UWBP_EquipmentSelect_EqBox_C* K2Node_DynamicCast_AsWBP_Equipment_Select_Eq_Box_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue, int32 K2Node_Select_Default);
	void AddEquipment(struct FHDItemEntry& EqpInfo, class AHDBaseWeapon* EqpItem, bool CallFunc_IsValid_ReturnValue, const struct FFEqpSlotData& K2Node_MakeStruct_FEqpSlotData, int32 CallFunc_Array_Add_ReturnValue);
	void RebuildEquipmentList(const TArray<struct FFEqpSlotData>& SlotDataCopy, int32 MinSlotNum, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UTexture2D* Temp_object_Variable, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool Temp_bool_Variable, int32 CallFunc_GetMinSlotIndex_MinSlotIndex, const struct FFEqpSlotData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsSelectableEquipment_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UTexture2D* K2Node_Select_Default);
	void RemoveEquipmentAtSlotNum(int32 SlotNum, bool* bRemoved, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FFEqpSlotData& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void ClearEquipmentList();
	void CreateAndAddEquipmentWidget(class UTexture2D* Icon, int32 SlotNum, bool bEnabled, class AHDBaseWeapon* EqpItem, class UWBP_EquipmentSelect_EqBox_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin);
	void GetMinSlotIndex(TArray<struct FFEqpSlotData>& SlotDataArray, int32* MinSlotIndex, int32 SlotIndex, int32 MinSlotNum, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FFEqpSlotData& CallFunc_Array_Get_Item, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void GetSelectedItem(struct FFEqpSlotData* OutSlotData, bool* bFoundItem, int32 SlotNum, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, const struct FFEqpSlotData& CallFunc_Array_Get_Item, class UWBP_EquipmentSelect_EqBox_C* K2Node_DynamicCast_AsWBP_Equipment_Select_Eq_Box, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SelectItemBySlotNum(int32 SlotNum, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UWBP_EquipmentSelect_EqBox_C* K2Node_DynamicCast_AsWBP_Equipment_Select_Eq_Box, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WBP_HUDElement_EquipmentSelect_C">();
	}
	static class UWBP_HUDElement_EquipmentSelect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_HUDElement_EquipmentSelect_C>();
	}
};

}

