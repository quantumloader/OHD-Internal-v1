#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OptionMenu_Credits

#include "Basic.hpp"

#include "DonkehFrameworkUI_classes.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_OptionMenu_Credits.WBP_OptionMenu_Credits_C
// 0x0030 (0x0268 - 0x0238)
class UWBP_OptionMenu_Credits_C : public UDFBaseMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                             CreditsScrollBox;                                  // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDataTable*                             CreditsEntriesTable;                               // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FMargin                                EntryPadding;                                      // 0x0250(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	float                                         AutoScrollSpeed;                                   // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_OptionMenu_Credits(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, class UWBP_CreditsListEntry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UScrollBoxSlot* K2Node_DynamicCast_AsScroll_Box_Slot, bool K2Node_DynamicCast_bSuccess, const struct FMargin& K2Node_MakeStruct_Margin, bool CallFunc_IsValid_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FFGameCreditsEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FFGameCreditsEntry>& CallFunc_GetCreditEntriesForHeader_CreditEntries, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_GetScrollOffsetOfEnd_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetScrollOffset_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void GetCreditEntriesForHeader(class FName HeaderRowName, TArray<struct FFGameCreditsEntry>* CreditEntries, const TArray<struct FFGameCreditsEntry>& Entries, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FFGameCreditsEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WBP_OptionMenu_Credits_C">();
	}
	static class UWBP_OptionMenu_Credits_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_OptionMenu_Credits_C>();
	}
};

}
