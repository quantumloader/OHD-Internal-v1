#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Toggle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Toggle.WBP_Toggle_C
// 0x0060 (0x0290 - 0x0230)
class UWBP_Toggle_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_TextButton_C*                      OffBtn;                                            // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TextButton_C*                      OnBtn;                                             // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bToggleOn;                                         // 0x0248(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_16AA[0x7];                                     // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             ToggleStateChanged;                                // 0x0250(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                   OnText;                                            // 0x0260(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   OffText;                                           // 0x0278(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void ToggleStateChanged__DelegateSignature(bool bToggledOn);
	void ExecuteUbergraph_WBP_Toggle(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__OffBtn_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature();
	void BndEvt__OnBtn_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature();
	void SetToggle(bool bInToggle, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void IsToggledOn(bool* bToggledOn);
	void UpdateDesignerView(bool CallFunc_Not_PreBool_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WBP_Toggle_C">();
	}
	static class UWBP_Toggle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Toggle_C>();
	}
};

}

