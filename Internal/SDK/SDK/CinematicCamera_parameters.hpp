#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CinematicCamera

#include "Basic.hpp"

#include "CinematicCamera_structs.hpp"


namespace SDK::Params
{

// Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent
// 0x0008 (0x0008 - 0x0000)
struct CameraRig_Rail_GetRailSplineComponent final 
{
public:
	class USplineComponent*                       ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CinematicCamera.CineCameraActor.GetCineCameraComponent
// 0x0008 (0x0008 - 0x0000)
struct CineCameraActor_GetCineCameraComponent final 
{
public:
	class UCineCameraComponent*                   ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy
// 0x0010 (0x0010 - 0x0000)
struct CineCameraComponent_GetLensPresetsCopy final 
{
public:
	TArray<struct FNamedLensPreset>               ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength
// 0x0004 (0x0004 - 0x0000)
struct CineCameraComponent_SetCurrentFocalLength final 
{
public:
	float                                         InFocalLength;                                     // 0x0000(0x0004)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
// 0x0010 (0x0010 - 0x0000)
struct CineCameraComponent_SetFilmbackPresetByName final 
{
public:
	class FString                                 InPresetName;                                      // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CinematicCamera.CineCameraComponent.SetLensPresetByName
// 0x0010 (0x0010 - 0x0000)
struct CineCameraComponent_SetLensPresetByName final 
{
public:
	class FString                                 InPresetName;                                      // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
// 0x0010 (0x0010 - 0x0000)
struct CineCameraComponent_GetDefaultFilmbackPresetName final 
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName
// 0x0010 (0x0010 - 0x0000)
struct CineCameraComponent_GetFilmbackPresetName final 
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
// 0x0004 (0x0004 - 0x0000)
struct CineCameraComponent_GetHorizontalFieldOfView final 
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CinematicCamera.CineCameraComponent.GetLensPresetName
// 0x0010 (0x0010 - 0x0000)
struct CineCameraComponent_GetLensPresetName final 
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
// 0x0004 (0x0004 - 0x0000)
struct CineCameraComponent_GetVerticalFieldOfView final 
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

