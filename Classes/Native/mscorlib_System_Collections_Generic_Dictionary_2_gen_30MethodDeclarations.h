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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2272;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2159;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t862;
// System.Collections.ICollection
struct ICollection_t226;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t3021;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t208;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t3022;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t899;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t2276;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t2280;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__11.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m14673_gshared (Dictionary_2_t2272 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m14673(__this, method) (( void (*) (Dictionary_2_t2272 *, const MethodInfo*))Dictionary_2__ctor_m14673_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m14675_gshared (Dictionary_2_t2272 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m14675(__this, ___comparer, method) (( void (*) (Dictionary_2_t2272 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m14675_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m14676_gshared (Dictionary_2_t2272 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m14676(__this, ___capacity, method) (( void (*) (Dictionary_2_t2272 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m14676_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m14678_gshared (Dictionary_2_t2272 * __this, SerializationInfo_t862 * ___info, StreamingContext_t863  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m14678(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2272 *, SerializationInfo_t862 *, StreamingContext_t863 , const MethodInfo*))Dictionary_2__ctor_m14678_gshared)(__this, ___info, ___context, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m14680_gshared (Dictionary_2_t2272 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m14680(__this, method) (( Object_t * (*) (Dictionary_2_t2272 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m14680_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m14682_gshared (Dictionary_2_t2272 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m14682(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2272 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14682_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m14684_gshared (Dictionary_2_t2272 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m14684(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2272 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14684_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m14686_gshared (Dictionary_2_t2272 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m14686(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2272 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14686_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m14688_gshared (Dictionary_2_t2272 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m14688(__this, ___key, method) (( bool (*) (Dictionary_2_t2272 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m14688_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m14690_gshared (Dictionary_2_t2272 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m14690(__this, ___key, method) (( void (*) (Dictionary_2_t2272 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14690_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14692_gshared (Dictionary_2_t2272 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14692(__this, method) (( bool (*) (Dictionary_2_t2272 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14692_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14694_gshared (Dictionary_2_t2272 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14694(__this, method) (( Object_t * (*) (Dictionary_2_t2272 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14694_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14696_gshared (Dictionary_2_t2272 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14696(__this, method) (( bool (*) (Dictionary_2_t2272 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14696_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14698_gshared (Dictionary_2_t2272 * __this, KeyValuePair_2_t2274  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14698(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2272 *, KeyValuePair_2_t2274 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14698_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14700_gshared (Dictionary_2_t2272 * __this, KeyValuePair_2_t2274  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14700(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2272 *, KeyValuePair_2_t2274 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14700_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14702_gshared (Dictionary_2_t2272 * __this, KeyValuePair_2U5BU5D_t3021* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14702(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2272 *, KeyValuePair_2U5BU5D_t3021*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14702_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14704_gshared (Dictionary_2_t2272 * __this, KeyValuePair_2_t2274  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14704(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2272 *, KeyValuePair_2_t2274 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14704_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m14706_gshared (Dictionary_2_t2272 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m14706(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2272 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14706_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14708_gshared (Dictionary_2_t2272 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14708(__this, method) (( Object_t * (*) (Dictionary_2_t2272 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14708_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14710_gshared (Dictionary_2_t2272 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14710(__this, method) (( Object_t* (*) (Dictionary_2_t2272 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14710_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14712_gshared (Dictionary_2_t2272 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14712(__this, method) (( Object_t * (*) (Dictionary_2_t2272 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14712_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m14714_gshared (Dictionary_2_t2272 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m14714(__this, method) (( int32_t (*) (Dictionary_2_t2272 *, const MethodInfo*))Dictionary_2_get_Count_m14714_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m14716_gshared (Dictionary_2_t2272 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m14716(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2272 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m14716_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m14718_gshared (Dictionary_2_t2272 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m14718(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2272 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m14718_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m14720_gshared (Dictionary_2_t2272 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m14720(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2272 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m14720_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m14722_gshared (Dictionary_2_t2272 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m14722(__this, ___size, method) (( void (*) (Dictionary_2_t2272 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m14722_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m14724_gshared (Dictionary_2_t2272 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m14724(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2272 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m14724_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2274  Dictionary_2_make_pair_m14726_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m14726(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2274  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m14726_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m14728_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m14728(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m14728_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m14730_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m14730(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m14730_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m14732_gshared (Dictionary_2_t2272 * __this, KeyValuePair_2U5BU5D_t3021* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m14732(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2272 *, KeyValuePair_2U5BU5D_t3021*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m14732_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m14734_gshared (Dictionary_2_t2272 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m14734(__this, method) (( void (*) (Dictionary_2_t2272 *, const MethodInfo*))Dictionary_2_Resize_m14734_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m14736_gshared (Dictionary_2_t2272 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m14736(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2272 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m14736_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m14738_gshared (Dictionary_2_t2272 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m14738(__this, method) (( void (*) (Dictionary_2_t2272 *, const MethodInfo*))Dictionary_2_Clear_m14738_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m14740_gshared (Dictionary_2_t2272 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m14740(__this, ___key, method) (( bool (*) (Dictionary_2_t2272 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m14740_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m14742_gshared (Dictionary_2_t2272 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m14742(__this, ___value, method) (( bool (*) (Dictionary_2_t2272 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m14742_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m14744_gshared (Dictionary_2_t2272 * __this, SerializationInfo_t862 * ___info, StreamingContext_t863  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m14744(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2272 *, SerializationInfo_t862 *, StreamingContext_t863 , const MethodInfo*))Dictionary_2_GetObjectData_m14744_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m14746_gshared (Dictionary_2_t2272 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m14746(__this, ___sender, method) (( void (*) (Dictionary_2_t2272 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m14746_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m14748_gshared (Dictionary_2_t2272 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m14748(__this, ___key, method) (( bool (*) (Dictionary_2_t2272 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m14748_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m14750_gshared (Dictionary_2_t2272 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m14750(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2272 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m14750_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t2276 * Dictionary_2_get_Keys_m14752_gshared (Dictionary_2_t2272 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m14752(__this, method) (( KeyCollection_t2276 * (*) (Dictionary_2_t2272 *, const MethodInfo*))Dictionary_2_get_Keys_m14752_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t2280 * Dictionary_2_get_Values_m14754_gshared (Dictionary_2_t2272 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m14754(__this, method) (( ValueCollection_t2280 * (*) (Dictionary_2_t2272 *, const MethodInfo*))Dictionary_2_get_Values_m14754_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m14756_gshared (Dictionary_2_t2272 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m14756(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2272 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m14756_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m14758_gshared (Dictionary_2_t2272 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m14758(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2272 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m14758_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m14760_gshared (Dictionary_2_t2272 * __this, KeyValuePair_2_t2274  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m14760(__this, ___pair, method) (( bool (*) (Dictionary_2_t2272 *, KeyValuePair_2_t2274 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14760_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2278  Dictionary_2_GetEnumerator_m14762_gshared (Dictionary_2_t2272 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m14762(__this, method) (( Enumerator_t2278  (*) (Dictionary_2_t2272 *, const MethodInfo*))Dictionary_2_GetEnumerator_m14762_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t225  Dictionary_2_U3CCopyToU3Em__0_m14764_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m14764(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t225  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14764_gshared)(__this /* static, unused */, ___key, ___value, method)
