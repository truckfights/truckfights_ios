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

// System.Collections.Generic.Queue`1<UnityEngine.Vector3>
struct Queue_1_t150;
// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Vector3>
struct IEnumerator_1_t3038;
// System.Collections.IEnumerator
struct IEnumerator_t208;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t442;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Queue`1<UnityEngine.Vector3>::.ctor()
extern "C" void Queue_1__ctor_m1166_gshared (Queue_1_t150 * __this, const MethodInfo* method);
#define Queue_1__ctor_m1166(__this, method) (( void (*) (Queue_1_t150 *, const MethodInfo*))Queue_1__ctor_m1166_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Vector3>::.ctor(System.Int32)
extern "C" void Queue_1__ctor_m16052_gshared (Queue_1_t150 * __this, int32_t ___count, const MethodInfo* method);
#define Queue_1__ctor_m16052(__this, ___count, method) (( void (*) (Queue_1_t150 *, int32_t, const MethodInfo*))Queue_1__ctor_m16052_gshared)(__this, ___count, method)
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Vector3>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Queue_1_System_Collections_ICollection_CopyTo_m16053_gshared (Queue_1_t150 * __this, Array_t * ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_CopyTo_m16053(__this, ___array, ___idx, method) (( void (*) (Queue_1_t150 *, Array_t *, int32_t, const MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m16053_gshared)(__this, ___array, ___idx, method)
// System.Boolean System.Collections.Generic.Queue`1<UnityEngine.Vector3>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m16054_gshared (Queue_1_t150 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m16054(__this, method) (( bool (*) (Queue_1_t150 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m16054_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<UnityEngine.Vector3>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Queue_1_System_Collections_ICollection_get_SyncRoot_m16055_gshared (Queue_1_t150 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m16055(__this, method) (( Object_t * (*) (Queue_1_t150 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m16055_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<UnityEngine.Vector3>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16056_gshared (Queue_1_t150 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16056(__this, method) (( Object_t* (*) (Queue_1_t150 *, const MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16056_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<UnityEngine.Vector3>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Queue_1_System_Collections_IEnumerable_GetEnumerator_m16057_gshared (Queue_1_t150 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m16057(__this, method) (( Object_t * (*) (Queue_1_t150 *, const MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m16057_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Vector3>::Clear()
extern "C" void Queue_1_Clear_m16058_gshared (Queue_1_t150 * __this, const MethodInfo* method);
#define Queue_1_Clear_m16058(__this, method) (( void (*) (Queue_1_t150 *, const MethodInfo*))Queue_1_Clear_m16058_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Vector3>::CopyTo(T[],System.Int32)
extern "C" void Queue_1_CopyTo_m16059_gshared (Queue_1_t150 * __this, Vector3U5BU5D_t442* ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_CopyTo_m16059(__this, ___array, ___idx, method) (( void (*) (Queue_1_t150 *, Vector3U5BU5D_t442*, int32_t, const MethodInfo*))Queue_1_CopyTo_m16059_gshared)(__this, ___array, ___idx, method)
// T System.Collections.Generic.Queue`1<UnityEngine.Vector3>::Dequeue()
extern "C" Vector3_t138  Queue_1_Dequeue_m1178_gshared (Queue_1_t150 * __this, const MethodInfo* method);
#define Queue_1_Dequeue_m1178(__this, method) (( Vector3_t138  (*) (Queue_1_t150 *, const MethodInfo*))Queue_1_Dequeue_m1178_gshared)(__this, method)
// T System.Collections.Generic.Queue`1<UnityEngine.Vector3>::Peek()
extern "C" Vector3_t138  Queue_1_Peek_m1167_gshared (Queue_1_t150 * __this, const MethodInfo* method);
#define Queue_1_Peek_m1167(__this, method) (( Vector3_t138  (*) (Queue_1_t150 *, const MethodInfo*))Queue_1_Peek_m1167_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Vector3>::Enqueue(T)
extern "C" void Queue_1_Enqueue_m1177_gshared (Queue_1_t150 * __this, Vector3_t138  ___item, const MethodInfo* method);
#define Queue_1_Enqueue_m1177(__this, ___item, method) (( void (*) (Queue_1_t150 *, Vector3_t138 , const MethodInfo*))Queue_1_Enqueue_m1177_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Vector3>::SetCapacity(System.Int32)
extern "C" void Queue_1_SetCapacity_m16060_gshared (Queue_1_t150 * __this, int32_t ___new_size, const MethodInfo* method);
#define Queue_1_SetCapacity_m16060(__this, ___new_size, method) (( void (*) (Queue_1_t150 *, int32_t, const MethodInfo*))Queue_1_SetCapacity_m16060_gshared)(__this, ___new_size, method)
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.Vector3>::get_Count()
extern "C" int32_t Queue_1_get_Count_m16061_gshared (Queue_1_t150 * __this, const MethodInfo* method);
#define Queue_1_get_Count_m16061(__this, method) (( int32_t (*) (Queue_1_t150 *, const MethodInfo*))Queue_1_get_Count_m16061_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<UnityEngine.Vector3>::GetEnumerator()
extern "C" Enumerator_t2364  Queue_1_GetEnumerator_m16062_gshared (Queue_1_t150 * __this, const MethodInfo* method);
#define Queue_1_GetEnumerator_m16062(__this, method) (( Enumerator_t2364  (*) (Queue_1_t150 *, const MethodInfo*))Queue_1_GetEnumerator_m16062_gshared)(__this, method)
