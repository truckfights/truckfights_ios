﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2772;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2159;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t862;
// System.Collections.ICollection
struct ICollection_t226;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>[]
struct KeyValuePair_2U5BU5D_t3102;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t208;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>
struct IEnumerator_1_t3103;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t899;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
struct KeyCollection_t2777;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
struct ValueCollection_t2781;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__25.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor()
extern "C" void Dictionary_2__ctor_m21581_gshared (Dictionary_2_t2772 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m21581(__this, method) (( void (*) (Dictionary_2_t2772 *, const MethodInfo*))Dictionary_2__ctor_m21581_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m21583_gshared (Dictionary_2_t2772 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m21583(__this, ___comparer, method) (( void (*) (Dictionary_2_t2772 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21583_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m21585_gshared (Dictionary_2_t2772 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m21585(__this, ___capacity, method) (( void (*) (Dictionary_2_t2772 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21585_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m21587_gshared (Dictionary_2_t2772 * __this, SerializationInfo_t862 * ___info, StreamingContext_t863  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m21587(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2772 *, SerializationInfo_t862 *, StreamingContext_t863 , const MethodInfo*))Dictionary_2__ctor_m21587_gshared)(__this, ___info, ___context, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m21589_gshared (Dictionary_2_t2772 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m21589(__this, method) (( Object_t * (*) (Dictionary_2_t2772 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m21589_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m21591_gshared (Dictionary_2_t2772 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m21591(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2772 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21591_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m21593_gshared (Dictionary_2_t2772 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m21593(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2772 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21593_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m21595_gshared (Dictionary_2_t2772 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m21595(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2772 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21595_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m21597_gshared (Dictionary_2_t2772 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m21597(__this, ___key, method) (( bool (*) (Dictionary_2_t2772 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21597_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m21599_gshared (Dictionary_2_t2772 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m21599(__this, ___key, method) (( void (*) (Dictionary_2_t2772 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21599_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21601_gshared (Dictionary_2_t2772 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21601(__this, method) (( bool (*) (Dictionary_2_t2772 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21601_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21603_gshared (Dictionary_2_t2772 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21603(__this, method) (( Object_t * (*) (Dictionary_2_t2772 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21603_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21605_gshared (Dictionary_2_t2772 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21605(__this, method) (( bool (*) (Dictionary_2_t2772 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21605_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21607_gshared (Dictionary_2_t2772 * __this, KeyValuePair_2_t2774  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21607(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2772 *, KeyValuePair_2_t2774 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21607_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21609_gshared (Dictionary_2_t2772 * __this, KeyValuePair_2_t2774  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21609(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2772 *, KeyValuePair_2_t2774 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21609_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21611_gshared (Dictionary_2_t2772 * __this, KeyValuePair_2U5BU5D_t3102* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21611(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2772 *, KeyValuePair_2U5BU5D_t3102*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21611_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21613_gshared (Dictionary_2_t2772 * __this, KeyValuePair_2_t2774  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21613(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2772 *, KeyValuePair_2_t2774 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21613_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m21615_gshared (Dictionary_2_t2772 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m21615(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2772 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21615_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21617_gshared (Dictionary_2_t2772 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21617(__this, method) (( Object_t * (*) (Dictionary_2_t2772 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21617_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21619_gshared (Dictionary_2_t2772 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21619(__this, method) (( Object_t* (*) (Dictionary_2_t2772 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21619_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21621_gshared (Dictionary_2_t2772 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21621(__this, method) (( Object_t * (*) (Dictionary_2_t2772 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21621_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m21623_gshared (Dictionary_2_t2772 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m21623(__this, method) (( int32_t (*) (Dictionary_2_t2772 *, const MethodInfo*))Dictionary_2_get_Count_m21623_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m21625_gshared (Dictionary_2_t2772 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m21625(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2772 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m21625_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m21627_gshared (Dictionary_2_t2772 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m21627(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2772 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m21627_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m21629_gshared (Dictionary_2_t2772 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m21629(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2772 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21629_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m21631_gshared (Dictionary_2_t2772 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m21631(__this, ___size, method) (( void (*) (Dictionary_2_t2772 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21631_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m21633_gshared (Dictionary_2_t2772 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m21633(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2772 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21633_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2774  Dictionary_2_make_pair_m21635_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m21635(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2774  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m21635_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m21637_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m21637(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m21637_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m21639_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m21639(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m21639_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m21641_gshared (Dictionary_2_t2772 * __this, KeyValuePair_2U5BU5D_t3102* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m21641(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2772 *, KeyValuePair_2U5BU5D_t3102*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21641_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Resize()
extern "C" void Dictionary_2_Resize_m21643_gshared (Dictionary_2_t2772 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m21643(__this, method) (( void (*) (Dictionary_2_t2772 *, const MethodInfo*))Dictionary_2_Resize_m21643_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m21645_gshared (Dictionary_2_t2772 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m21645(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2772 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m21645_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Clear()
extern "C" void Dictionary_2_Clear_m21647_gshared (Dictionary_2_t2772 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m21647(__this, method) (( void (*) (Dictionary_2_t2772 *, const MethodInfo*))Dictionary_2_Clear_m21647_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m21649_gshared (Dictionary_2_t2772 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m21649(__this, ___key, method) (( bool (*) (Dictionary_2_t2772 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m21649_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m21651_gshared (Dictionary_2_t2772 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m21651(__this, ___value, method) (( bool (*) (Dictionary_2_t2772 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m21651_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m21653_gshared (Dictionary_2_t2772 * __this, SerializationInfo_t862 * ___info, StreamingContext_t863  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m21653(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2772 *, SerializationInfo_t862 *, StreamingContext_t863 , const MethodInfo*))Dictionary_2_GetObjectData_m21653_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m21655_gshared (Dictionary_2_t2772 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m21655(__this, ___sender, method) (( void (*) (Dictionary_2_t2772 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21655_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m21657_gshared (Dictionary_2_t2772 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m21657(__this, ___key, method) (( bool (*) (Dictionary_2_t2772 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m21657_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m21659_gshared (Dictionary_2_t2772 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m21659(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2772 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m21659_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Keys()
extern "C" KeyCollection_t2777 * Dictionary_2_get_Keys_m21661_gshared (Dictionary_2_t2772 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m21661(__this, method) (( KeyCollection_t2777 * (*) (Dictionary_2_t2772 *, const MethodInfo*))Dictionary_2_get_Keys_m21661_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Values()
extern "C" ValueCollection_t2781 * Dictionary_2_get_Values_m21663_gshared (Dictionary_2_t2772 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m21663(__this, method) (( ValueCollection_t2781 * (*) (Dictionary_2_t2772 *, const MethodInfo*))Dictionary_2_get_Values_m21663_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m21665_gshared (Dictionary_2_t2772 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m21665(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2772 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21665_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m21667_gshared (Dictionary_2_t2772 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m21667(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2772 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21667_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m21669_gshared (Dictionary_2_t2772 * __this, KeyValuePair_2_t2774  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m21669(__this, ___pair, method) (( bool (*) (Dictionary_2_t2772 *, KeyValuePair_2_t2774 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21669_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetEnumerator()
extern "C" Enumerator_t2779  Dictionary_2_GetEnumerator_m21671_gshared (Dictionary_2_t2772 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m21671(__this, method) (( Enumerator_t2779  (*) (Dictionary_2_t2772 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21671_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t225  Dictionary_2_U3CCopyToU3Em__0_m21673_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m21673(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t225  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21673_gshared)(__this /* static, unused */, ___key, ___value, method)
