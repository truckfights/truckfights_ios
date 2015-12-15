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

// System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>
struct Dictionary_2_t2387;
// System.Collections.Generic.IEqualityComparer`1<PunTeams/Team>
struct IEqualityComparer_1_t2386;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t862;
// System.Collections.ICollection
struct ICollection_t226;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>[]
struct KeyValuePair_2U5BU5D_t3043;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t208;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<PunTeams/Team,System.Object>>
struct IEnumerator_1_t3044;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t899;
// System.Collections.Generic.Dictionary`2/KeyCollection<PunTeams/Team,System.Object>
struct KeyCollection_t2392;
// System.Collections.Generic.Dictionary`2/ValueCollection<PunTeams/Team,System.Object>
struct ValueCollection_t2396;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"
#include "AssemblyU2DCSharpU2Dfirstpass_PunTeams_Team.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__16.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m16264_gshared (Dictionary_2_t2387 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m16264(__this, method) (( void (*) (Dictionary_2_t2387 *, const MethodInfo*))Dictionary_2__ctor_m16264_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m16266_gshared (Dictionary_2_t2387 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m16266(__this, ___comparer, method) (( void (*) (Dictionary_2_t2387 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16266_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m16268_gshared (Dictionary_2_t2387 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m16268(__this, ___capacity, method) (( void (*) (Dictionary_2_t2387 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m16268_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m16270_gshared (Dictionary_2_t2387 * __this, SerializationInfo_t862 * ___info, StreamingContext_t863  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m16270(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2387 *, SerializationInfo_t862 *, StreamingContext_t863 , const MethodInfo*))Dictionary_2__ctor_m16270_gshared)(__this, ___info, ___context, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m16272_gshared (Dictionary_2_t2387 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m16272(__this, method) (( Object_t * (*) (Dictionary_2_t2387 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m16272_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m16274_gshared (Dictionary_2_t2387 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m16274(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2387 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m16274_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m16276_gshared (Dictionary_2_t2387 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m16276(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2387 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m16276_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m16278_gshared (Dictionary_2_t2387 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m16278(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2387 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m16278_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m16280_gshared (Dictionary_2_t2387 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m16280(__this, ___key, method) (( bool (*) (Dictionary_2_t2387 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m16280_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m16282_gshared (Dictionary_2_t2387 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m16282(__this, ___key, method) (( void (*) (Dictionary_2_t2387 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m16282_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16284_gshared (Dictionary_2_t2387 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16284(__this, method) (( bool (*) (Dictionary_2_t2387 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16284_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16286_gshared (Dictionary_2_t2387 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16286(__this, method) (( Object_t * (*) (Dictionary_2_t2387 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16286_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16288_gshared (Dictionary_2_t2387 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16288(__this, method) (( bool (*) (Dictionary_2_t2387 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16288_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16290_gshared (Dictionary_2_t2387 * __this, KeyValuePair_2_t2389  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16290(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2387 *, KeyValuePair_2_t2389 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16290_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16292_gshared (Dictionary_2_t2387 * __this, KeyValuePair_2_t2389  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16292(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2387 *, KeyValuePair_2_t2389 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16292_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16294_gshared (Dictionary_2_t2387 * __this, KeyValuePair_2U5BU5D_t3043* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16294(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2387 *, KeyValuePair_2U5BU5D_t3043*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16294_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16296_gshared (Dictionary_2_t2387 * __this, KeyValuePair_2_t2389  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16296(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2387 *, KeyValuePair_2_t2389 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16296_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m16298_gshared (Dictionary_2_t2387 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m16298(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2387 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m16298_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16300_gshared (Dictionary_2_t2387 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16300(__this, method) (( Object_t * (*) (Dictionary_2_t2387 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16300_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16302_gshared (Dictionary_2_t2387 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16302(__this, method) (( Object_t* (*) (Dictionary_2_t2387 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16302_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16304_gshared (Dictionary_2_t2387 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16304(__this, method) (( Object_t * (*) (Dictionary_2_t2387 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16304_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m16306_gshared (Dictionary_2_t2387 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m16306(__this, method) (( int32_t (*) (Dictionary_2_t2387 *, const MethodInfo*))Dictionary_2_get_Count_m16306_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m16308_gshared (Dictionary_2_t2387 * __this, uint8_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m16308(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2387 *, uint8_t, const MethodInfo*))Dictionary_2_get_Item_m16308_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m16310_gshared (Dictionary_2_t2387 * __this, uint8_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m16310(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2387 *, uint8_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m16310_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m16312_gshared (Dictionary_2_t2387 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m16312(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2387 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m16312_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m16314_gshared (Dictionary_2_t2387 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m16314(__this, ___size, method) (( void (*) (Dictionary_2_t2387 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m16314_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m16316_gshared (Dictionary_2_t2387 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m16316(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2387 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m16316_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2389  Dictionary_2_make_pair_m16318_gshared (Object_t * __this /* static, unused */, uint8_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m16318(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2389  (*) (Object_t * /* static, unused */, uint8_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m16318_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::pick_key(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_key_m16320_gshared (Object_t * __this /* static, unused */, uint8_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m16320(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, uint8_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m16320_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m16322_gshared (Object_t * __this /* static, unused */, uint8_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m16322(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, uint8_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m16322_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m16324_gshared (Dictionary_2_t2387 * __this, KeyValuePair_2U5BU5D_t3043* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m16324(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2387 *, KeyValuePair_2U5BU5D_t3043*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m16324_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m16326_gshared (Dictionary_2_t2387 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m16326(__this, method) (( void (*) (Dictionary_2_t2387 *, const MethodInfo*))Dictionary_2_Resize_m16326_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m16328_gshared (Dictionary_2_t2387 * __this, uint8_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m16328(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2387 *, uint8_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m16328_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m16330_gshared (Dictionary_2_t2387 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m16330(__this, method) (( void (*) (Dictionary_2_t2387 *, const MethodInfo*))Dictionary_2_Clear_m16330_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m16332_gshared (Dictionary_2_t2387 * __this, uint8_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m16332(__this, ___key, method) (( bool (*) (Dictionary_2_t2387 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsKey_m16332_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m16334_gshared (Dictionary_2_t2387 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m16334(__this, ___value, method) (( bool (*) (Dictionary_2_t2387 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m16334_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m16336_gshared (Dictionary_2_t2387 * __this, SerializationInfo_t862 * ___info, StreamingContext_t863  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m16336(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2387 *, SerializationInfo_t862 *, StreamingContext_t863 , const MethodInfo*))Dictionary_2_GetObjectData_m16336_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m16338_gshared (Dictionary_2_t2387 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m16338(__this, ___sender, method) (( void (*) (Dictionary_2_t2387 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m16338_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m16340_gshared (Dictionary_2_t2387 * __this, uint8_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m16340(__this, ___key, method) (( bool (*) (Dictionary_2_t2387 *, uint8_t, const MethodInfo*))Dictionary_2_Remove_m16340_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m16342_gshared (Dictionary_2_t2387 * __this, uint8_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m16342(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2387 *, uint8_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m16342_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::get_Keys()
extern "C" KeyCollection_t2392 * Dictionary_2_get_Keys_m16344_gshared (Dictionary_2_t2387 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m16344(__this, method) (( KeyCollection_t2392 * (*) (Dictionary_2_t2387 *, const MethodInfo*))Dictionary_2_get_Keys_m16344_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::get_Values()
extern "C" ValueCollection_t2396 * Dictionary_2_get_Values_m16346_gshared (Dictionary_2_t2387 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m16346(__this, method) (( ValueCollection_t2396 * (*) (Dictionary_2_t2387 *, const MethodInfo*))Dictionary_2_get_Values_m16346_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::ToTKey(System.Object)
extern "C" uint8_t Dictionary_2_ToTKey_m16348_gshared (Dictionary_2_t2387 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m16348(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t2387 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m16348_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m16350_gshared (Dictionary_2_t2387 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m16350(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2387 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m16350_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m16352_gshared (Dictionary_2_t2387 * __this, KeyValuePair_2_t2389  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m16352(__this, ___pair, method) (( bool (*) (Dictionary_2_t2387 *, KeyValuePair_2_t2389 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m16352_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::GetEnumerator()
extern "C" Enumerator_t2394  Dictionary_2_GetEnumerator_m16354_gshared (Dictionary_2_t2387 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m16354(__this, method) (( Enumerator_t2394  (*) (Dictionary_2_t2387 *, const MethodInfo*))Dictionary_2_GetEnumerator_m16354_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<PunTeams/Team,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t225  Dictionary_2_U3CCopyToU3Em__0_m16356_gshared (Object_t * __this /* static, unused */, uint8_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m16356(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t225  (*) (Object_t * /* static, unused */, uint8_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m16356_gshared)(__this /* static, unused */, ___key, ___value, method)
