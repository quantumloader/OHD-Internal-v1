#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DialogBox_Button

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_DialogBox_Button.WBP_DialogBox_Button_C
// 0x0110 (0x0340 - 0x0230)
class UWBP_DialogBox_Button_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                DlgBtn;                                            // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DlgText;                                           // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   BtnText;                                           // 0x0248(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_             ButtonClicked;                                     // 0x0260(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bActive;                                           // 0x0270(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_16A6[0x7];                                     // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            TextColor;                                         // 0x0278(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            TextColorActive;                                   // 0x02A0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            BtnTint;                                           // 0x02C8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            TextColorPressed;                                  // 0x02F0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            TextColorHovered;                                  // 0x0318(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ButtonClicked__DelegateSignature(class UWBP_DialogBox_Button_C* ClickedBtn);
	void ExecuteUbergraph_WBP_DialogBox_Button(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class FText CallFunc_TextToUpper_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__NavBarBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetActive(bool bNewActive);
	void UpdateAppearance(const struct FSlateColor& NewTint, bool Temp_bool_Variable, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_3, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle, const struct FSlateColor& K2Node_Select_Default);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WBP_DialogBox_Button_C">();
	}
	static class UWBP_DialogBox_Button_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_DialogBox_Button_C>();
	}
};

}

