#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OptionMenu_Home

#include "Basic.hpp"

#include "DonkehFrameworkUI_classes.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_OptionMenu_Home.WBP_OptionMenu_Home_C
// 0x0048 (0x0280 - 0x0238)
class UWBP_OptionMenu_Home_C : public UDFBaseMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUniformGridPanel*                      EntitlementBadgeGrid;                              // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           MediaLinkVBox;                                     // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDataTable*                             EntitlementBadgeDefinitionSource;                  // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UDataTable*                             MediaLinkDefinitionSource;                         // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         BadgeMaxRows;                                      // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         BadgeMaxColumns;                                   // 0x0264(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FMargin                                BadgeSlotPadding;                                  // 0x0268(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	float                                         BadgeMinDesiredSlotWidth;                          // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         BadgeMinDesiredSlotHeight;                         // 0x027C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_OptionMenu_Home(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_GetMaxGridSize_MaxSize, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, const struct FFEntitlementBadgeUIDefinition& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsEntitledToBadge_bEntitled, bool CallFunc_IsValid_ReturnValue_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, int32 CallFunc_Array_Length_ReturnValue_1, class FName CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_2, const struct FFCommunityMediaLinkUIDefinition& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1);
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void InsertEntitlementBadge(struct FFEntitlementBadgeUIDefinition& EntitlementUIDef, int32 CallFunc_GetChildrenCount_ReturnValue, class UWBP_EntitlementBadge_C* CallFunc_Create_ReturnValue, int32 CallFunc_GetColumnFromIndex_ReturnValue, int32 CallFunc_GetRowFromIndex_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue);
	void InsertMediaLink(struct FFCommunityMediaLinkUIDefinition& LinkUIDef, class UWBP_CommunityMediaLink_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void GetMaxGridSize(int32* MaxSize, int32 CallFunc_Add_IntInt_ReturnValue);
	void IsEntitledToBadge(TArray<struct FFEntitlementDefinition>& Entitlements, bool* bEntitled, bool CallFunc_CheckEntitlement_bEntitled);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WBP_OptionMenu_Home_C">();
	}
	static class UWBP_OptionMenu_Home_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_OptionMenu_Home_C>();
	}
};

}
