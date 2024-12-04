#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_EntitlementBadge

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FEntitlementBadgeUIDefinition_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_EntitlementBadge.WBP_EntitlementBadge_C
// 0x00A8 (0x02D8 - 0x0230)
class UWBP_EntitlementBadge_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BadgeIcon;                                         // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFEntitlementBadgeUIDefinition         BadgeUIDefinition;                                 // 0x0240(0x0098)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_EntitlementBadge(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WBP_EntitlementBadge_C">();
	}
	static class UWBP_EntitlementBadge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_EntitlementBadge_C>();
	}
};

}
