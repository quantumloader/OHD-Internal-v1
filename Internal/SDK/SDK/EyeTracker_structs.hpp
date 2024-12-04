#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EyeTracker

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum EyeTracker.EEyeTrackerStatus
// NumValues: 0x0004
enum class EEyeTrackerStatus : uint8
{
	NotConnected                             = 0,
	NotTracking                              = 1,
	Tracking                                 = 2,
	EEyeTrackerStatus_MAX                    = 3,
};

// ScriptStruct EyeTracker.EyeTrackerStereoGazeData
// 0x0040 (0x0040 - 0x0000)
struct FEyeTrackerStereoGazeData final 
{
public:
	struct FVector                                LeftEyeOrigin;                                     // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                LeftEyeDirection;                                  // 0x000C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                RightEyeOrigin;                                    // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                RightEyeDirection;                                 // 0x0024(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                FixationPoint;                                     // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ConfidenceValue;                                   // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct EyeTracker.EyeTrackerGazeData
// 0x0028 (0x0028 - 0x0000)
struct FEyeTrackerGazeData final 
{
public:
	struct FVector                                GazeOrigin;                                        // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                GazeDirection;                                     // 0x000C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                FixationPoint;                                     // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ConfidenceValue;                                   // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

