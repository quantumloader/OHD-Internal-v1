#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DlgBox_Quit

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_DlgBox_Quit.WBP_DlgBox_Quit_C.ExecuteUbergraph_WBP_DlgBox_Quit
// 0x0028 (0x0028 - 0x0000)
struct WBP_DlgBox_Quit_C_ExecuteUbergraph_WBP_DlgBox_Quit final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                            K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_16B2[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_DialogBox_Button_C*                K2Node_ComponentBoundEvent_ClickedBtn_1;           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_DialogBox_Button_C*                K2Node_ComponentBoundEvent_ClickedBtn;             // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_DlgBox_Quit.WBP_DlgBox_Quit_C.BndEvt__NoBtn_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_DlgBox_Quit_C_BndEvt__NoBtn_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature final 
{
public:
	class UWBP_DialogBox_Button_C*                ClickedBtn;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_DlgBox_Quit.WBP_DlgBox_Quit_C.BndEvt__YesBtn_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_DlgBox_Quit_C_BndEvt__YesBtn_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature final 
{
public:
	class UWBP_DialogBox_Button_C*                ClickedBtn;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_DlgBox_Quit.WBP_DlgBox_Quit_C.OnMouseButtonDown
// 0x0218 (0x0218 - 0x0000)
struct WBP_DlgBox_Quit_C_OnMouseButtonDown final  : public UserWidget_OnMouseButtonDown
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0160(0x00B8)()
};

}

