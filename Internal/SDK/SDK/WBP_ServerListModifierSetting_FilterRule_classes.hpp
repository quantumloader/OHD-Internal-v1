#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ServerListModifierSetting_FilterRule

#include "Basic.hpp"

#include "HDMain_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ServerListModifierSetting_FilterRule.WBP_ServerListModifierSetting_FilterRule_C
// 0x0048 (0x0278 - 0x0230)
class UWBP_ServerListModifierSetting_FilterRule_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_ModifierSetting_ComboBox_C*        FilterSetting;                                     // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x0240(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FHDFilterRuleParams                    RuleParams;                                        // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	class UClass*                                 Rule;                                              // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnDropdownSettingChanged;                          // 0x0268(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnDropdownSettingChanged__DelegateSignature(class UClass* Param_Rule, const struct FHDFilterRuleParams& Param_RuleParams);
	void ExecuteUbergraph_WBP_ServerListModifierSetting_FilterRule(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const class FString& K2Node_ComponentBoundEvent_SelectedItem, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 CallFunc_GetSelectedIndex_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, const struct FHDFilterRuleParams& K2Node_MakeStruct_HDFilterRuleParams);
	void BndEvt__FilterSetting_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType);
	void PreConstruct(bool IsDesignTime);
	void SetRuleParams(const struct FHDFilterRuleParams& NewParams, int32 CallFunc_Conv_ByteToInt_ReturnValue);
	void GetRuleParams(struct FHDFilterRuleParams* Params);

	void GetFilterRulePair(class UClass** Param_Rule, struct FHDFilterRuleParams* Param_RuleParams) const;
	void IsFilterEnabled(bool* bActive, bool CallFunc_GetIsEnabled_ReturnValue) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WBP_ServerListModifierSetting_FilterRule_C">();
	}
	static class UWBP_ServerListModifierSetting_FilterRule_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ServerListModifierSetting_FilterRule_C>();
	}
};

}

