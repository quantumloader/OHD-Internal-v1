#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Confirmation

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_Confirmation.WBP_Confirmation_C.ExecuteUbergraph_WBP_Confirmation
// 0x0068 (0x0068 - 0x0000)
struct WBP_Confirmation_C_ExecuteUbergraph_WBP_Confirmation final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C2D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_TitleText;                            // 0x0008(0x0018)(ConstParm)
	class FText                                   K2Node_Event_DescriptionText;                      // 0x0020(0x0018)(ConstParm)
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0038(0x0018)()
	class FText                                   CallFunc_TextToUpper_ReturnValue_1;                // 0x0050(0x0018)()
};

// Function WBP_Confirmation.WBP_Confirmation_C.UpdateDialogText
// 0x0030 (0x0030 - 0x0000)
struct WBP_Confirmation_C_UpdateDialogText final  : public HDConfirmationDialog_UpdateDialogText
{
public:
	class FText                                   Param_TitleText;                                   // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                   DescriptionText;                                   // 0x0018(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

}

