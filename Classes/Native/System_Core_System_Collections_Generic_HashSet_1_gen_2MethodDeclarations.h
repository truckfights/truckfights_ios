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

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2307;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t862;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2609;
// System.Object[]
struct ObjectU5BU5D_t111;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t208;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2159;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator__1.h"

// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C" void HashSet_1__ctor_m15141_gshared (HashSet_1_t2307 * __this, const MethodInfo* method);
#define HashSet_1__ctor_m15141(__this, method) (( void (*) (HashSet_1_t2307 *, const MethodInfo*))HashSet_1__ctor_m15141_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1__ctor_m15143_gshared (HashSet_1_t2307 * __this, SerializationInfo_t862 * ___info, StreamingContext_t863  ___context, const MethodInfo* method);
#define HashSet_1__ctor_m15143(__this, ___info, ___context, method) (( void (*) (HashSet_1_t2307 *, SerializationInfo_t862 *, StreamingContext_t863 , const MethodInfo*))HashSet_1__ctor_m15143_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15145_gshared (HashSet_1_t2307 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15145(__this, method) (( Object_t* (*) (HashSet_1_t2307 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15145_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15147_gshared (HashSet_1_t2307 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15147(__this, method) (( bool (*) (HashSet_1_t2307 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15147_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m15149_gshared (HashSet_1_t2307 * __this, ObjectU5BU5D_t111* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m15149(__this, ___array, ___index, method) (( void (*) (HashSet_1_t2307 *, ObjectU5BU5D_t111*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m15149_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m15151_gshared (HashSet_1_t2307 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m15151(__this, ___item, method) (( void (*) (HashSet_1_t2307 *, Object_t *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m15151_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m15153_gshared (HashSet_1_t2307 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m15153(__this, method) (( Object_t * (*) (HashSet_1_t2307 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m15153_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
extern "C" int32_t HashSet_1_get_Count_m15155_gshared (HashSet_1_t2307 * __this, const MethodInfo* method);
#define HashSet_1_get_Count_m15155(__this, method) (( int32_t (*) (HashSet_1_t2307 *, const MethodInfo*))HashSet_1_get_Count_m15155_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1_Init_m15157_gshared (HashSet_1_t2307 * __this, int32_t ___capacity, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1_Init_m15157(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t2307 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m15157_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::InitArrays(System.Int32)
extern "C" void HashSet_1_InitArrays_m15159_gshared (HashSet_1_t2307 * __this, int32_t ___size, const MethodInfo* method);
#define HashSet_1_InitArrays_m15159(__this, ___size, method) (( void (*) (HashSet_1_t2307 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m15159_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::SlotsContainsAt(System.Int32,System.Int32,T)
extern "C" bool HashSet_1_SlotsContainsAt_m15161_gshared (HashSet_1_t2307 * __this, int32_t ___index, int32_t ___hash, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_SlotsContainsAt_m15161(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t2307 *, int32_t, int32_t, Object_t *, const MethodInfo*))HashSet_1_SlotsContainsAt_m15161_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[])
extern "C" void HashSet_1_CopyTo_m15163_gshared (HashSet_1_t2307 * __this, ObjectU5BU5D_t111* ___array, const MethodInfo* method);
#define HashSet_1_CopyTo_m15163(__this, ___array, method) (( void (*) (HashSet_1_t2307 *, ObjectU5BU5D_t111*, const MethodInfo*))HashSet_1_CopyTo_m15163_gshared)(__this, ___array, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void HashSet_1_CopyTo_m15165_gshared (HashSet_1_t2307 * __this, ObjectU5BU5D_t111* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_CopyTo_m15165(__this, ___array, ___index, method) (( void (*) (HashSet_1_t2307 *, ObjectU5BU5D_t111*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m15165_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32,System.Int32)
extern "C" void HashSet_1_CopyTo_m15167_gshared (HashSet_1_t2307 * __this, ObjectU5BU5D_t111* ___array, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define HashSet_1_CopyTo_m15167(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t2307 *, ObjectU5BU5D_t111*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m15167_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Resize()
extern "C" void HashSet_1_Resize_m15169_gshared (HashSet_1_t2307 * __this, const MethodInfo* method);
#define HashSet_1_Resize_m15169(__this, method) (( void (*) (HashSet_1_t2307 *, const MethodInfo*))HashSet_1_Resize_m15169_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetLinkHashCode(System.Int32)
extern "C" int32_t HashSet_1_GetLinkHashCode_m15171_gshared (HashSet_1_t2307 * __this, int32_t ___index, const MethodInfo* method);
#define HashSet_1_GetLinkHashCode_m15171(__this, ___index, method) (( int32_t (*) (HashSet_1_t2307 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m15171_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetItemHashCode(T)
extern "C" int32_t HashSet_1_GetItemHashCode_m15173_gshared (HashSet_1_t2307 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_GetItemHashCode_m15173(__this, ___item, method) (( int32_t (*) (HashSet_1_t2307 *, Object_t *, const MethodInfo*))HashSet_1_GetItemHashCode_m15173_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
extern "C" bool HashSet_1_Add_m15174_gshared (HashSet_1_t2307 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Add_m15174(__this, ___item, method) (( bool (*) (HashSet_1_t2307 *, Object_t *, const MethodInfo*))HashSet_1_Add_m15174_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
extern "C" void HashSet_1_Clear_m15176_gshared (HashSet_1_t2307 * __this, const MethodInfo* method);
#define HashSet_1_Clear_m15176(__this, method) (( void (*) (HashSet_1_t2307 *, const MethodInfo*))HashSet_1_Clear_m15176_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
extern "C" bool HashSet_1_Contains_m15178_gshared (HashSet_1_t2307 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Contains_m15178(__this, ___item, method) (( bool (*) (HashSet_1_t2307 *, Object_t *, const MethodInfo*))HashSet_1_Contains_m15178_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
extern "C" bool HashSet_1_Remove_m15180_gshared (HashSet_1_t2307 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Remove_m15180(__this, ___item, method) (( bool (*) (HashSet_1_t2307 *, Object_t *, const MethodInfo*))HashSet_1_Remove_m15180_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1_GetObjectData_m15182_gshared (HashSet_1_t2307 * __this, SerializationInfo_t862 * ___info, StreamingContext_t863  ___context, const MethodInfo* method);
#define HashSet_1_GetObjectData_m15182(__this, ___info, ___context, method) (( void (*) (HashSet_1_t2307 *, SerializationInfo_t862 *, StreamingContext_t863 , const MethodInfo*))HashSet_1_GetObjectData_m15182_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::OnDeserialization(System.Object)
extern "C" void HashSet_1_OnDeserialization_m15184_gshared (HashSet_1_t2307 * __this, Object_t * ___sender, const MethodInfo* method);
#define HashSet_1_OnDeserialization_m15184(__this, ___sender, method) (( void (*) (HashSet_1_t2307 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m15184_gshared)(__this, ___sender, method)
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2311  HashSet_1_GetEnumerator_m15185_gshared (HashSet_1_t2307 * __this, const MethodInfo* method);
#define HashSet_1_GetEnumerator_m15185(__this, method) (( Enumerator_t2311  (*) (HashSet_1_t2307 *, const MethodInfo*))HashSet_1_GetEnumerator_m15185_gshared)(__this, method)
