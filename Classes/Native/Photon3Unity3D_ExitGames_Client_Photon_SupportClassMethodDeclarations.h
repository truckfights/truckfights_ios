#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Byte[]
struct ByteU5BU5D_t21;
// System.Collections.Generic.List`1<System.Reflection.MethodInfo>
struct List_1_t241;
// System.Type
struct Type_t;
// System.Func`1<System.Boolean>
struct Func_1_t254;
// System.Exception
struct Exception_t118;
// System.IO.TextWriter
struct TextWriter_t967;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t204;

#include "codegen/il2cpp-codegen.h"

// System.UInt32 ExitGames.Client.Photon.SupportClass::CalculateCrc(System.Byte[],System.Int32)
extern "C" uint32_t SupportClass_CalculateCrc_m5185 (Object_t * __this /* static, unused */, ByteU5BU5D_t21* ___buffer, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Reflection.MethodInfo> ExitGames.Client.Photon.SupportClass::GetMethods(System.Type,System.Type)
extern "C" List_1_t241 * SupportClass_GetMethods_m991 (Object_t * __this /* static, unused */, Type_t * ___type, Type_t * ___attribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.SupportClass::GetTickCount()
extern "C" int32_t SupportClass_GetTickCount_m5186 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SupportClass::CallInBackground(System.Func`1<System.Boolean>)
extern "C" void SupportClass_CallInBackground_m1039 (Object_t * __this /* static, unused */, Func_1_t254 * ___myThread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SupportClass::CallInBackground(System.Func`1<System.Boolean>,System.Int32)
extern "C" void SupportClass_CallInBackground_m5187 (Object_t * __this /* static, unused */, Func_1_t254 * ___myThread, int32_t ___millisecondsInterval, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SupportClass::WriteStackTrace(System.Exception,System.IO.TextWriter)
extern "C" void SupportClass_WriteStackTrace_m5188 (Object_t * __this /* static, unused */, Exception_t118 * ___throwable, TextWriter_t967 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SupportClass::WriteStackTrace(System.Exception)
extern "C" void SupportClass_WriteStackTrace_m5189 (Object_t * __this /* static, unused */, Exception_t118 * ___throwable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.SupportClass::DictionaryToString(System.Collections.IDictionary)
extern "C" String_t* SupportClass_DictionaryToString_m989 (Object_t * __this /* static, unused */, Object_t * ___dictionary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.SupportClass::DictionaryToString(System.Collections.IDictionary,System.Boolean)
extern "C" String_t* SupportClass_DictionaryToString_m924 (Object_t * __this /* static, unused */, Object_t * ___dictionary, bool ___includeTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SupportClass::.cctor()
extern "C" void SupportClass__cctor_m5190 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.SupportClass::<.cctor>b__3()
extern "C" int32_t SupportClass_U3C_cctorU3Eb__3_m5191 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
