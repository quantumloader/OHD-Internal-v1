#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TinkerUI

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function TinkerUI.TBButton.SetIsFocusable
// 0x0001 (0x0001 - 0x0000)
struct TBButton_SetIsFocusable final 
{
public:
	bool                                          bInIsFocusable;                                    // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TinkerUI.TBButton.SetIsInteractionEnabled
// 0x0001 (0x0001 - 0x0000)
struct TBButton_SetIsInteractionEnabled final 
{
public:
	bool                                          bInIsInteractionEnabled;                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TinkerUI.TBButton.GetIsFocusable
// 0x0001 (0x0001 - 0x0000)
struct TBButton_GetIsFocusable final 
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TinkerUI.TBButton.IsInteractionEnabled
// 0x0001 (0x0001 - 0x0000)
struct TBButton_IsInteractionEnabled final 
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TinkerUI.TBSlider.SetMouseUsesStep
// 0x0001 (0x0001 - 0x0000)
struct TBSlider_SetMouseUsesStep final 
{
public:
	bool                                          bInValue;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TinkerUI.TBSlider.SetSliderFgBarColor
// 0x0010 (0x0010 - 0x0000)
struct TBSlider_SetSliderFgBarColor final 
{
public:
	struct FLinearColor                           InValue;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

