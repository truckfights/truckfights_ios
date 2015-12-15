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

// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t69;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t862;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3003;
// System.Int32[]
struct Int32U5BU5D_t56;
// System.Collections.IEnumerator
struct IEnumerator_t208;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2211;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator__0.h"

// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor()
extern "C" void HashSet_1__ctor_m941_gshared (HashSet_1_t69 * __this, const MethodInfo* method);
#define HashSet_1__ctor_m941(__this, method) (( void (*) (HashSet_1_t69 *, const MethodInfo*))HashSet_1__ctor_m941_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1__ctor_m14158_gshared (HashSet_1_t69 * __this, SerializationInfo_t862 * ___info, StreamingContext_t863  ___context, const MethodInfo* method);
#define HashSet_1__ctor_m14158(__this, ___info, ___context, method) (( void (*) (HashSet_1_t69 *, SerializationInfo_t862 *, StreamingContext_t863 , const MethodInfo*))HashSet_1__ctor_m14158_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14159_gshared (HashSet_1_t69 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14159(__this, method) (( Object_t* (*) (HashSet_1_t69 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14159_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14160_gshared (HashSet_1_t69 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14160(__this, method) (( bool (*) (HashSet_1_t69 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14160_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m14161_gshared (HashSet_1_t69 * __this, Int32U5BU5D_t56* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m14161(__this, ___array, ___index, method) (( void (*) (HashSet_1_t69 *, Int32U5BU5D_t56*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m14161_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m14162_gshared (HashSet_1_t69 * __this, int32_t ___item, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m14162(__this, ___item, method) (( void (*) (HashSet_1_t69 *, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m14162_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m14163_gshared (HashSet_1_t69 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m14163(__this, method) (( Object_t * (*) (HashSet_1_t69 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m14163_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::get_Count()
extern "C" int32_t HashSet_1_get_Count_m14164_gshared (HashSet_1_t69 * __this, const MethodInfo* method);
#define HashSet_1_get_Count_m14164(__this, method) (( int32_t (*) (HashSet_1_t69 *, const MethodInfo*))HashSet_1_get_Count_m14164_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1_Init_m14165_gshared (HashSet_1_t69 * __this, int32_t ___capacity, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1_Init_m14165(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t69 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m14165_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::InitArrays(System.Int32)
extern "C" void HashSet_1_InitArrays_m14166_gshared (HashSet_1_t69 * __this, int32_t ___size, const MethodInfo* method);
#define HashSet_1_InitArrays_m14166(__this, ___size, method) (( void (*) (HashSet_1_t69 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m14166_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::SlotsContainsAt(System.Int32,System.Int32,T)
extern "C" bool HashSet_1_SlotsContainsAt_m14167_gshared (HashSet_1_t69 * __this, int32_t ___index, int32_t ___hash, int32_t ___item, const MethodInfo* method);
#define HashSet_1_SlotsContainsAt_m14167(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t69 *, int32_t, int32_t, int32_t, const MethodInfo*))HashSet_1_SlotsContainsAt_m14167_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::CopyTo(T[])
extern "C" void HashSet_1_CopyTo_m14168_gshared (HashSet_1_t69 * __this, Int32U5BU5D_t56* ___array, const MethodInfo* method);
#define HashSet_1_CopyTo_m14168(__this, ___array, method) (( void (*) (HashSet_1_t69 *, Int32U5BU5D_t56*, const MethodInfo*))HashSet_1_CopyTo_m14168_gshared)(__this, ___array, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void HashSet_1_CopyTo_m14169_gshared (HashSet_1_t69 * __this, Int32U5BU5D_t56* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_CopyTo_m14169(__this, ___array, ___index, method) (( void (*) (HashSet_1_t69 *, Int32U5BU5D_t56*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m14169_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::CopyTo(T[],System.Int32,System.Int32)
extern "C" void HashSet_1_CopyTo_m14170_gshared (HashSet_1_t69 * __this, Int32U5BU5D_t56* ___array, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define HashSet_1_CopyTo_m14170(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t69 *, Int32U5BU5D_t56*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m14170_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::Resize()
extern "C" void HashSet_1_Resize_m14171_gshared (HashSet_1_t69 * __this, const MethodInfo* method);
#define HashSet_1_Resize_m14171(__this, method) (( void (*) (HashSet_1_t69 *, const MethodInfo*))HashSet_1_Resize_m14171_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::GetLinkHashCode(System.Int32)
extern "C" int32_t HashSet_1_GetLinkHashCode_m14172_gshared (HashSet_1_t69 * __this, int32_t ___index, const MethodInfo* method);
#define HashSet_1_GetLinkHashCode_m14172(__this, ___index, method) (( int32_t (*) (HashSet_1_t69 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m14172_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::GetItemHashCode(T)
extern "C" int32_t HashSet_1_GetItemHashCode_m14173_gshared (HashSet_1_t69 * __this, int32_t ___item, const MethodInfo* method);
#define HashSet_1_GetItemHashCode_m14173(__this, ___item, method) (( int32_t (*) (HashSet_1_t69 *, int32_t, const MethodInfo*))HashSet_1_GetItemHashCode_m14173_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Add(T)
extern "C" bool HashSet_1_Add_m1011_gshared (HashSet_1_t69 * __this, int32_t ___item, const MethodInfo* method);
#define HashSet_1_Add_m1011(__this, ___item, method) (( bool (*) (HashSet_1_t69 *, int32_t, const MethodInfo*))HashSet_1_Add_m1011_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::Clear()
extern "C" void HashSet_1_Clear_m14174_gshared (HashSet_1_t69 * __this, const MethodInfo* method);
#define HashSet_1_Clear_m14174(__this, method) (( void (*) (HashSet_1_t69 *, const MethodInfo*))HashSet_1_Clear_m14174_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Contains(T)
extern "C" bool HashSet_1_Contains_m14175_gshared (HashSet_1_t69 * __this, int32_t ___item, const MethodInfo* method);
#define HashSet_1_Contains_m14175(__this, ___item, method) (( bool (*) (HashSet_1_t69 *, int32_t, const MethodInfo*))HashSet_1_Contains_m14175_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Remove(T)
extern "C" bool HashSet_1_Remove_m14176_gshared (HashSet_1_t69 * __this, int32_t ___item, const MethodInfo* method);
#define HashSet_1_Remove_m14176(__this, ___item, method) (( bool (*) (HashSet_1_t69 *, int32_t, const MethodInfo*))HashSet_1_Remove_m14176_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1_GetObjectData_m14177_gshared (HashSet_1_t69 * __this, SerializationInfo_t862 * ___info, StreamingContext_t863  ___context, const MethodInfo* method);
#define HashSet_1_GetObjectData_m14177(__this, ___info, ___context, method) (( void (*) (HashSet_1_t69 *, SerializationInfo_t862 *, StreamingContext_t863 , const MethodInfo*))HashSet_1_GetObjectData_m14177_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::OnDeserialization(System.Object)
extern "C" void HashSet_1_OnDeserialization_m14178_gshared (HashSet_1_t69 * __this, Object_t * ___sender, const MethodInfo* method);
#define HashSet_1_OnDeserialization_m14178(__this, ___sender, method) (( void (*) (HashSet_1_t69 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m14178_gshared)(__this, ___sender, method)
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t2246  HashSet_1_GetEnumerator_m14179_gshared (HashSet_1_t69 * __this, const MethodInfo* method);
#define HashSet_1_GetEnumerator_m14179(__this, method) (( Enumerator_t2246  (*) (HashSet_1_t69 *, const MethodInfo*))HashSet_1_GetEnumerator_m14179_gshared)(__this, method)
