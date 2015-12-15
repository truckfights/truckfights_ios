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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t897;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2159;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t862;
// System.Collections.ICollection
struct ICollection_t226;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2993;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t208;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2994;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t899;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t232;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t2165;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m5277_gshared (Dictionary_2_t897 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m5277(__this, method) (( void (*) (Dictionary_2_t897 *, const MethodInfo*))Dictionary_2__ctor_m5277_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13097_gshared (Dictionary_2_t897 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m13097(__this, ___comparer, method) (( void (*) (Dictionary_2_t897 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13097_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m5278_gshared (Dictionary_2_t897 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m5278(__this, ___capacity, method) (( void (*) (Dictionary_2_t897 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m5278_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m13100_gshared (Dictionary_2_t897 * __this, SerializationInfo_t862 * ___info, StreamingContext_t863  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m13100(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t897 *, SerializationInfo_t862 *, StreamingContext_t863 , const MethodInfo*))Dictionary_2__ctor_m13100_gshared)(__this, ___info, ___context, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m13102_gshared (Dictionary_2_t897 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m13102(__this, method) (( Object_t * (*) (Dictionary_2_t897 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m13102_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m13104_gshared (Dictionary_2_t897 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m13104(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t897 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m13104_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m13106_gshared (Dictionary_2_t897 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m13106(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t897 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m13106_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m13108_gshared (Dictionary_2_t897 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m13108(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t897 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m13108_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m13110_gshared (Dictionary_2_t897 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m13110(__this, ___key, method) (( bool (*) (Dictionary_2_t897 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m13110_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m13112_gshared (Dictionary_2_t897 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m13112(__this, ___key, method) (( void (*) (Dictionary_2_t897 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m13112_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13114_gshared (Dictionary_2_t897 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13114(__this, method) (( bool (*) (Dictionary_2_t897 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13114_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13116_gshared (Dictionary_2_t897 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13116(__this, method) (( Object_t * (*) (Dictionary_2_t897 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13116_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13118_gshared (Dictionary_2_t897 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13118(__this, method) (( bool (*) (Dictionary_2_t897 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13118_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13120_gshared (Dictionary_2_t897 * __this, KeyValuePair_2_t2160  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13120(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t897 *, KeyValuePair_2_t2160 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13120_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13122_gshared (Dictionary_2_t897 * __this, KeyValuePair_2_t2160  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13122(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t897 *, KeyValuePair_2_t2160 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13122_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13124_gshared (Dictionary_2_t897 * __this, KeyValuePair_2U5BU5D_t2993* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13124(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t897 *, KeyValuePair_2U5BU5D_t2993*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13124_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13126_gshared (Dictionary_2_t897 * __this, KeyValuePair_2_t2160  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13126(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t897 *, KeyValuePair_2_t2160 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13126_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m13128_gshared (Dictionary_2_t897 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m13128(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t897 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m13128_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13130_gshared (Dictionary_2_t897 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13130(__this, method) (( Object_t * (*) (Dictionary_2_t897 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13130_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13132_gshared (Dictionary_2_t897 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13132(__this, method) (( Object_t* (*) (Dictionary_2_t897 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13132_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13134_gshared (Dictionary_2_t897 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13134(__this, method) (( Object_t * (*) (Dictionary_2_t897 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13134_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m13136_gshared (Dictionary_2_t897 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m13136(__this, method) (( int32_t (*) (Dictionary_2_t897 *, const MethodInfo*))Dictionary_2_get_Count_m13136_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m13138_gshared (Dictionary_2_t897 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m13138(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t897 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m13138_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m5280_gshared (Dictionary_2_t897 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m5280(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t897 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m5280_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m13141_gshared (Dictionary_2_t897 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m13141(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t897 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m13141_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m13143_gshared (Dictionary_2_t897 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m13143(__this, ___size, method) (( void (*) (Dictionary_2_t897 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m13143_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m13145_gshared (Dictionary_2_t897 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m13145(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t897 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m13145_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2160  Dictionary_2_make_pair_m13147_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m13147(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2160  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m13147_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m13149_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m13149(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m13149_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m13151_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m13151(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m13151_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m13153_gshared (Dictionary_2_t897 * __this, KeyValuePair_2U5BU5D_t2993* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m13153(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t897 *, KeyValuePair_2U5BU5D_t2993*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m13153_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m13155_gshared (Dictionary_2_t897 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m13155(__this, method) (( void (*) (Dictionary_2_t897 *, const MethodInfo*))Dictionary_2_Resize_m13155_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m13157_gshared (Dictionary_2_t897 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m13157(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t897 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m13157_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m13159_gshared (Dictionary_2_t897 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m13159(__this, method) (( void (*) (Dictionary_2_t897 *, const MethodInfo*))Dictionary_2_Clear_m13159_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m13161_gshared (Dictionary_2_t897 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m13161(__this, ___key, method) (( bool (*) (Dictionary_2_t897 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m13161_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m13163_gshared (Dictionary_2_t897 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m13163(__this, ___value, method) (( bool (*) (Dictionary_2_t897 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m13163_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m13165_gshared (Dictionary_2_t897 * __this, SerializationInfo_t862 * ___info, StreamingContext_t863  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m13165(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t897 *, SerializationInfo_t862 *, StreamingContext_t863 , const MethodInfo*))Dictionary_2_GetObjectData_m13165_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m13167_gshared (Dictionary_2_t897 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m13167(__this, ___sender, method) (( void (*) (Dictionary_2_t897 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m13167_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m13169_gshared (Dictionary_2_t897 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m13169(__this, ___key, method) (( bool (*) (Dictionary_2_t897 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m13169_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m5279_gshared (Dictionary_2_t897 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m5279(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t897 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m5279_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t232 * Dictionary_2_get_Keys_m965_gshared (Dictionary_2_t897 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m965(__this, method) (( KeyCollection_t232 * (*) (Dictionary_2_t897 *, const MethodInfo*))Dictionary_2_get_Keys_m965_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t2165 * Dictionary_2_get_Values_m13173_gshared (Dictionary_2_t897 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m13173(__this, method) (( ValueCollection_t2165 * (*) (Dictionary_2_t897 *, const MethodInfo*))Dictionary_2_get_Values_m13173_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m13175_gshared (Dictionary_2_t897 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m13175(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t897 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m13175_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m13177_gshared (Dictionary_2_t897 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m13177(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t897 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m13177_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m13179_gshared (Dictionary_2_t897 * __this, KeyValuePair_2_t2160  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m13179(__this, ___pair, method) (( bool (*) (Dictionary_2_t897 *, KeyValuePair_2_t2160 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m13179_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t2163  Dictionary_2_GetEnumerator_m13181_gshared (Dictionary_2_t897 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m13181(__this, method) (( Enumerator_t2163  (*) (Dictionary_2_t897 *, const MethodInfo*))Dictionary_2_GetEnumerator_m13181_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t225  Dictionary_2_U3CCopyToU3Em__0_m13183_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m13183(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t225  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m13183_gshared)(__this /* static, unused */, ___key, ___value, method)
