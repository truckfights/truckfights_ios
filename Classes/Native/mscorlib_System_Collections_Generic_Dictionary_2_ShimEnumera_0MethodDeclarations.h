﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Object>
struct ShimEnumerator_t2185;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t43;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m13456_gshared (ShimEnumerator_t2185 * __this, Dictionary_2_t43 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m13456(__this, ___host, method) (( void (*) (ShimEnumerator_t2185 *, Dictionary_2_t43 *, const MethodInfo*))ShimEnumerator__ctor_m13456_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m13457_gshared (ShimEnumerator_t2185 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m13457(__this, method) (( bool (*) (ShimEnumerator_t2185 *, const MethodInfo*))ShimEnumerator_MoveNext_m13457_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Object>::get_Entry()
extern "C" DictionaryEntry_t225  ShimEnumerator_get_Entry_m13458_gshared (ShimEnumerator_t2185 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m13458(__this, method) (( DictionaryEntry_t225  (*) (ShimEnumerator_t2185 *, const MethodInfo*))ShimEnumerator_get_Entry_m13458_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m13459_gshared (ShimEnumerator_t2185 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m13459(__this, method) (( Object_t * (*) (ShimEnumerator_t2185 *, const MethodInfo*))ShimEnumerator_get_Key_m13459_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m13460_gshared (ShimEnumerator_t2185 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m13460(__this, method) (( Object_t * (*) (ShimEnumerator_t2185 *, const MethodInfo*))ShimEnumerator_get_Value_m13460_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m13461_gshared (ShimEnumerator_t2185 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m13461(__this, method) (( Object_t * (*) (ShimEnumerator_t2185 *, const MethodInfo*))ShimEnumerator_get_Current_m13461_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Byte,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m13462_gshared (ShimEnumerator_t2185 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m13462(__this, method) (( void (*) (ShimEnumerator_t2185 *, const MethodInfo*))ShimEnumerator_Reset_m13462_gshared)(__this, method)
