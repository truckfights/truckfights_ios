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

// System.Array
struct Array_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array_InternalEnumerator_1_gen_64.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m21674_gshared (InternalEnumerator_1_t2775 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m21674(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2775 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m21674_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m21675_gshared (InternalEnumerator_1_t2775 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m21675(__this, method) (( void (*) (InternalEnumerator_1_t2775 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m21675_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m21676_gshared (InternalEnumerator_1_t2775 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m21676(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2775 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m21676_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m21677_gshared (InternalEnumerator_1_t2775 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m21677(__this, method) (( void (*) (InternalEnumerator_1_t2775 *, const MethodInfo*))InternalEnumerator_1_Dispose_m21677_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m21678_gshared (InternalEnumerator_1_t2775 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m21678(__this, method) (( bool (*) (InternalEnumerator_1_t2775 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m21678_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::get_Current()
extern "C" KeyValuePair_2_t2774  InternalEnumerator_1_get_Current_m21679_gshared (InternalEnumerator_1_t2775 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m21679(__this, method) (( KeyValuePair_2_t2774  (*) (InternalEnumerator_1_t2775 *, const MethodInfo*))InternalEnumerator_1_get_Current_m21679_gshared)(__this, method)
