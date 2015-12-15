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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<PunTeams/Team,System.Object>
struct ShimEnumerator_t2400;
// System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>
struct Dictionary_2_t2387;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<PunTeams/Team,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m16445_gshared (ShimEnumerator_t2400 * __this, Dictionary_2_t2387 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m16445(__this, ___host, method) (( void (*) (ShimEnumerator_t2400 *, Dictionary_2_t2387 *, const MethodInfo*))ShimEnumerator__ctor_m16445_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<PunTeams/Team,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m16446_gshared (ShimEnumerator_t2400 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m16446(__this, method) (( bool (*) (ShimEnumerator_t2400 *, const MethodInfo*))ShimEnumerator_MoveNext_m16446_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<PunTeams/Team,System.Object>::get_Entry()
extern "C" DictionaryEntry_t225  ShimEnumerator_get_Entry_m16447_gshared (ShimEnumerator_t2400 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m16447(__this, method) (( DictionaryEntry_t225  (*) (ShimEnumerator_t2400 *, const MethodInfo*))ShimEnumerator_get_Entry_m16447_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<PunTeams/Team,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m16448_gshared (ShimEnumerator_t2400 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m16448(__this, method) (( Object_t * (*) (ShimEnumerator_t2400 *, const MethodInfo*))ShimEnumerator_get_Key_m16448_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<PunTeams/Team,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m16449_gshared (ShimEnumerator_t2400 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m16449(__this, method) (( Object_t * (*) (ShimEnumerator_t2400 *, const MethodInfo*))ShimEnumerator_get_Value_m16449_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<PunTeams/Team,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m16450_gshared (ShimEnumerator_t2400 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m16450(__this, method) (( Object_t * (*) (ShimEnumerator_t2400 *, const MethodInfo*))ShimEnumerator_get_Current_m16450_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<PunTeams/Team,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m16451_gshared (ShimEnumerator_t2400 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m16451(__this, method) (( void (*) (ShimEnumerator_t2400 *, const MethodInfo*))ShimEnumerator_Reset_m16451_gshared)(__this, method)
