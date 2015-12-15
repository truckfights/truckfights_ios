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

// System.Collections.Generic.List`1<System.Single>
struct List_1_t283;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t3039;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t3040;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t208;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t3041;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>
struct ReadOnlyCollection_1_t2372;
// System.Single[]
struct SingleU5BU5D_t210;
// System.Predicate`1<System.Single>
struct Predicate_1_t2378;
// System.Comparison`1<System.Single>
struct Comparison_1_t2382;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_16.h"

// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
extern "C" void List_1__ctor_m16109_gshared (List_1_t283 * __this, const MethodInfo* method);
#define List_1__ctor_m16109(__this, method) (( void (*) (List_1_t283 *, const MethodInfo*))List_1__ctor_m16109_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m16110_gshared (List_1_t283 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m16110(__this, ___collection, method) (( void (*) (List_1_t283 *, Object_t*, const MethodInfo*))List_1__ctor_m16110_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Int32)
extern "C" void List_1__ctor_m1245_gshared (List_1_t283 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m1245(__this, ___capacity, method) (( void (*) (List_1_t283 *, int32_t, const MethodInfo*))List_1__ctor_m1245_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.cctor()
extern "C" void List_1__cctor_m16111_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m16111(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16111_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16112_gshared (List_1_t283 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16112(__this, method) (( Object_t* (*) (List_1_t283 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16112_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m16113_gshared (List_1_t283 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m16113(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t283 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m16113_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m16114_gshared (List_1_t283 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m16114(__this, method) (( Object_t * (*) (List_1_t283 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m16114_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m16115_gshared (List_1_t283 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m16115(__this, ___item, method) (( int32_t (*) (List_1_t283 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m16115_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m16116_gshared (List_1_t283 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m16116(__this, ___item, method) (( bool (*) (List_1_t283 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m16116_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m16117_gshared (List_1_t283 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m16117(__this, ___item, method) (( int32_t (*) (List_1_t283 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m16117_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m16118_gshared (List_1_t283 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m16118(__this, ___index, ___item, method) (( void (*) (List_1_t283 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m16118_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m16119_gshared (List_1_t283 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m16119(__this, ___item, method) (( void (*) (List_1_t283 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m16119_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16120_gshared (List_1_t283 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16120(__this, method) (( bool (*) (List_1_t283 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16120_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m16121_gshared (List_1_t283 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m16121(__this, method) (( bool (*) (List_1_t283 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m16121_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m16122_gshared (List_1_t283 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m16122(__this, method) (( Object_t * (*) (List_1_t283 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m16122_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m16123_gshared (List_1_t283 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m16123(__this, method) (( bool (*) (List_1_t283 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m16123_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m16124_gshared (List_1_t283 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m16124(__this, method) (( bool (*) (List_1_t283 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m16124_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m16125_gshared (List_1_t283 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m16125(__this, ___index, method) (( Object_t * (*) (List_1_t283 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m16125_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m16126_gshared (List_1_t283 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m16126(__this, ___index, ___value, method) (( void (*) (List_1_t283 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m16126_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
extern "C" void List_1_Add_m16127_gshared (List_1_t283 * __this, float ___item, const MethodInfo* method);
#define List_1_Add_m16127(__this, ___item, method) (( void (*) (List_1_t283 *, float, const MethodInfo*))List_1_Add_m16127_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m16128_gshared (List_1_t283 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m16128(__this, ___newCount, method) (( void (*) (List_1_t283 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16128_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m16129_gshared (List_1_t283 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m16129(__this, ___collection, method) (( void (*) (List_1_t283 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16129_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m16130_gshared (List_1_t283 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m16130(__this, ___enumerable, method) (( void (*) (List_1_t283 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16130_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m16131_gshared (List_1_t283 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m16131(__this, ___collection, method) (( void (*) (List_1_t283 *, Object_t*, const MethodInfo*))List_1_AddRange_m16131_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Single>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2372 * List_1_AsReadOnly_m16132_gshared (List_1_t283 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m16132(__this, method) (( ReadOnlyCollection_1_t2372 * (*) (List_1_t283 *, const MethodInfo*))List_1_AsReadOnly_m16132_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Clear()
extern "C" void List_1_Clear_m16133_gshared (List_1_t283 * __this, const MethodInfo* method);
#define List_1_Clear_m16133(__this, method) (( void (*) (List_1_t283 *, const MethodInfo*))List_1_Clear_m16133_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::Contains(T)
extern "C" bool List_1_Contains_m16134_gshared (List_1_t283 * __this, float ___item, const MethodInfo* method);
#define List_1_Contains_m16134(__this, ___item, method) (( bool (*) (List_1_t283 *, float, const MethodInfo*))List_1_Contains_m16134_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m16135_gshared (List_1_t283 * __this, SingleU5BU5D_t210* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m16135(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t283 *, SingleU5BU5D_t210*, int32_t, const MethodInfo*))List_1_CopyTo_m16135_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Single>::Find(System.Predicate`1<T>)
extern "C" float List_1_Find_m16136_gshared (List_1_t283 * __this, Predicate_1_t2378 * ___match, const MethodInfo* method);
#define List_1_Find_m16136(__this, ___match, method) (( float (*) (List_1_t283 *, Predicate_1_t2378 *, const MethodInfo*))List_1_Find_m16136_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m16137_gshared (Object_t * __this /* static, unused */, Predicate_1_t2378 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m16137(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2378 *, const MethodInfo*))List_1_CheckMatch_m16137_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m16138_gshared (List_1_t283 * __this, Predicate_1_t2378 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m16138(__this, ___match, method) (( int32_t (*) (List_1_t283 *, Predicate_1_t2378 *, const MethodInfo*))List_1_FindIndex_m16138_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m16139_gshared (List_1_t283 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2378 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m16139(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t283 *, int32_t, int32_t, Predicate_1_t2378 *, const MethodInfo*))List_1_GetIndex_m16139_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Single>::GetEnumerator()
extern "C" Enumerator_t2371  List_1_GetEnumerator_m16140_gshared (List_1_t283 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m16140(__this, method) (( Enumerator_t2371  (*) (List_1_t283 *, const MethodInfo*))List_1_GetEnumerator_m16140_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m16141_gshared (List_1_t283 * __this, float ___item, const MethodInfo* method);
#define List_1_IndexOf_m16141(__this, ___item, method) (( int32_t (*) (List_1_t283 *, float, const MethodInfo*))List_1_IndexOf_m16141_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m16142_gshared (List_1_t283 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m16142(__this, ___start, ___delta, method) (( void (*) (List_1_t283 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16142_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m16143_gshared (List_1_t283 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m16143(__this, ___index, method) (( void (*) (List_1_t283 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16143_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m16144_gshared (List_1_t283 * __this, int32_t ___index, float ___item, const MethodInfo* method);
#define List_1_Insert_m16144(__this, ___index, ___item, method) (( void (*) (List_1_t283 *, int32_t, float, const MethodInfo*))List_1_Insert_m16144_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m16145_gshared (List_1_t283 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m16145(__this, ___collection, method) (( void (*) (List_1_t283 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16145_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::Remove(T)
extern "C" bool List_1_Remove_m16146_gshared (List_1_t283 * __this, float ___item, const MethodInfo* method);
#define List_1_Remove_m16146(__this, ___item, method) (( bool (*) (List_1_t283 *, float, const MethodInfo*))List_1_Remove_m16146_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m16147_gshared (List_1_t283 * __this, Predicate_1_t2378 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m16147(__this, ___match, method) (( int32_t (*) (List_1_t283 *, Predicate_1_t2378 *, const MethodInfo*))List_1_RemoveAll_m16147_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m16148_gshared (List_1_t283 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m16148(__this, ___index, method) (( void (*) (List_1_t283 *, int32_t, const MethodInfo*))List_1_RemoveAt_m16148_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Reverse()
extern "C" void List_1_Reverse_m16149_gshared (List_1_t283 * __this, const MethodInfo* method);
#define List_1_Reverse_m16149(__this, method) (( void (*) (List_1_t283 *, const MethodInfo*))List_1_Reverse_m16149_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort()
extern "C" void List_1_Sort_m16150_gshared (List_1_t283 * __this, const MethodInfo* method);
#define List_1_Sort_m16150(__this, method) (( void (*) (List_1_t283 *, const MethodInfo*))List_1_Sort_m16150_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m16151_gshared (List_1_t283 * __this, Comparison_1_t2382 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m16151(__this, ___comparison, method) (( void (*) (List_1_t283 *, Comparison_1_t2382 *, const MethodInfo*))List_1_Sort_m16151_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Single>::ToArray()
extern "C" SingleU5BU5D_t210* List_1_ToArray_m1246_gshared (List_1_t283 * __this, const MethodInfo* method);
#define List_1_ToArray_m1246(__this, method) (( SingleU5BU5D_t210* (*) (List_1_t283 *, const MethodInfo*))List_1_ToArray_m1246_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::TrimExcess()
extern "C" void List_1_TrimExcess_m16152_gshared (List_1_t283 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m16152(__this, method) (( void (*) (List_1_t283 *, const MethodInfo*))List_1_TrimExcess_m16152_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m16153_gshared (List_1_t283 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m16153(__this, method) (( int32_t (*) (List_1_t283 *, const MethodInfo*))List_1_get_Capacity_m16153_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m16154_gshared (List_1_t283 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m16154(__this, ___value, method) (( void (*) (List_1_t283 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16154_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
extern "C" int32_t List_1_get_Count_m16155_gshared (List_1_t283 * __this, const MethodInfo* method);
#define List_1_get_Count_m16155(__this, method) (( int32_t (*) (List_1_t283 *, const MethodInfo*))List_1_get_Count_m16155_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
extern "C" float List_1_get_Item_m16156_gshared (List_1_t283 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m16156(__this, ___index, method) (( float (*) (List_1_t283 *, int32_t, const MethodInfo*))List_1_get_Item_m16156_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m16157_gshared (List_1_t283 * __this, int32_t ___index, float ___value, const MethodInfo* method);
#define List_1_set_Item_m16157(__this, ___index, ___value, method) (( void (*) (List_1_t283 *, int32_t, float, const MethodInfo*))List_1_set_Item_m16157_gshared)(__this, ___index, ___value, method)
