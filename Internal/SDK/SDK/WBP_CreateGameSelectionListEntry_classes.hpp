#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CreateGameSelectionListEntry

#include "Basic.hpp"

#include "FSelectionItemTextStyle_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C
// 0x0868 (0x0A98 - 0x0230)
class UWBP_CreateGameSelectionListEntry_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 ItemBg;                                            // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               ItemBox;                                           // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                              ItemCheckBox;                                      // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ItemSelectionHighlight;                            // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ItemSubText;                                       // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ItemText;                                          // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSelectionStateChanged;                           // 0x0268(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FCheckBoxStyle                         ItemStyle;                                         // 0x0278(0x0580)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FFSelectionItemTextStyle               ItemTextStyle;                                     // 0x07F8(0x0130)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	struct FFSelectionItemTextStyle               ItemSubTextStyle;                                  // 0x0928(0x0130)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         ItemMinWidth;                                      // 0x0A58(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_174E[0x4];                                     // 0x0A5C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Text;                                              // 0x0A60(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   SubText;                                           // 0x0A78(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                         ItemMinHeight;                                     // 0x0A90(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bSelectionToggle;                                  // 0x0A94(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void OnSelectionStateChanged__DelegateSignature(class UWBP_CreateGameSelectionListEntry_C* Item, bool bSelected);
	void ExecuteUbergraph_WBP_CreateGameSelectionListEntry(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool K2Node_Event_IsDesignTime, bool K2Node_ComponentBoundEvent_bIsChecked, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable_3, bool CallFunc_IsChecked_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, bool CallFunc_BooleanAND_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_2, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, enum class ESlateVisibility K2Node_Select_Default_3);
	void BndEvt__ItemCheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void PreConstruct(bool IsDesignTime);
	void SetItemSelectionState(enum class ECheckBoxState InSelectionState, bool Temp_bool_Variable, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, enum class ECheckBoxState CallFunc_GetCheckedState_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1);
	void SetItemIsSelected(bool bSelected, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void GetItemSelectionState(enum class ECheckBoxState* SelectionState, enum class ECheckBoxState CallFunc_GetCheckedState_ReturnValue);
	void IsItemSelected(bool* bSelected, bool CallFunc_IsChecked_ReturnValue);
	void InternalApplyStyleToText(class UTextBlock* Param_Text, struct FFSelectionItemTextStyle& TextStyle, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue);
	void InternalUpdateItemBgTintColor(bool bSelected, bool Temp_bool_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_Select_Default);
	void SetItemStyle(const struct FCheckBoxStyle& InItemStyle);
	void SetItemTextStyle(const struct FFSelectionItemTextStyle& InItemTextStyle);
	void SetItemSubTextStyle(const struct FFSelectionItemTextStyle& InItemSubTextStyle);
	void SetItemImage(class UTexture2D* InItemImg);
	void GetItemStyle(struct FCheckBoxStyle* Param_ItemStyle);
	void GetItemTextStyle(struct FFSelectionItemTextStyle* TextStyle);
	void GetItemSubTextStyle(struct FFSelectionItemTextStyle* TextStyle);
	void SetItemText(class FText InText);
	void SetItemSubText(class FText InText);
	void GetItemText(class FText* Param_Text, class FText CallFunc_GetText_ReturnValue);
	void GetItemSubText(class FText* Param_Text, class FText CallFunc_GetText_ReturnValue);
	void SetItemMinDimensions(int32 InMinWidth, int32 InMinHeight);
	void GetItemMinWidth(int32* MinWidth);
	void GetItemMinHeight(int32* MinHeight);
	void InternalRefreshDimensions(float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1);
	void GetBrushWithImageTexture(struct FSlateBrush& Brush, class UTexture2D* Image, struct FSlateBrush* UpdatedBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WBP_CreateGameSelectionListEntry_C">();
	}
	static class UWBP_CreateGameSelectionListEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CreateGameSelectionListEntry_C>();
	}
};

}

