#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TinkerLoadingScreen

#include "Basic.hpp"

#include "TinkerLoadingScreen_classes.hpp"
#include "TinkerLoadingScreen_parameters.hpp"


namespace SDK
{

// Function TinkerLoadingScreen.LoadingScreenWidgetInterface.SetLevelLoadData
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FLoadScreenLevelData             LevelData                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ILoadingScreenWidgetInterface::SetLevelLoadData(struct FLoadScreenLevelData& LevelData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingScreenWidgetInterface", "SetLevelLoadData");

	Params::LoadingScreenWidgetInterface_SetLevelLoadData Parms{};

	Parms.LevelData = std::move(LevelData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TinkerLoadingScreen.LoadingScreenWidgetInterface.SetLoadingScreenDescription
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FLoadingScreenDescription        Description                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ILoadingScreenWidgetInterface::SetLoadingScreenDescription(struct FLoadingScreenDescription& Description)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingScreenWidgetInterface", "SetLoadingScreenDescription");

	Params::LoadingScreenWidgetInterface_SetLoadingScreenDescription Parms{};

	Parms.Description = std::move(Description);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

