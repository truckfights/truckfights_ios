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

// System.Collections.Generic.Queue`1<System.Int32>
struct Queue_1_t926;
// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3003;
// System.Collections.IEnumerator
struct IEnumerator_t208;
// System.Int32[]
struct Int32U5BU5D_t56;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen_4.h"

// System.Void System.Collections.Generic.Queue`1<System.Int32>::.ctor()
extern "C" void Queue_1__ctor_m5314_gshared (Queue_1_t926 * __this, const MethodInfo* method);
#define Queue_1__ctor_m5314(__this, method) (( void (*) (Queue_1_t926 *, const MethodInfo*))Queue_1__ctor_m5314_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::.ctor(System.Int32)
extern "C" void Queue_1__ctor_m22479_gshared (Queue_1_t926 * __this, int32_t ___count, const MethodInfo* method);
#define Queue_1__ctor_m22479(__this, ___count, method) (( void (*) (Queue_1_t926 *, int32_t, const MethodInfo*))Queue_1__ctor_m22479_gshared)(__this, ___count, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Queue_1_System_Collections_ICollection_CopyTo_m22480_gshared (Queue_1_t926 * __this, Array_t * ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_CopyTo_m22480(__this, ___array, ___idx, method) (( void (*) (Queue_1_t926 *, Array_t *, int32_t, const MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m22480_gshared)(__this, ___array, ___idx, method)
// System.Boolean System.Collections.Generic.Queue`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m22481_gshared (Queue_1_t926 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m22481(__this, method) (( bool (*) (Queue_1_t926 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m22481_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Queue_1_System_Collections_ICollection_get_SyncRoot_m22482_gshared (Queue_1_t926 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m22482(__this, method) (( Object_t * (*) (Queue_1_t926 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m22482_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22483_gshared (Queue_1_t926 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22483(__this, method) (( Object_t* (*) (Queue_1_t926 *, const MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22483_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Queue_1_System_Collections_IEnumerable_GetEnumerator_m22484_gshared (Queue_1_t926 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m22484(__this, method) (( Object_t * (*) (Queue_1_t926 *, const MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m22484_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::Clear()
extern "C" void Queue_1_Clear_m22485_gshared (Queue_1_t926 * __this, const MethodInfo* method);
#define Queue_1_Clear_m22485(__this, method) (( void (*) (Queue_1_t926 *, const MethodInfo*))Queue_1_Clear_m22485_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void Queue_1_CopyTo_m22486_gshared (Queue_1_t926 * __this, Int32U5BU5D_t56* ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_CopyTo_m22486(__this, ___array, ___idx, method) (( void (*) (Queue_1_t926 *, Int32U5BU5D_t56*, int32_t, const MethodInfo*))Queue_1_CopyTo_m22486_gshared)(__this, ___array, ___idx, method)
// T System.Collections.Generic.Queue`1<System.Int32>::Dequeue()
extern "C" int32_t Queue_1_Dequeue_m5328_gshared (Queue_1_t926 * __this, const MethodInfo* method);
#define Queue_1_Dequeue_m5328(__this, method) (( int32_t (*) (Queue_1_t926 *, const MethodInfo*))Queue_1_Dequeue_m5328_gshared)(__this, method)
// T System.Collections.Generic.Queue`1<System.Int32>::Peek()
extern "C" int32_t Queue_1_Peek_m22487_gshared (Queue_1_t926 * __this, const MethodInfo* method);
#define Queue_1_Peek_m22487(__this, method) (( int32_t (*) (Queue_1_t926 *, const MethodInfo*))Queue_1_Peek_m22487_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::Enqueue(T)
extern "C" void Queue_1_Enqueue_m5325_gshared (Queue_1_t926 * __this, int32_t ___item, const MethodInfo* method);
#define Queue_1_Enqueue_m5325(__this, ___item, method) (( void (*) (Queue_1_t926 *, int32_t, const MethodInfo*))Queue_1_Enqueue_m5325_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::SetCapacity(System.Int32)
extern "C" void Queue_1_SetCapacity_m22488_gshared (Queue_1_t926 * __this, int32_t ___new_size, const MethodInfo* method);
#define Queue_1_SetCapacity_m22488(__this, ___new_size, method) (( void (*) (Queue_1_t926 *, int32_t, const MethodInfo*))Queue_1_SetCapacity_m22488_gshared)(__this, ___new_size, method)
// System.Int32 System.Collections.Generic.Queue`1<System.Int32>::get_Count()
extern "C" int32_t Queue_1_get_Count_m22489_gshared (Queue_1_t926 * __this, const MethodInfo* method);
#define Queue_1_get_Count_m22489(__this, method) (( int32_t (*) (Queue_1_t926 *, const MethodInfo*))Queue_1_get_Count_m22489_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t2838  Queue_1_GetEnumerator_m22490_gshared (Queue_1_t926 * __this, const MethodInfo* method);
#define Queue_1_GetEnumerator_m22490(__this, method) (( Enumerator_t2838  (*) (Queue_1_t926 *, const MethodInfo*))Queue_1_GetEnumerator_m22490_gshared)(__this, method)
