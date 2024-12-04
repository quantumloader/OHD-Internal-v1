#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPFL_HDWeapon

#include "Basic.hpp"

#include "BPFL_HDWeapon_classes.hpp"
#include "BPFL_HDWeapon_parameters.hpp"


namespace SDK
{

// Function BPFL_HDWeapon.BPFL_HDWeapon_C.FireModeToString
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EFireMode                    FireMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           ModeString                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// enum class EFireMode                    Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Temp_string_Variable                                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                           Temp_string_Variable_1                                 (ZeroConstructor, HasGetValueTypeHash)
// class FString                           Temp_string_Variable_2                                 (ZeroConstructor, HasGetValueTypeHash)
// class FString                           K2Node_Select_Default                                  (ZeroConstructor, HasGetValueTypeHash)

void UBPFL_HDWeapon_C::FireModeToString(enum class EFireMode FireMode, class UObject* __WorldContext, class FString* ModeString, enum class EFireMode Temp_byte_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, const class FString& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_HDWeapon_C", "FireModeToString");

	Params::BPFL_HDWeapon_C_FireModeToString Parms{};

	Parms.FireMode = FireMode;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_string_Variable = std::move(Temp_string_Variable);
	Parms.Temp_string_Variable_1 = std::move(Temp_string_Variable_1);
	Parms.Temp_string_Variable_2 = std::move(Temp_string_Variable_2);
	Parms.K2Node_Select_Default = std::move(K2Node_Select_Default);

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (ModeString != nullptr)
		*ModeString = Parms.ModeString;
}


// Function BPFL_HDWeapon.BPFL_HDWeapon_C.FireModeToDisplayText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EFireMode                    FireMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ModeText                                               (Parm, OutParm)
// enum class EFireMode                    Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Temp_text_Variable                                     ()
// class FText                             Temp_text_Variable_1                                   ()
// class FText                             Temp_text_Variable_2                                   ()
// class FText                             K2Node_Select_Default                                  ()

void UBPFL_HDWeapon_C::FireModeToDisplayText(enum class EFireMode FireMode, class UObject* __WorldContext, class FText* ModeText, enum class EFireMode Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_HDWeapon_C", "FireModeToDisplayText");

	Params::BPFL_HDWeapon_C_FireModeToDisplayText Parms{};

	Parms.FireMode = FireMode;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (ModeText != nullptr)
		*ModeText = std::move(Parms.ModeText);
}


// Function BPFL_HDWeapon.BPFL_HDWeapon_C.AimStyleToDisplayText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EHDWeaponAimStyle            AimStyle                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             StyleText                                              (Parm, OutParm)
// enum class EHDWeaponAimStyle            Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Temp_text_Variable                                     ()
// class FText                             Temp_text_Variable_1                                   ()
// class FText                             Temp_text_Variable_2                                   ()
// class FText                             Temp_text_Variable_3                                   ()
// class FText                             Temp_text_Variable_4                                   ()
// class FText                             K2Node_Select_Default                                  ()

void UBPFL_HDWeapon_C::AimStyleToDisplayText(enum class EHDWeaponAimStyle AimStyle, class UObject* __WorldContext, class FText* StyleText, enum class EHDWeaponAimStyle Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_HDWeapon_C", "AimStyleToDisplayText");

	Params::BPFL_HDWeapon_C_AimStyleToDisplayText Parms{};

	Parms.AimStyle = AimStyle;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (StyleText != nullptr)
		*StyleText = std::move(Parms.StyleText);
}

}

