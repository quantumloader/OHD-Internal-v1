#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Checkbox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Checkbox.WBP_Checkbox_C
// 0x0030 (0x0260 - 0x0230)
class UWBP_Checkbox_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCheckBox*                              CBox;                                              // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             CheckStateChanged;                                 // 0x0240(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             CheckStateChangedBool;                             // 0x0250(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void CheckStateChanged__DelegateSignature(enum class ECheckBoxState CheckedState);
	void CheckStateChangedBool__DelegateSignature(bool bChecked);
	void ExecuteUbergraph_WBP_Checkbox(int32 EntryPoint, enum class ECheckBoxState CallFunc_GetCheckedState_ReturnValue, bool K2Node_ComponentBoundEvent_bIsChecked);
	void BndEvt__CBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void GetCheckedState(enum class ECheckBoxState* CheckedState, enum class ECheckBoxState CallFunc_GetCheckedState_ReturnValue);
	void IsChecked(bool* bChecked, bool CallFunc_IsChecked_ReturnValue);
	void SetIsChecked(bool bChecked);
	void SetCheckedState(enum class ECheckBoxState NewCheckedState);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WBP_Checkbox_C">();
	}
	static class UWBP_Checkbox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Checkbox_C>();
	}
};

}

