#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EyeTracker

#include "Basic.hpp"

#include "EyeTracker_structs.hpp"


namespace SDK::Params
{

// Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData
// 0x002C (0x002C - 0x0000)
struct EyeTrackerFunctionLibrary_GetGazeData final 
{
public:
	struct FEyeTrackerGazeData                    OutGazeData;                                       // 0x0000(0x0028)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_143D[0x3];                                     // 0x0029(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData
// 0x0044 (0x0044 - 0x0000)
struct EyeTrackerFunctionLibrary_GetStereoGazeData final 
{
public:
	struct FEyeTrackerStereoGazeData              OutGazeData;                                       // 0x0000(0x0040)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0040(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_143E[0x3];                                     // 0x0041(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected
// 0x0001 (0x0001 - 0x0000)
struct EyeTrackerFunctionLibrary_IsEyeTrackerConnected final 
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable
// 0x0001 (0x0001 - 0x0000)
struct EyeTrackerFunctionLibrary_IsStereoGazeDataAvailable final 
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer
// 0x0008 (0x0008 - 0x0000)
struct EyeTrackerFunctionLibrary_SetEyeTrackedPlayer final 
{
public:
	class APlayerController*                      PlayerController;                                  // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

