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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t796;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m13762_gshared (Enumerator_t2217 * __this, Dictionary_2_t796 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m13762(__this, ___dictionary, method) (( void (*) (Enumerator_t2217 *, Dictionary_2_t796 *, const MethodInfo*))Enumerator__ctor_m13762_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m13763_gshared (Enumerator_t2217 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m13763(__this, method) (( Object_t * (*) (Enumerator_t2217 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m13763_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m13764_gshared (Enumerator_t2217 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m13764(__this, method) (( void (*) (Enumerator_t2217 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m13764_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t225  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13765_gshared (Enumerator_t2217 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13765(__this, method) (( DictionaryEntry_t225  (*) (Enumerator_t2217 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13765_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13766_gshared (Enumerator_t2217 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13766(__this, method) (( Object_t * (*) (Enumerator_t2217 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13766_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13767_gshared (Enumerator_t2217 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13767(__this, method) (( Object_t * (*) (Enumerator_t2217 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13767_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m13768_gshared (Enumerator_t2217 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m13768(__this, method) (( bool (*) (Enumerator_t2217 *, const MethodInfo*))Enumerator_MoveNext_m13768_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2213  Enumerator_get_Current_m13769_gshared (Enumerator_t2217 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m13769(__this, method) (( KeyValuePair_2_t2213  (*) (Enumerator_t2217 *, const MethodInfo*))Enumerator_get_Current_m13769_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m13770_gshared (Enumerator_t2217 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m13770(__this, method) (( int32_t (*) (Enumerator_t2217 *, const MethodInfo*))Enumerator_get_CurrentKey_m13770_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m13771_gshared (Enumerator_t2217 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m13771(__this, method) (( Object_t * (*) (Enumerator_t2217 *, const MethodInfo*))Enumerator_get_CurrentValue_m13771_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Reset()
extern "C" void Enumerator_Reset_m13772_gshared (Enumerator_t2217 * __this, const MethodInfo* method);
#define Enumerator_Reset_m13772(__this, method) (( void (*) (Enumerator_t2217 *, const MethodInfo*))Enumerator_Reset_m13772_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m13773_gshared (Enumerator_t2217 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m13773(__this, method) (( void (*) (Enumerator_t2217 *, const MethodInfo*))Enumerator_VerifyState_m13773_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m13774_gshared (Enumerator_t2217 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m13774(__this, method) (( void (*) (Enumerator_t2217 *, const MethodInfo*))Enumerator_VerifyCurrent_m13774_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m13775_gshared (Enumerator_t2217 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m13775(__this, method) (( void (*) (Enumerator_t2217 *, const MethodInfo*))Enumerator_Dispose_m13775_gshared)(__this, method)
