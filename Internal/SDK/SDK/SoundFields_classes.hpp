#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SoundFields

#include "Basic.hpp"

#include "AudioExtensions_classes.hpp"


namespace SDK
{

// Class SoundFields.AmbisonicsEncodingSettings
// 0x0008 (0x0030 - 0x0028)
class UAmbisonicsEncodingSettings final  : public USoundfieldEncodingSettingsBase
{
public:
	int32                                         AmbisonicsOrder;                                   // 0x0028(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AmbisonicsEncodingSettings">();
	}
	static class UAmbisonicsEncodingSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAmbisonicsEncodingSettings>();
	}
};

}

