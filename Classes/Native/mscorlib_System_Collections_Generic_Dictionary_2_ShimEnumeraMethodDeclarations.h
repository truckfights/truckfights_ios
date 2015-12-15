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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t2169;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t897;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m13270_gshared (ShimEnumerator_t2169 * __this, Dictionary_2_t897 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m13270(__this, ___host, method) (( void (*) (ShimEnumerator_t2169 *, Dictionary_2_t897 *, const MethodInfo*))ShimEnumerator__ctor_m13270_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m13271_gshared (ShimEnumerator_t2169 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m13271(__this, method) (( bool (*) (ShimEnumerator_t2169 *, const MethodInfo*))ShimEnumerator_MoveNext_m13271_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t225  ShimEnumerator_get_Entry_m13272_gshared (ShimEnumerator_t2169 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m13272(__this, method) (( DictionaryEntry_t225  (*) (ShimEnumerator_t2169 *, const MethodInfo*))ShimEnumerator_get_Entry_m13272_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m13273_gshared (ShimEnumerator_t2169 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m13273(__this, method) (( Object_t * (*) (ShimEnumerator_t2169 *, const MethodInfo*))ShimEnumerator_get_Key_m13273_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m13274_gshared (ShimEnumerator_t2169 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m13274(__this, method) (( Object_t * (*) (ShimEnumerator_t2169 *, const MethodInfo*))ShimEnumerator_get_Value_m13274_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m13275_gshared (ShimEnumerator_t2169 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m13275(__this, method) (( Object_t * (*) (ShimEnumerator_t2169 *, const MethodInfo*))ShimEnumerator_get_Current_m13275_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m13276_gshared (ShimEnumerator_t2169 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m13276(__this, method) (( void (*) (ShimEnumerator_t2169 *, const MethodInfo*))ShimEnumerator_Reset_m13276_gshared)(__this, method)
