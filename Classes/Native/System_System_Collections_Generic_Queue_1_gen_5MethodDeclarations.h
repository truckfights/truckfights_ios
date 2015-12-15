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

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t2820;
// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2609;
// System.Collections.IEnumerator
struct IEnumerator_t208;
// System.Object[]
struct ObjectU5BU5D_t111;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen_0.h"

// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
extern "C" void Queue_1__ctor_m22159_gshared (Queue_1_t2820 * __this, const MethodInfo* method);
#define Queue_1__ctor_m22159(__this, method) (( void (*) (Queue_1_t2820 *, const MethodInfo*))Queue_1__ctor_m22159_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor(System.Int32)
extern "C" void Queue_1__ctor_m22160_gshared (Queue_1_t2820 * __this, int32_t ___count, const MethodInfo* method);
#define Queue_1__ctor_m22160(__this, ___count, method) (( void (*) (Queue_1_t2820 *, int32_t, const MethodInfo*))Queue_1__ctor_m22160_gshared)(__this, ___count, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Queue_1_System_Collections_ICollection_CopyTo_m22162_gshared (Queue_1_t2820 * __this, Array_t * ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_CopyTo_m22162(__this, ___array, ___idx, method) (( void (*) (Queue_1_t2820 *, Array_t *, int32_t, const MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m22162_gshared)(__this, ___array, ___idx, method)
// System.Boolean System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m22164_gshared (Queue_1_t2820 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m22164(__this, method) (( bool (*) (Queue_1_t2820 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m22164_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Queue_1_System_Collections_ICollection_get_SyncRoot_m22166_gshared (Queue_1_t2820 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m22166(__this, method) (( Object_t * (*) (Queue_1_t2820 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m22166_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22168_gshared (Queue_1_t2820 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22168(__this, method) (( Object_t* (*) (Queue_1_t2820 *, const MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22168_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Queue_1_System_Collections_IEnumerable_GetEnumerator_m22170_gshared (Queue_1_t2820 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m22170(__this, method) (( Object_t * (*) (Queue_1_t2820 *, const MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m22170_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::Clear()
extern "C" void Queue_1_Clear_m22171_gshared (Queue_1_t2820 * __this, const MethodInfo* method);
#define Queue_1_Clear_m22171(__this, method) (( void (*) (Queue_1_t2820 *, const MethodInfo*))Queue_1_Clear_m22171_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Queue_1_CopyTo_m22173_gshared (Queue_1_t2820 * __this, ObjectU5BU5D_t111* ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_CopyTo_m22173(__this, ___array, ___idx, method) (( void (*) (Queue_1_t2820 *, ObjectU5BU5D_t111*, int32_t, const MethodInfo*))Queue_1_CopyTo_m22173_gshared)(__this, ___array, ___idx, method)
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
extern "C" Object_t * Queue_1_Dequeue_m22174_gshared (Queue_1_t2820 * __this, const MethodInfo* method);
#define Queue_1_Dequeue_m22174(__this, method) (( Object_t * (*) (Queue_1_t2820 *, const MethodInfo*))Queue_1_Dequeue_m22174_gshared)(__this, method)
// T System.Collections.Generic.Queue`1<System.Object>::Peek()
extern "C" Object_t * Queue_1_Peek_m22175_gshared (Queue_1_t2820 * __this, const MethodInfo* method);
#define Queue_1_Peek_m22175(__this, method) (( Object_t * (*) (Queue_1_t2820 *, const MethodInfo*))Queue_1_Peek_m22175_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
extern "C" void Queue_1_Enqueue_m22176_gshared (Queue_1_t2820 * __this, Object_t * ___item, const MethodInfo* method);
#define Queue_1_Enqueue_m22176(__this, ___item, method) (( void (*) (Queue_1_t2820 *, Object_t *, const MethodInfo*))Queue_1_Enqueue_m22176_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::SetCapacity(System.Int32)
extern "C" void Queue_1_SetCapacity_m22178_gshared (Queue_1_t2820 * __this, int32_t ___new_size, const MethodInfo* method);
#define Queue_1_SetCapacity_m22178(__this, ___new_size, method) (( void (*) (Queue_1_t2820 *, int32_t, const MethodInfo*))Queue_1_SetCapacity_m22178_gshared)(__this, ___new_size, method)
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
extern "C" int32_t Queue_1_get_Count_m22180_gshared (Queue_1_t2820 * __this, const MethodInfo* method);
#define Queue_1_get_Count_m22180(__this, method) (( int32_t (*) (Queue_1_t2820 *, const MethodInfo*))Queue_1_get_Count_m22180_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2821  Queue_1_GetEnumerator_m22182_gshared (Queue_1_t2820 * __this, const MethodInfo* method);
#define Queue_1_GetEnumerator_m22182(__this, method) (( Enumerator_t2821  (*) (Queue_1_t2820 *, const MethodInfo*))Queue_1_GetEnumerator_m22182_gshared)(__this, method)
