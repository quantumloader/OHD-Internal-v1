#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GeometryCollectionTracks

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "MovieScene_structs.hpp"


namespace SDK
{

// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionParams
// 0x0030 (0x0030 - 0x0000)
struct FMovieSceneGeometryCollectionParams
{
public:
	uint8                                         Pad_11AE[0x8];                                     // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoftObjectPath                        GeometryCollectionCache;                           // 0x0008(0x0018)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                           StartFrameOffset;                                  // 0x0020(0x0008)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                           EndFrameOffset;                                    // 0x0024(0x0008)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PlayRate;                                          // 0x0028(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplateParameters
// 0x0008 (0x0038 - 0x0030)
struct FMovieSceneGeometryCollectionSectionTemplateParameters final  : public FMovieSceneGeometryCollectionParams
{
public:
	struct FFrameNumber                           SectionStartTime;                                  // 0x0030(0x0008)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                           SectionEndTime;                                    // 0x0034(0x0008)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplate
// 0x0038 (0x0058 - 0x0020)
struct FMovieSceneGeometryCollectionSectionTemplate final  : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneGeometryCollectionSectionTemplateParameters Params;                                            // 0x0020(0x0038)(NativeAccessSpecifierPublic)
};

}
