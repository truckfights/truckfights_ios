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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>
struct ShimEnumerator_t2879;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2867;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m23187_gshared (ShimEnumerator_t2879 * __this, Dictionary_2_t2867 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m23187(__this, ___host, method) (( void (*) (ShimEnumerator_t2879 *, Dictionary_2_t2867 *, const MethodInfo*))ShimEnumerator__ctor_m23187_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m23188_gshared (ShimEnumerator_t2879 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m23188(__this, method) (( bool (*) (ShimEnumerator_t2879 *, const MethodInfo*))ShimEnumerator_MoveNext_m23188_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Entry()
extern "C" DictionaryEntry_t225  ShimEnumerator_get_Entry_m23189_gshared (ShimEnumerator_t2879 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m23189(__this, method) (( DictionaryEntry_t225  (*) (ShimEnumerator_t2879 *, const MethodInfo*))ShimEnumerator_get_Entry_m23189_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m23190_gshared (ShimEnumerator_t2879 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m23190(__this, method) (( Object_t * (*) (ShimEnumerator_t2879 *, const MethodInfo*))ShimEnumerator_get_Key_m23190_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m23191_gshared (ShimEnumerator_t2879 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m23191(__this, method) (( Object_t * (*) (ShimEnumerator_t2879 *, const MethodInfo*))ShimEnumerator_get_Value_m23191_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m23192_gshared (ShimEnumerator_t2879 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m23192(__this, method) (( Object_t * (*) (ShimEnumerator_t2879 *, const MethodInfo*))ShimEnumerator_get_Current_m23192_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::Reset()
extern "C" void ShimEnumerator_Reset_m23193_gshared (ShimEnumerator_t2879 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m23193(__this, method) (( void (*) (ShimEnumerator_t2879 *, const MethodInfo*))ShimEnumerator_Reset_m23193_gshared)(__this, method)
