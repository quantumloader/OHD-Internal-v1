#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MenuBackground_Movie

#include "Basic.hpp"

#include "WBP_MenuBackground_Movie_classes.hpp"
#include "WBP_MenuBackground_Movie_parameters.hpp"


namespace SDK
{

// Function WBP_MenuBackground_Movie.WBP_MenuBackground_Movie_C.ExecuteUbergraph_WBP_MenuBackground_Movie
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_OpenPlaylist_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_MenuBackground_Movie_C::ExecuteUbergraph_WBP_MenuBackground_Movie(int32 EntryPoint, bool CallFunc_OpenPlaylist_ReturnValue, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuBackground_Movie_C", "ExecuteUbergraph_WBP_MenuBackground_Movie");

	Params::WBP_MenuBackground_Movie_C_ExecuteUbergraph_WBP_MenuBackground_Movie Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_OpenPlaylist_ReturnValue = CallFunc_OpenPlaylist_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuBackground_Movie.WBP_MenuBackground_Movie_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MenuBackground_Movie_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuBackground_Movie_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MenuBackground_Movie.WBP_MenuBackground_Movie_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_MenuBackground_Movie_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuBackground_Movie_C", "PreConstruct");

	Params::WBP_MenuBackground_Movie_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuBackground_Movie.WBP_MenuBackground_Movie_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MenuBackground_Movie_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuBackground_Movie_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

}

