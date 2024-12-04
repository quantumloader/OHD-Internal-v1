#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tinkerbox

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum Tinkerbox.EMinimapCaptureResolution
// NumValues: 0x0004
enum class EMinimapCaptureResolution : uint16
{
	Size1024                                 = 1024,
	Size2048                                 = 2048,
	Size4096                                 = 4096,
	EMinimapCaptureResolution_MAX            = 4097,
};

// ScriptStruct Tinkerbox.MinimapGenerationSettings
// 0x0028 (0x0028 - 0x0000)
struct FMinimapGenerationSettings final 
{
public:
	class AActor*                                 BoundaryMarkerA;                                   // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 BoundaryMarkerB;                                   // 0x0008(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                BoundaryMidPointLoc;                               // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMinimapCaptureResolution          CaptureResolution;                                 // 0x001C(0x0002)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_F9B[0x2];                                      // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         PlayableBoundaryLength;                            // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
