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

// System.Collections.Generic.Dictionary`2/ValueCollection<PunTeams/Team,System.Object>
struct ValueCollection_t2396;
// System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>
struct Dictionary_2_t2387;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2609;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t208;
// System.Object[]
struct ObjectU5BU5D_t111;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_30.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<PunTeams/Team,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m16413_gshared (ValueCollection_t2396 * __this, Dictionary_2_t2387 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m16413(__this, ___dictionary, method) (( void (*) (ValueCollection_t2396 *, Dictionary_2_t2387 *, const MethodInfo*))ValueCollection__ctor_m16413_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<PunTeams/Team,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m16414_gshared (ValueCollection_t2396 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m16414(__this, ___item, method) (( void (*) (ValueCollection_t2396 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m16414_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<PunTeams/Team,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m16415_gshared (ValueCollection_t2396 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m16415(__this, method) (( void (*) (ValueCollection_t2396 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m16415_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<PunTeams/Team,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m16416_gshared (ValueCollection_t2396 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m16416(__this, ___item, method) (( bool (*) (ValueCollection_t2396 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m16416_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<PunTeams/Team,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m16417_gshared (ValueCollection_t2396 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m16417(__this, ___item, method) (( bool (*) (ValueCollection_t2396 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m16417_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<PunTeams/Team,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m16418_gshared (ValueCollection_t2396 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m16418(__this, method) (( Object_t* (*) (ValueCollection_t2396 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m16418_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<PunTeams/Team,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m16419_gshared (ValueCollection_t2396 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m16419(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2396 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m16419_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<PunTeams/Team,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m16420_gshared (ValueCollection_t2396 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m16420(__this, method) (( Object_t * (*) (ValueCollection_t2396 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m16420_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<PunTeams/Team,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m16421_gshared (ValueCollection_t2396 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m16421(__this, method) (( bool (*) (ValueCollection_t2396 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m16421_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<PunTeams/Team,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m16422_gshared (ValueCollection_t2396 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m16422(__this, method) (( bool (*) (ValueCollection_t2396 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m16422_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<PunTeams/Team,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m16423_gshared (ValueCollection_t2396 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m16423(__this, method) (( Object_t * (*) (ValueCollection_t2396 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m16423_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<PunTeams/Team,System.Object>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m16424_gshared (ValueCollection_t2396 * __this, ObjectU5BU5D_t111* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m16424(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2396 *, ObjectU5BU5D_t111*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m16424_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<PunTeams/Team,System.Object>::GetEnumerator()
extern "C" Enumerator_t2397  ValueCollection_GetEnumerator_m16425_gshared (ValueCollection_t2396 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m16425(__this, method) (( Enumerator_t2397  (*) (ValueCollection_t2396 *, const MethodInfo*))ValueCollection_GetEnumerator_m16425_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<PunTeams/Team,System.Object>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m16426_gshared (ValueCollection_t2396 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m16426(__this, method) (( int32_t (*) (ValueCollection_t2396 *, const MethodInfo*))ValueCollection_get_Count_m16426_gshared)(__this, method)
