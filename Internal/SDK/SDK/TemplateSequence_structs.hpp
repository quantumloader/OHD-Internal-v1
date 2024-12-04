#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TemplateSequence

#include "Basic.hpp"

#include "MovieScene_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// ScriptStruct TemplateSequence.TemplateSequenceBindingOverrideData
// 0x0010 (0x0010 - 0x0000)
struct FTemplateSequenceBindingOverrideData final 
{
public:
	TWeakObjectPtr<class UObject>                 Object;                                            // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverridesDefault;                                 // 0x0008(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct TemplateSequence.TemplateSequenceInstanceData
// 0x0018 (0x0020 - 0x0008)
struct FTemplateSequenceInstanceData final  : public FMovieSceneSequenceInstanceData
{
public:
	struct FMovieSceneEvaluationOperand           Operand;                                           // 0x0008(0x0018)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct TemplateSequence.TemplateSequenceSectionTemplate
// 0x0028 (0x0048 - 0x0020)
struct FTemplateSequenceSectionTemplate final  : public FMovieSceneEvalTemplate
{
public:
	struct FFrameNumber                           SectionStartTime;                                  // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                  OuterBindingId;                                    // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMovieSceneEvaluationOperand           InnerOperand;                                      // 0x0034(0x0018)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

}

