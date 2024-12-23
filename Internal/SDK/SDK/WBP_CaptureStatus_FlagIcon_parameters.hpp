#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CaptureStatus_FlagIcon

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "HDMain_structs.hpp"


namespace SDK::Params
{

// Function WBP_CaptureStatus_FlagIcon.WBP_CaptureStatus_FlagIcon_C.ExecuteUbergraph_WBP_CaptureStatus_FlagIcon
// 0x000D (0x000D - 0x0000)
struct WBP_CaptureStatus_FlagIcon_C_ExecuteUbergraph_WBP_CaptureStatus_FlagIcon final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                   Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                   Temp_byte_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bActive;                        // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EHDTeam                            K2Node_CustomEvent_Team;                           // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bLocked;                        // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EHDControlPointObjectiveType       K2Node_CustomEvent_ObjType;                        // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                   K2Node_Select_Default;                             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CaptureStatus_FlagIcon.WBP_CaptureStatus_FlagIcon_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_CaptureStatus_FlagIcon_C_PreConstruct final  : public UserWidget_PreConstruct
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CaptureStatus_FlagIcon.WBP_CaptureStatus_FlagIcon_C.OnUpdateIcon
// 0x0004 (0x0004 - 0x0000)
struct WBP_CaptureStatus_FlagIcon_C_OnUpdateIcon final 
{
public:
	bool                                          bActive;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EHDTeam                            Team;                                              // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bLocked;                                           // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EHDControlPointObjectiveType       ObjType;                                           // 0x0003(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CaptureStatus_FlagIcon.WBP_CaptureStatus_FlagIcon_C.SetBrushes
// 0x0198 (0x0198 - 0x0000)
struct WBP_CaptureStatus_FlagIcon_C_SetBrushes final 
{
public:
	struct FSlateBrush                            Param_IconFrame;                                   // 0x0000(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FSlateBrush                            Param_Bg;                                          // 0x0088(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FSlateBrush                            Param_Icon;                                        // 0x0110(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_CaptureStatus_FlagIcon.WBP_CaptureStatus_FlagIcon_C.UpdateBrushesByTeam
// 0x00B8 (0x00B8 - 0x0000)
struct WBP_CaptureStatus_FlagIcon_C_UpdateBrushesByTeam final 
{
public:
	bool                                          bLocked;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EHDTeam                            Team;                                              // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EHDControlPointObjectiveType       ObjType;                                           // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInLocked;                                         // 0x0003(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_FC7[0x4];                                      // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            IconToUse;                                         // 0x0008(0x0088)(Edit, BlueprintVisible)
	class UTexture2D*                             Temp_object_Variable;                              // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_1;                            // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_2;                            // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EHDControlPointObjectiveType       Temp_byte_Variable;                                // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FC8[0x7];                                      // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_Select_Default;                             // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CaptureStatus_FlagIcon.WBP_CaptureStatus_FlagIcon_C.TintBrushByTeam
// 0x01F8 (0x01F8 - 0x0000)
struct WBP_CaptureStatus_FlagIcon_C_TintBrushByTeam final 
{
public:
	struct FSlateBrush                            BrushToTint;                                       // 0x0000(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class EHDTeam                            Team;                                              // 0x0088(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FC9[0x7];                                      // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            NewBrush;                                          // 0x0090(0x0088)(Parm, OutParm)
	struct FSlateColor                            TintColor;                                         // 0x0118(0x0028)(Edit, BlueprintVisible)
	enum class EHDTeam                            Temp_byte_Variable;                                // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FCA[0x7];                                      // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0148(0x0088)()
	struct FSlateColor                            K2Node_Select_Default;                             // 0x01D0(0x0028)()
};

// Function WBP_CaptureStatus_FlagIcon.WBP_CaptureStatus_FlagIcon_C.SetBrushOpacityByCaptureStatus
// 0x01E8 (0x01E8 - 0x0000)
struct WBP_CaptureStatus_FlagIcon_C_SetBrushOpacityByCaptureStatus final 
{
public:
	struct FSlateBrush                            BrushToUpdate;                                     // 0x0000(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          bLocked;                                           // 0x0088(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EHDControlPointObjectiveType       ObjType;                                           // 0x0089(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FCB[0x6];                                      // 0x008A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            NewBrush;                                          // 0x0090(0x0088)(Parm, OutParm)
	float                                         OpacityToUse;                                      // 0x0118(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EHDControlPointObjectiveType       Temp_byte_Variable;                                // 0x011D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FCC[0x2];                                      // 0x011E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0120(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0130(0x0028)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0158(0x0088)()
	float                                         K2Node_Select_Default;                             // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_1;                           // 0x01E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

