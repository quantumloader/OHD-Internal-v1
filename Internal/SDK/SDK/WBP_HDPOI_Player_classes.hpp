#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HDPOI_Player

#include "Basic.hpp"

#include "DonkehFrameworkUI_classes.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_HDPOI_Player.WBP_HDPOI_Player_C
// 0x0070 (0x0410 - 0x03A0)
class UWBP_HDPOI_Player_C final  : public UDFPOIWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 PlayerIcon;                                        // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SquadNumberText;                                   // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          POIWidgetInitialized;                              // 0x03B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_16D7[0x7];                                     // 0x03B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            SelectedTintColor;                                 // 0x03C0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            DeselectedTintColor;                               // 0x03E8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_WBP_HDPOI_Player(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, struct FSlateBrush& K2Node_Event_NewIconBrush, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_GetRenderTransformAngle_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetIconBrush(struct FSlateBrush& NewIconBrush);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ReceivePOIDeselected();
	void ReceivePOISelected();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WBP_HDPOI_Player_C">();
	}
	static class UWBP_HDPOI_Player_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_HDPOI_Player_C>();
	}
};

}

