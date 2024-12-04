#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CommunityMediaLink

#include "Basic.hpp"

#include "FCommunityMediaLinkUIDefinition_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CommunityMediaLink.WBP_CommunityMediaLink_C
// 0x00E0 (0x0310 - 0x0230)
class UWBP_CommunityMediaLink_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                LinkBtn;                                           // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LinkIcon;                                          // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LinkText;                                          // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFCommunityMediaLinkUIDefinition       LinkUIDefinition;                                  // 0x0250(0x00C0)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_CommunityMediaLink(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__LinkBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WBP_CommunityMediaLink_C">();
	}
	static class UWBP_CommunityMediaLink_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CommunityMediaLink_C>();
	}
};

}
