#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CaptureStatus_FlagIcon

#include "Basic.hpp"

#include "HDMain_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CaptureStatus_FlagIcon.WBP_CaptureStatus_FlagIcon_C
// 0x04E8 (0x0718 - 0x0230)
class UWBP_CaptureStatus_FlagIcon_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Bg;                                                // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconFrame;                                         // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                            IconFrameNoTeam;                                   // 0x0250(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                            BgNoTeam;                                          // 0x02D8(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                            IconLocked;                                        // 0x0360(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                            IconFlag;                                          // 0x03E8(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                            IconFrameEnemy;                                    // 0x0470(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         IconOpacityCapturable;                             // 0x04F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IconOpacityUncapturable;                           // 0x04FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IconOpacityOffensive;                              // 0x0500(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FC6[0x4];                                      // 0x0504(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            IconFrameFriendly;                                 // 0x0508(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                            BgEnemy;                                           // 0x0590(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                            BgFriendly;                                        // 0x0618(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            ColorFriendly;                                     // 0x06A0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            ColorEnemy;                                        // 0x06C8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            ColorNoTeam;                                       // 0x06F0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_WBP_CaptureStatus_FlagIcon(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_CustomEvent_bActive, enum class EHDTeam K2Node_CustomEvent_Team, bool K2Node_CustomEvent_bLocked, enum class EHDControlPointObjectiveType K2Node_CustomEvent_ObjType, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default);
	void PreConstruct(bool IsDesignTime);
	void OnUpdateIcon(bool bActive, enum class EHDTeam Team, bool bLocked, enum class EHDControlPointObjectiveType ObjType);
	void SetBrushes(struct FSlateBrush& Param_IconFrame, struct FSlateBrush& Param_Bg, struct FSlateBrush& Param_Icon);
	void UpdateBrushesByTeam(bool bLocked, enum class EHDTeam Team, enum class EHDControlPointObjectiveType ObjType, bool bInLocked, const struct FSlateBrush& IconToUse, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, enum class EHDControlPointObjectiveType Temp_byte_Variable, class UTexture2D* K2Node_Select_Default);
	void TintBrushByTeam(struct FSlateBrush& BrushToTint, enum class EHDTeam Team, struct FSlateBrush* NewBrush, const struct FSlateColor& TintColor, enum class EHDTeam Temp_byte_Variable, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateColor& K2Node_Select_Default);
	void SetBrushOpacityByCaptureStatus(struct FSlateBrush& BrushToUpdate, bool bLocked, enum class EHDControlPointObjectiveType ObjType, struct FSlateBrush* NewBrush, float OpacityToUse, bool Temp_bool_Variable, enum class EHDControlPointObjectiveType Temp_byte_Variable, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, float K2Node_Select_Default, float K2Node_Select_Default_1);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WBP_CaptureStatus_FlagIcon_C">();
	}
	static class UWBP_CaptureStatus_FlagIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CaptureStatus_FlagIcon_C>();
	}
};

}
