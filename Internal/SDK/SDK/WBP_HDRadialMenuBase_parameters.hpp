#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HDRadialMenuBase

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_HDRadialMenuBase.WBP_HDRadialMenuBase_C.SubmenuCommit__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_HDRadialMenuBase_C_SubmenuCommit__DelegateSignature final 
{
public:
	class FName                                   Category;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   SubItem;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_HDRadialMenuBase.WBP_HDRadialMenuBase_C.ExecuteUbergraph_WBP_HDRadialMenuBase
// 0x0004 (0x0004 - 0x0000)
struct WBP_HDRadialMenuBase_C_ExecuteUbergraph_WBP_HDRadialMenuBase final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_HDRadialMenuBase.WBP_HDRadialMenuBase_C.OnMouseButtonDown
// 0x0218 (0x0218 - 0x0000)
struct WBP_HDRadialMenuBase_C_OnMouseButtonDown final  : public UserWidget_OnMouseButtonDown
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0160(0x00B8)()
};

// Function WBP_HDRadialMenuBase.WBP_HDRadialMenuBase_C.OnKeyDown
// 0x02B8 (0x02B8 - 0x0000)
struct WBP_HDRadialMenuBase_C_OnKeyDown final  : public UserWidget_OnKeyDown
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                              InKeyEvent;                                        // 0x0038(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0070(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0128(0x00B8)()
	struct FKey                                   CallFunc_GetKey_ReturnValue;                       // 0x01E0(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Contains_ReturnValue_1;             // 0x01F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1662[0x6];                                     // 0x01FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0200(0x00B8)()
};

// Function WBP_HDRadialMenuBase.WBP_HDRadialMenuBase_C.OnMouseButtonDoubleClick
// 0x0218 (0x0218 - 0x0000)
struct WBP_HDRadialMenuBase_C_OnMouseButtonDoubleClick final  : public UserWidget_OnMouseButtonDoubleClick
{
public:
	struct FGeometry                              InMyGeometry;                                      // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          InMouseEvent;                                      // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0160(0x00B8)()
};

}

