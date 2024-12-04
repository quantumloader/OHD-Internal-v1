#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ImageWriteQueue

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class ImageWriteQueue.ImageWriteBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UImageWriteBlueprintLibrary final  : public UBlueprintFunctionLibrary
{
public:
	static void ExportToDisk(class UTexture* Texture, const class FString& Filename, struct FImageWriteOptions& Options);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ImageWriteBlueprintLibrary">();
	}
	static class UImageWriteBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImageWriteBlueprintLibrary>();
	}
};

}

