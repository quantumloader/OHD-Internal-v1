#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioExtensions

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class AudioExtensions.SoundfieldEffectSettingsBase
// 0x0000 (0x0028 - 0x0028)
class USoundfieldEffectSettingsBase final  : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundfieldEffectSettingsBase">();
	}
	static class USoundfieldEffectSettingsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundfieldEffectSettingsBase>();
	}
};

// Class AudioExtensions.SoundfieldEncodingSettingsBase
// 0x0000 (0x0028 - 0x0028)
class USoundfieldEncodingSettingsBase : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundfieldEncodingSettingsBase">();
	}
	static class USoundfieldEncodingSettingsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundfieldEncodingSettingsBase>();
	}
};

// Class AudioExtensions.AudioEndpointSettingsBase
// 0x0000 (0x0028 - 0x0028)
class UAudioEndpointSettingsBase final  : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioEndpointSettingsBase">();
	}
	static class UAudioEndpointSettingsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioEndpointSettingsBase>();
	}
};

// Class AudioExtensions.SpatializationPluginSourceSettingsBase
// 0x0000 (0x0028 - 0x0028)
class USpatializationPluginSourceSettingsBase final  : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpatializationPluginSourceSettingsBase">();
	}
	static class USpatializationPluginSourceSettingsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpatializationPluginSourceSettingsBase>();
	}
};

// Class AudioExtensions.OcclusionPluginSourceSettingsBase
// 0x0000 (0x0028 - 0x0028)
class UOcclusionPluginSourceSettingsBase final  : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OcclusionPluginSourceSettingsBase">();
	}
	static class UOcclusionPluginSourceSettingsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOcclusionPluginSourceSettingsBase>();
	}
};

// Class AudioExtensions.SoundModulationPluginSourceSettingsBase
// 0x0000 (0x0028 - 0x0028)
class USoundModulationPluginSourceSettingsBase final  : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundModulationPluginSourceSettingsBase">();
	}
	static class USoundModulationPluginSourceSettingsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundModulationPluginSourceSettingsBase>();
	}
};

// Class AudioExtensions.ReverbPluginSourceSettingsBase
// 0x0000 (0x0028 - 0x0028)
class UReverbPluginSourceSettingsBase final  : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReverbPluginSourceSettingsBase">();
	}
	static class UReverbPluginSourceSettingsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReverbPluginSourceSettingsBase>();
	}
};

// Class AudioExtensions.SoundfieldEndpointSettingsBase
// 0x0000 (0x0028 - 0x0028)
class USoundfieldEndpointSettingsBase final  : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundfieldEndpointSettingsBase">();
	}
	static class USoundfieldEndpointSettingsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundfieldEndpointSettingsBase>();
	}
};

// Class AudioExtensions.SoundfieldEffectBase
// 0x0008 (0x0030 - 0x0028)
class USoundfieldEffectBase final  : public UObject
{
public:
	class USoundfieldEffectSettingsBase*          Settings;                                          // 0x0028(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundfieldEffectBase">();
	}
	static class USoundfieldEffectBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundfieldEffectBase>();
	}
};

}

