#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HUD

#include "Basic.hpp"

#include "HDMain_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_HUD.WBP_HUD_C
// 0x0050 (0x0288 - 0x0238)
class UWBP_HUD_C final  : public UHDUIUWHUD
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_CaptureStatus_C*                   CaptureStatus;                                     // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HUDElement_Compass_C*              Compass;                                           // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HUDElement_EquipmentSelect_C*      EquipmentSelect;                                   // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_NotificationTray_C*                NotificationTray;                                  // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerStatus_C*                    PlayerStatus;                                      // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HUDElement_TextChat_C*             TextChat;                                          // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HUDElement_VOIPIndicator_C*        VOIPStatus;                                        // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_WeaponStatus_C*                    WeaponStatus;                                      // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bShowCompass;                                      // 0x0280(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bShowPlayerStatus;                                 // 0x0281(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bShowWeaponStatus;                                 // 0x0282(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bShowCaptureStatus;                                // 0x0283(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bShowEquipmentSelect;                              // 0x0284(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_WBP_HUD(int32 EntryPoint);
	void Construct();
	void ToggleEquipmentSelect(bool bVisible);
	void ToggleWeaponStatus(bool bVisible);
	void SetHUDElementVisibility(class UWidget* Widget, bool bShown, bool Temp_bool_Variable, enum class ESlateVisibility CallFunc_GetVisibilityDefault_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility K2Node_Select_Default);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WBP_HUD_C">();
	}
	static class UWBP_HUD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_HUD_C>();
	}
};

}

