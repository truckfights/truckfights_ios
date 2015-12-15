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

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2867;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2159;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t862;
// System.Collections.ICollection
struct ICollection_t226;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t3122;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t208;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t3123;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t899;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>
struct KeyCollection_t2871;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t2875;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_32.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__32.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m23013_gshared (Dictionary_2_t2867 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m23013(__this, method) (( void (*) (Dictionary_2_t2867 *, const MethodInfo*))Dictionary_2__ctor_m23013_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m23014_gshared (Dictionary_2_t2867 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m23014(__this, ___comparer, method) (( void (*) (Dictionary_2_t2867 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m23014_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m23016_gshared (Dictionary_2_t2867 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m23016(__this, ___capacity, method) (( void (*) (Dictionary_2_t2867 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m23016_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m23018_gshared (Dictionary_2_t2867 * __this, SerializationInfo_t862 * ___info, StreamingContext_t863  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m23018(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2867 *, SerializationInfo_t862 *, StreamingContext_t863 , const MethodInfo*))Dictionary_2__ctor_m23018_gshared)(__this, ___info, ___context, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m23020_gshared (Dictionary_2_t2867 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m23020(__this, method) (( Object_t * (*) (Dictionary_2_t2867 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m23020_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m23022_gshared (Dictionary_2_t2867 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m23022(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2867 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m23022_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m23024_gshared (Dictionary_2_t2867 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m23024(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2867 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m23024_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m23026_gshared (Dictionary_2_t2867 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m23026(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2867 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m23026_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m23028_gshared (Dictionary_2_t2867 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m23028(__this, ___key, method) (( bool (*) (Dictionary_2_t2867 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m23028_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m23030_gshared (Dictionary_2_t2867 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m23030(__this, ___key, method) (( void (*) (Dictionary_2_t2867 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m23030_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23032_gshared (Dictionary_2_t2867 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23032(__this, method) (( bool (*) (Dictionary_2_t2867 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23032_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23034_gshared (Dictionary_2_t2867 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23034(__this, method) (( Object_t * (*) (Dictionary_2_t2867 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23034_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23036_gshared (Dictionary_2_t2867 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23036(__this, method) (( bool (*) (Dictionary_2_t2867 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23036_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23038_gshared (Dictionary_2_t2867 * __this, KeyValuePair_2_t2869  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23038(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2867 *, KeyValuePair_2_t2869 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23038_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23040_gshared (Dictionary_2_t2867 * __this, KeyValuePair_2_t2869  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23040(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2867 *, KeyValuePair_2_t2869 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23040_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23042_gshared (Dictionary_2_t2867 * __this, KeyValuePair_2U5BU5D_t3122* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23042(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2867 *, KeyValuePair_2U5BU5D_t3122*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23042_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23044_gshared (Dictionary_2_t2867 * __this, KeyValuePair_2_t2869  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23044(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2867 *, KeyValuePair_2_t2869 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23044_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m23046_gshared (Dictionary_2_t2867 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m23046(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2867 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m23046_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23048_gshared (Dictionary_2_t2867 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23048(__this, method) (( Object_t * (*) (Dictionary_2_t2867 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23048_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23050_gshared (Dictionary_2_t2867 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23050(__this, method) (( Object_t* (*) (Dictionary_2_t2867 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23050_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23052_gshared (Dictionary_2_t2867 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23052(__this, method) (( Object_t * (*) (Dictionary_2_t2867 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23052_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m23054_gshared (Dictionary_2_t2867 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m23054(__this, method) (( int32_t (*) (Dictionary_2_t2867 *, const MethodInfo*))Dictionary_2_get_Count_m23054_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m23056_gshared (Dictionary_2_t2867 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m23056(__this, ___key, method) (( bool (*) (Dictionary_2_t2867 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m23056_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m23058_gshared (Dictionary_2_t2867 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m23058(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2867 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m23058_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m23060_gshared (Dictionary_2_t2867 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m23060(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2867 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m23060_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m23062_gshared (Dictionary_2_t2867 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m23062(__this, ___size, method) (( void (*) (Dictionary_2_t2867 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m23062_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m23064_gshared (Dictionary_2_t2867 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m23064(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2867 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m23064_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2869  Dictionary_2_make_pair_m23066_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m23066(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2869  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m23066_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m23068_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m23068(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_key_m23068_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m23070_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m23070(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m23070_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m23072_gshared (Dictionary_2_t2867 * __this, KeyValuePair_2U5BU5D_t3122* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m23072(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2867 *, KeyValuePair_2U5BU5D_t3122*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m23072_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m23074_gshared (Dictionary_2_t2867 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m23074(__this, method) (( void (*) (Dictionary_2_t2867 *, const MethodInfo*))Dictionary_2_Resize_m23074_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m23076_gshared (Dictionary_2_t2867 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m23076(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2867 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m23076_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m23078_gshared (Dictionary_2_t2867 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m23078(__this, method) (( void (*) (Dictionary_2_t2867 *, const MethodInfo*))Dictionary_2_Clear_m23078_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m23080_gshared (Dictionary_2_t2867 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m23080(__this, ___key, method) (( bool (*) (Dictionary_2_t2867 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m23080_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m23082_gshared (Dictionary_2_t2867 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m23082(__this, ___value, method) (( bool (*) (Dictionary_2_t2867 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m23082_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m23084_gshared (Dictionary_2_t2867 * __this, SerializationInfo_t862 * ___info, StreamingContext_t863  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m23084(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2867 *, SerializationInfo_t862 *, StreamingContext_t863 , const MethodInfo*))Dictionary_2_GetObjectData_m23084_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m23086_gshared (Dictionary_2_t2867 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m23086(__this, ___sender, method) (( void (*) (Dictionary_2_t2867 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m23086_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m23088_gshared (Dictionary_2_t2867 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m23088(__this, ___key, method) (( bool (*) (Dictionary_2_t2867 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m23088_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m23090_gshared (Dictionary_2_t2867 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m23090(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2867 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m23090_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Keys()
extern "C" KeyCollection_t2871 * Dictionary_2_get_Keys_m23092_gshared (Dictionary_2_t2867 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m23092(__this, method) (( KeyCollection_t2871 * (*) (Dictionary_2_t2867 *, const MethodInfo*))Dictionary_2_get_Keys_m23092_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t2875 * Dictionary_2_get_Values_m23094_gshared (Dictionary_2_t2867 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m23094(__this, method) (( ValueCollection_t2875 * (*) (Dictionary_2_t2867 *, const MethodInfo*))Dictionary_2_get_Values_m23094_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m23096_gshared (Dictionary_2_t2867 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m23096(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2867 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m23096_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m23098_gshared (Dictionary_2_t2867 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m23098(__this, ___value, method) (( bool (*) (Dictionary_2_t2867 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m23098_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m23100_gshared (Dictionary_2_t2867 * __this, KeyValuePair_2_t2869  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m23100(__this, ___pair, method) (( bool (*) (Dictionary_2_t2867 *, KeyValuePair_2_t2869 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m23100_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t2873  Dictionary_2_GetEnumerator_m23102_gshared (Dictionary_2_t2867 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m23102(__this, method) (( Enumerator_t2873  (*) (Dictionary_2_t2867 *, const MethodInfo*))Dictionary_2_GetEnumerator_m23102_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t225  Dictionary_2_U3CCopyToU3Em__0_m23104_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m23104(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t225  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m23104_gshared)(__this /* static, unused */, ___key, ___value, method)
