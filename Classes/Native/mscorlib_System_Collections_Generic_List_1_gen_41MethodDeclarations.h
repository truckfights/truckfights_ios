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

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t741;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t3094;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t3095;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t208;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t606;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t2732;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t858;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t2736;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2739;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UILineInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_45.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m20994_gshared (List_1_t741 * __this, const MethodInfo* method);
#define List_1__ctor_m20994(__this, method) (( void (*) (List_1_t741 *, const MethodInfo*))List_1__ctor_m20994_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m20995_gshared (List_1_t741 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m20995(__this, ___collection, method) (( void (*) (List_1_t741 *, Object_t*, const MethodInfo*))List_1__ctor_m20995_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m4813_gshared (List_1_t741 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m4813(__this, ___capacity, method) (( void (*) (List_1_t741 *, int32_t, const MethodInfo*))List_1__ctor_m4813_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m20996_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m20996(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m20996_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20997_gshared (List_1_t741 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20997(__this, method) (( Object_t* (*) (List_1_t741 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20997_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m20998_gshared (List_1_t741 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m20998(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t741 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m20998_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m20999_gshared (List_1_t741 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m20999(__this, method) (( Object_t * (*) (List_1_t741 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m20999_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m21000_gshared (List_1_t741 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m21000(__this, ___item, method) (( int32_t (*) (List_1_t741 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m21000_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m21001_gshared (List_1_t741 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m21001(__this, ___item, method) (( bool (*) (List_1_t741 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m21001_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m21002_gshared (List_1_t741 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m21002(__this, ___item, method) (( int32_t (*) (List_1_t741 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m21002_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m21003_gshared (List_1_t741 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m21003(__this, ___index, ___item, method) (( void (*) (List_1_t741 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m21003_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m21004_gshared (List_1_t741 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m21004(__this, ___item, method) (( void (*) (List_1_t741 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m21004_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21005_gshared (List_1_t741 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21005(__this, method) (( bool (*) (List_1_t741 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21005_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m21006_gshared (List_1_t741 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m21006(__this, method) (( bool (*) (List_1_t741 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m21006_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m21007_gshared (List_1_t741 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m21007(__this, method) (( Object_t * (*) (List_1_t741 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m21007_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m21008_gshared (List_1_t741 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m21008(__this, method) (( bool (*) (List_1_t741 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m21008_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m21009_gshared (List_1_t741 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m21009(__this, method) (( bool (*) (List_1_t741 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m21009_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m21010_gshared (List_1_t741 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m21010(__this, ___index, method) (( Object_t * (*) (List_1_t741 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m21010_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m21011_gshared (List_1_t741 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m21011(__this, ___index, ___value, method) (( void (*) (List_1_t741 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m21011_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m21012_gshared (List_1_t741 * __this, UILineInfo_t602  ___item, const MethodInfo* method);
#define List_1_Add_m21012(__this, ___item, method) (( void (*) (List_1_t741 *, UILineInfo_t602 , const MethodInfo*))List_1_Add_m21012_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m21013_gshared (List_1_t741 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m21013(__this, ___newCount, method) (( void (*) (List_1_t741 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m21013_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m21014_gshared (List_1_t741 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m21014(__this, ___collection, method) (( void (*) (List_1_t741 *, Object_t*, const MethodInfo*))List_1_AddCollection_m21014_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m21015_gshared (List_1_t741 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m21015(__this, ___enumerable, method) (( void (*) (List_1_t741 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m21015_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m21016_gshared (List_1_t741 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m21016(__this, ___collection, method) (( void (*) (List_1_t741 *, Object_t*, const MethodInfo*))List_1_AddRange_m21016_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2732 * List_1_AsReadOnly_m21017_gshared (List_1_t741 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m21017(__this, method) (( ReadOnlyCollection_1_t2732 * (*) (List_1_t741 *, const MethodInfo*))List_1_AsReadOnly_m21017_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m21018_gshared (List_1_t741 * __this, const MethodInfo* method);
#define List_1_Clear_m21018(__this, method) (( void (*) (List_1_t741 *, const MethodInfo*))List_1_Clear_m21018_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m21019_gshared (List_1_t741 * __this, UILineInfo_t602  ___item, const MethodInfo* method);
#define List_1_Contains_m21019(__this, ___item, method) (( bool (*) (List_1_t741 *, UILineInfo_t602 , const MethodInfo*))List_1_Contains_m21019_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m21020_gshared (List_1_t741 * __this, UILineInfoU5BU5D_t858* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m21020(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t741 *, UILineInfoU5BU5D_t858*, int32_t, const MethodInfo*))List_1_CopyTo_m21020_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t602  List_1_Find_m21021_gshared (List_1_t741 * __this, Predicate_1_t2736 * ___match, const MethodInfo* method);
#define List_1_Find_m21021(__this, ___match, method) (( UILineInfo_t602  (*) (List_1_t741 *, Predicate_1_t2736 *, const MethodInfo*))List_1_Find_m21021_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m21022_gshared (Object_t * __this /* static, unused */, Predicate_1_t2736 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m21022(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2736 *, const MethodInfo*))List_1_CheckMatch_m21022_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m21023_gshared (List_1_t741 * __this, Predicate_1_t2736 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m21023(__this, ___match, method) (( int32_t (*) (List_1_t741 *, Predicate_1_t2736 *, const MethodInfo*))List_1_FindIndex_m21023_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m21024_gshared (List_1_t741 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2736 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m21024(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t741 *, int32_t, int32_t, Predicate_1_t2736 *, const MethodInfo*))List_1_GetIndex_m21024_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t2731  List_1_GetEnumerator_m21025_gshared (List_1_t741 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m21025(__this, method) (( Enumerator_t2731  (*) (List_1_t741 *, const MethodInfo*))List_1_GetEnumerator_m21025_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m21026_gshared (List_1_t741 * __this, UILineInfo_t602  ___item, const MethodInfo* method);
#define List_1_IndexOf_m21026(__this, ___item, method) (( int32_t (*) (List_1_t741 *, UILineInfo_t602 , const MethodInfo*))List_1_IndexOf_m21026_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m21027_gshared (List_1_t741 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m21027(__this, ___start, ___delta, method) (( void (*) (List_1_t741 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m21027_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m21028_gshared (List_1_t741 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m21028(__this, ___index, method) (( void (*) (List_1_t741 *, int32_t, const MethodInfo*))List_1_CheckIndex_m21028_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m21029_gshared (List_1_t741 * __this, int32_t ___index, UILineInfo_t602  ___item, const MethodInfo* method);
#define List_1_Insert_m21029(__this, ___index, ___item, method) (( void (*) (List_1_t741 *, int32_t, UILineInfo_t602 , const MethodInfo*))List_1_Insert_m21029_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m21030_gshared (List_1_t741 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m21030(__this, ___collection, method) (( void (*) (List_1_t741 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m21030_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m21031_gshared (List_1_t741 * __this, UILineInfo_t602  ___item, const MethodInfo* method);
#define List_1_Remove_m21031(__this, ___item, method) (( bool (*) (List_1_t741 *, UILineInfo_t602 , const MethodInfo*))List_1_Remove_m21031_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m21032_gshared (List_1_t741 * __this, Predicate_1_t2736 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m21032(__this, ___match, method) (( int32_t (*) (List_1_t741 *, Predicate_1_t2736 *, const MethodInfo*))List_1_RemoveAll_m21032_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m21033_gshared (List_1_t741 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m21033(__this, ___index, method) (( void (*) (List_1_t741 *, int32_t, const MethodInfo*))List_1_RemoveAt_m21033_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m21034_gshared (List_1_t741 * __this, const MethodInfo* method);
#define List_1_Reverse_m21034(__this, method) (( void (*) (List_1_t741 *, const MethodInfo*))List_1_Reverse_m21034_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m21035_gshared (List_1_t741 * __this, const MethodInfo* method);
#define List_1_Sort_m21035(__this, method) (( void (*) (List_1_t741 *, const MethodInfo*))List_1_Sort_m21035_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m21036_gshared (List_1_t741 * __this, Comparison_1_t2739 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m21036(__this, ___comparison, method) (( void (*) (List_1_t741 *, Comparison_1_t2739 *, const MethodInfo*))List_1_Sort_m21036_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t858* List_1_ToArray_m21037_gshared (List_1_t741 * __this, const MethodInfo* method);
#define List_1_ToArray_m21037(__this, method) (( UILineInfoU5BU5D_t858* (*) (List_1_t741 *, const MethodInfo*))List_1_ToArray_m21037_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m21038_gshared (List_1_t741 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m21038(__this, method) (( void (*) (List_1_t741 *, const MethodInfo*))List_1_TrimExcess_m21038_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m21039_gshared (List_1_t741 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m21039(__this, method) (( int32_t (*) (List_1_t741 *, const MethodInfo*))List_1_get_Capacity_m21039_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m21040_gshared (List_1_t741 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m21040(__this, ___value, method) (( void (*) (List_1_t741 *, int32_t, const MethodInfo*))List_1_set_Capacity_m21040_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m21041_gshared (List_1_t741 * __this, const MethodInfo* method);
#define List_1_get_Count_m21041(__this, method) (( int32_t (*) (List_1_t741 *, const MethodInfo*))List_1_get_Count_m21041_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t602  List_1_get_Item_m21042_gshared (List_1_t741 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m21042(__this, ___index, method) (( UILineInfo_t602  (*) (List_1_t741 *, int32_t, const MethodInfo*))List_1_get_Item_m21042_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m21043_gshared (List_1_t741 * __this, int32_t ___index, UILineInfo_t602  ___value, const MethodInfo* method);
#define List_1_set_Item_m21043(__this, ___index, ___value, method) (( void (*) (List_1_t741 *, int32_t, UILineInfo_t602 , const MethodInfo*))List_1_set_Item_m21043_gshared)(__this, ___index, ___value, method)
