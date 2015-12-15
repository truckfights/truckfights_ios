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

// System.Collections.Generic.List`1<System.Object>
struct List_1_t3;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t633;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2609;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t208;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t2991;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t2132;
// System.Object[]
struct ObjectU5BU5D_t111;
// System.Predicate`1<System.Object>
struct Predicate_1_t2142;
// System.Comparison`1<System.Object>
struct Comparison_1_t2148;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m866_gshared (List_1_t3 * __this, const MethodInfo* method);
#define List_1__ctor_m866(__this, method) (( void (*) (List_1_t3 *, const MethodInfo*))List_1__ctor_m866_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m1025_gshared (List_1_t3 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m1025(__this, ___collection, method) (( void (*) (List_1_t3 *, Object_t*, const MethodInfo*))List_1__ctor_m1025_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m12831_gshared (List_1_t3 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m12831(__this, ___capacity, method) (( void (*) (List_1_t3 *, int32_t, const MethodInfo*))List_1__ctor_m12831_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m12832_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m12832(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m12832_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12833_gshared (List_1_t3 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12833(__this, method) (( Object_t* (*) (List_1_t3 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12833_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m12834_gshared (List_1_t3 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m12834(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m12834_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m12835_gshared (List_1_t3 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m12835(__this, method) (( Object_t * (*) (List_1_t3 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m12835_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m12836_gshared (List_1_t3 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m12836(__this, ___item, method) (( int32_t (*) (List_1_t3 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m12836_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m12837_gshared (List_1_t3 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m12837(__this, ___item, method) (( bool (*) (List_1_t3 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m12837_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m12838_gshared (List_1_t3 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m12838(__this, ___item, method) (( int32_t (*) (List_1_t3 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m12838_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m12839_gshared (List_1_t3 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m12839(__this, ___index, ___item, method) (( void (*) (List_1_t3 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m12839_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m12840_gshared (List_1_t3 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m12840(__this, ___item, method) (( void (*) (List_1_t3 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m12840_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12841_gshared (List_1_t3 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12841(__this, method) (( bool (*) (List_1_t3 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12841_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m12842_gshared (List_1_t3 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m12842(__this, method) (( bool (*) (List_1_t3 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m12842_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m12843_gshared (List_1_t3 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m12843(__this, method) (( Object_t * (*) (List_1_t3 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m12843_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m12844_gshared (List_1_t3 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m12844(__this, method) (( bool (*) (List_1_t3 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m12844_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m12845_gshared (List_1_t3 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m12845(__this, method) (( bool (*) (List_1_t3 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m12845_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m12846_gshared (List_1_t3 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m12846(__this, ___index, method) (( Object_t * (*) (List_1_t3 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m12846_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m12847_gshared (List_1_t3 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m12847(__this, ___index, ___value, method) (( void (*) (List_1_t3 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m12847_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m12848_gshared (List_1_t3 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m12848(__this, ___item, method) (( void (*) (List_1_t3 *, Object_t *, const MethodInfo*))List_1_Add_m12848_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m12849_gshared (List_1_t3 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m12849(__this, ___newCount, method) (( void (*) (List_1_t3 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m12849_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m12850_gshared (List_1_t3 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m12850(__this, ___collection, method) (( void (*) (List_1_t3 *, Object_t*, const MethodInfo*))List_1_AddCollection_m12850_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m12851_gshared (List_1_t3 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m12851(__this, ___enumerable, method) (( void (*) (List_1_t3 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m12851_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m869_gshared (List_1_t3 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m869(__this, ___collection, method) (( void (*) (List_1_t3 *, Object_t*, const MethodInfo*))List_1_AddRange_m869_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2132 * List_1_AsReadOnly_m12852_gshared (List_1_t3 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m12852(__this, method) (( ReadOnlyCollection_1_t2132 * (*) (List_1_t3 *, const MethodInfo*))List_1_AsReadOnly_m12852_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m12853_gshared (List_1_t3 * __this, const MethodInfo* method);
#define List_1_Clear_m12853(__this, method) (( void (*) (List_1_t3 *, const MethodInfo*))List_1_Clear_m12853_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m12854_gshared (List_1_t3 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m12854(__this, ___item, method) (( bool (*) (List_1_t3 *, Object_t *, const MethodInfo*))List_1_Contains_m12854_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m12855_gshared (List_1_t3 * __this, ObjectU5BU5D_t111* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m12855(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t3 *, ObjectU5BU5D_t111*, int32_t, const MethodInfo*))List_1_CopyTo_m12855_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m12856_gshared (List_1_t3 * __this, Predicate_1_t2142 * ___match, const MethodInfo* method);
#define List_1_Find_m12856(__this, ___match, method) (( Object_t * (*) (List_1_t3 *, Predicate_1_t2142 *, const MethodInfo*))List_1_Find_m12856_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m12857_gshared (Object_t * __this /* static, unused */, Predicate_1_t2142 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m12857(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2142 *, const MethodInfo*))List_1_CheckMatch_m12857_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m12858_gshared (List_1_t3 * __this, Predicate_1_t2142 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m12858(__this, ___match, method) (( int32_t (*) (List_1_t3 *, Predicate_1_t2142 *, const MethodInfo*))List_1_FindIndex_m12858_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m12859_gshared (List_1_t3 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2142 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m12859(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t3 *, int32_t, int32_t, Predicate_1_t2142 *, const MethodInfo*))List_1_GetIndex_m12859_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2136  List_1_GetEnumerator_m12860_gshared (List_1_t3 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m12860(__this, method) (( Enumerator_t2136  (*) (List_1_t3 *, const MethodInfo*))List_1_GetEnumerator_m12860_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m12861_gshared (List_1_t3 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m12861(__this, ___item, method) (( int32_t (*) (List_1_t3 *, Object_t *, const MethodInfo*))List_1_IndexOf_m12861_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m12862_gshared (List_1_t3 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m12862(__this, ___start, ___delta, method) (( void (*) (List_1_t3 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m12862_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m12863_gshared (List_1_t3 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m12863(__this, ___index, method) (( void (*) (List_1_t3 *, int32_t, const MethodInfo*))List_1_CheckIndex_m12863_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m12864_gshared (List_1_t3 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m12864(__this, ___index, ___item, method) (( void (*) (List_1_t3 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m12864_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m12865_gshared (List_1_t3 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m12865(__this, ___collection, method) (( void (*) (List_1_t3 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m12865_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m12866_gshared (List_1_t3 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m12866(__this, ___item, method) (( bool (*) (List_1_t3 *, Object_t *, const MethodInfo*))List_1_Remove_m12866_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m12867_gshared (List_1_t3 * __this, Predicate_1_t2142 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m12867(__this, ___match, method) (( int32_t (*) (List_1_t3 *, Predicate_1_t2142 *, const MethodInfo*))List_1_RemoveAll_m12867_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m12868_gshared (List_1_t3 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m12868(__this, ___index, method) (( void (*) (List_1_t3 *, int32_t, const MethodInfo*))List_1_RemoveAt_m12868_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m12869_gshared (List_1_t3 * __this, const MethodInfo* method);
#define List_1_Reverse_m12869(__this, method) (( void (*) (List_1_t3 *, const MethodInfo*))List_1_Reverse_m12869_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m12870_gshared (List_1_t3 * __this, const MethodInfo* method);
#define List_1_Sort_m12870(__this, method) (( void (*) (List_1_t3 *, const MethodInfo*))List_1_Sort_m12870_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m12871_gshared (List_1_t3 * __this, Comparison_1_t2148 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m12871(__this, ___comparison, method) (( void (*) (List_1_t3 *, Comparison_1_t2148 *, const MethodInfo*))List_1_Sort_m12871_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t111* List_1_ToArray_m1020_gshared (List_1_t3 * __this, const MethodInfo* method);
#define List_1_ToArray_m1020(__this, method) (( ObjectU5BU5D_t111* (*) (List_1_t3 *, const MethodInfo*))List_1_ToArray_m1020_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m12872_gshared (List_1_t3 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m12872(__this, method) (( void (*) (List_1_t3 *, const MethodInfo*))List_1_TrimExcess_m12872_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m12873_gshared (List_1_t3 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m12873(__this, method) (( int32_t (*) (List_1_t3 *, const MethodInfo*))List_1_get_Capacity_m12873_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m12874_gshared (List_1_t3 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m12874(__this, ___value, method) (( void (*) (List_1_t3 *, int32_t, const MethodInfo*))List_1_set_Capacity_m12874_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m12875_gshared (List_1_t3 * __this, const MethodInfo* method);
#define List_1_get_Count_m12875(__this, method) (( int32_t (*) (List_1_t3 *, const MethodInfo*))List_1_get_Count_m12875_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m12876_gshared (List_1_t3 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m12876(__this, ___index, method) (( Object_t * (*) (List_1_t3 *, int32_t, const MethodInfo*))List_1_get_Item_m12876_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m12877_gshared (List_1_t3 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m12877(__this, ___index, ___value, method) (( void (*) (List_1_t3 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m12877_gshared)(__this, ___index, ___value, method)
