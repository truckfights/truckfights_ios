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

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t740;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t3091;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t3092;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t208;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t3093;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t2723;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t857;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t2727;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t2730;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UICharInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_44.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m20849_gshared (List_1_t740 * __this, const MethodInfo* method);
#define List_1__ctor_m20849(__this, method) (( void (*) (List_1_t740 *, const MethodInfo*))List_1__ctor_m20849_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m20850_gshared (List_1_t740 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m20850(__this, ___collection, method) (( void (*) (List_1_t740 *, Object_t*, const MethodInfo*))List_1__ctor_m20850_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m4812_gshared (List_1_t740 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m4812(__this, ___capacity, method) (( void (*) (List_1_t740 *, int32_t, const MethodInfo*))List_1__ctor_m4812_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m20851_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m20851(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m20851_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20852_gshared (List_1_t740 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20852(__this, method) (( Object_t* (*) (List_1_t740 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20852_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m20853_gshared (List_1_t740 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m20853(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t740 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m20853_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m20854_gshared (List_1_t740 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m20854(__this, method) (( Object_t * (*) (List_1_t740 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m20854_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m20855_gshared (List_1_t740 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m20855(__this, ___item, method) (( int32_t (*) (List_1_t740 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m20855_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m20856_gshared (List_1_t740 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m20856(__this, ___item, method) (( bool (*) (List_1_t740 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m20856_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m20857_gshared (List_1_t740 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m20857(__this, ___item, method) (( int32_t (*) (List_1_t740 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m20857_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m20858_gshared (List_1_t740 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m20858(__this, ___index, ___item, method) (( void (*) (List_1_t740 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m20858_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m20859_gshared (List_1_t740 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m20859(__this, ___item, method) (( void (*) (List_1_t740 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m20859_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20860_gshared (List_1_t740 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20860(__this, method) (( bool (*) (List_1_t740 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20860_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m20861_gshared (List_1_t740 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m20861(__this, method) (( bool (*) (List_1_t740 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m20861_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m20862_gshared (List_1_t740 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m20862(__this, method) (( Object_t * (*) (List_1_t740 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m20862_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m20863_gshared (List_1_t740 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m20863(__this, method) (( bool (*) (List_1_t740 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m20863_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m20864_gshared (List_1_t740 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m20864(__this, method) (( bool (*) (List_1_t740 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m20864_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m20865_gshared (List_1_t740 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m20865(__this, ___index, method) (( Object_t * (*) (List_1_t740 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m20865_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m20866_gshared (List_1_t740 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m20866(__this, ___index, ___value, method) (( void (*) (List_1_t740 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m20866_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m20867_gshared (List_1_t740 * __this, UICharInfo_t604  ___item, const MethodInfo* method);
#define List_1_Add_m20867(__this, ___item, method) (( void (*) (List_1_t740 *, UICharInfo_t604 , const MethodInfo*))List_1_Add_m20867_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m20868_gshared (List_1_t740 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m20868(__this, ___newCount, method) (( void (*) (List_1_t740 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m20868_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m20869_gshared (List_1_t740 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m20869(__this, ___collection, method) (( void (*) (List_1_t740 *, Object_t*, const MethodInfo*))List_1_AddCollection_m20869_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m20870_gshared (List_1_t740 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m20870(__this, ___enumerable, method) (( void (*) (List_1_t740 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m20870_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m20871_gshared (List_1_t740 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m20871(__this, ___collection, method) (( void (*) (List_1_t740 *, Object_t*, const MethodInfo*))List_1_AddRange_m20871_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2723 * List_1_AsReadOnly_m20872_gshared (List_1_t740 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m20872(__this, method) (( ReadOnlyCollection_1_t2723 * (*) (List_1_t740 *, const MethodInfo*))List_1_AsReadOnly_m20872_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m20873_gshared (List_1_t740 * __this, const MethodInfo* method);
#define List_1_Clear_m20873(__this, method) (( void (*) (List_1_t740 *, const MethodInfo*))List_1_Clear_m20873_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m20874_gshared (List_1_t740 * __this, UICharInfo_t604  ___item, const MethodInfo* method);
#define List_1_Contains_m20874(__this, ___item, method) (( bool (*) (List_1_t740 *, UICharInfo_t604 , const MethodInfo*))List_1_Contains_m20874_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m20875_gshared (List_1_t740 * __this, UICharInfoU5BU5D_t857* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m20875(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t740 *, UICharInfoU5BU5D_t857*, int32_t, const MethodInfo*))List_1_CopyTo_m20875_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t604  List_1_Find_m20876_gshared (List_1_t740 * __this, Predicate_1_t2727 * ___match, const MethodInfo* method);
#define List_1_Find_m20876(__this, ___match, method) (( UICharInfo_t604  (*) (List_1_t740 *, Predicate_1_t2727 *, const MethodInfo*))List_1_Find_m20876_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m20877_gshared (Object_t * __this /* static, unused */, Predicate_1_t2727 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m20877(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2727 *, const MethodInfo*))List_1_CheckMatch_m20877_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m20878_gshared (List_1_t740 * __this, Predicate_1_t2727 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m20878(__this, ___match, method) (( int32_t (*) (List_1_t740 *, Predicate_1_t2727 *, const MethodInfo*))List_1_FindIndex_m20878_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m20879_gshared (List_1_t740 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2727 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m20879(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t740 *, int32_t, int32_t, Predicate_1_t2727 *, const MethodInfo*))List_1_GetIndex_m20879_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t2722  List_1_GetEnumerator_m20880_gshared (List_1_t740 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m20880(__this, method) (( Enumerator_t2722  (*) (List_1_t740 *, const MethodInfo*))List_1_GetEnumerator_m20880_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m20881_gshared (List_1_t740 * __this, UICharInfo_t604  ___item, const MethodInfo* method);
#define List_1_IndexOf_m20881(__this, ___item, method) (( int32_t (*) (List_1_t740 *, UICharInfo_t604 , const MethodInfo*))List_1_IndexOf_m20881_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m20882_gshared (List_1_t740 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m20882(__this, ___start, ___delta, method) (( void (*) (List_1_t740 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m20882_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m20883_gshared (List_1_t740 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m20883(__this, ___index, method) (( void (*) (List_1_t740 *, int32_t, const MethodInfo*))List_1_CheckIndex_m20883_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m20884_gshared (List_1_t740 * __this, int32_t ___index, UICharInfo_t604  ___item, const MethodInfo* method);
#define List_1_Insert_m20884(__this, ___index, ___item, method) (( void (*) (List_1_t740 *, int32_t, UICharInfo_t604 , const MethodInfo*))List_1_Insert_m20884_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m20885_gshared (List_1_t740 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m20885(__this, ___collection, method) (( void (*) (List_1_t740 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m20885_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m20886_gshared (List_1_t740 * __this, UICharInfo_t604  ___item, const MethodInfo* method);
#define List_1_Remove_m20886(__this, ___item, method) (( bool (*) (List_1_t740 *, UICharInfo_t604 , const MethodInfo*))List_1_Remove_m20886_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m20887_gshared (List_1_t740 * __this, Predicate_1_t2727 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m20887(__this, ___match, method) (( int32_t (*) (List_1_t740 *, Predicate_1_t2727 *, const MethodInfo*))List_1_RemoveAll_m20887_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m20888_gshared (List_1_t740 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m20888(__this, ___index, method) (( void (*) (List_1_t740 *, int32_t, const MethodInfo*))List_1_RemoveAt_m20888_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m20889_gshared (List_1_t740 * __this, const MethodInfo* method);
#define List_1_Reverse_m20889(__this, method) (( void (*) (List_1_t740 *, const MethodInfo*))List_1_Reverse_m20889_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m20890_gshared (List_1_t740 * __this, const MethodInfo* method);
#define List_1_Sort_m20890(__this, method) (( void (*) (List_1_t740 *, const MethodInfo*))List_1_Sort_m20890_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m20891_gshared (List_1_t740 * __this, Comparison_1_t2730 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m20891(__this, ___comparison, method) (( void (*) (List_1_t740 *, Comparison_1_t2730 *, const MethodInfo*))List_1_Sort_m20891_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t857* List_1_ToArray_m20892_gshared (List_1_t740 * __this, const MethodInfo* method);
#define List_1_ToArray_m20892(__this, method) (( UICharInfoU5BU5D_t857* (*) (List_1_t740 *, const MethodInfo*))List_1_ToArray_m20892_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m20893_gshared (List_1_t740 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m20893(__this, method) (( void (*) (List_1_t740 *, const MethodInfo*))List_1_TrimExcess_m20893_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m20894_gshared (List_1_t740 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m20894(__this, method) (( int32_t (*) (List_1_t740 *, const MethodInfo*))List_1_get_Capacity_m20894_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m20895_gshared (List_1_t740 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m20895(__this, ___value, method) (( void (*) (List_1_t740 *, int32_t, const MethodInfo*))List_1_set_Capacity_m20895_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m20896_gshared (List_1_t740 * __this, const MethodInfo* method);
#define List_1_get_Count_m20896(__this, method) (( int32_t (*) (List_1_t740 *, const MethodInfo*))List_1_get_Count_m20896_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t604  List_1_get_Item_m20897_gshared (List_1_t740 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m20897(__this, ___index, method) (( UICharInfo_t604  (*) (List_1_t740 *, int32_t, const MethodInfo*))List_1_get_Item_m20897_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m20898_gshared (List_1_t740 * __this, int32_t ___index, UICharInfo_t604  ___value, const MethodInfo* method);
#define List_1_set_Item_m20898(__this, ___index, ___value, method) (( void (*) (List_1_t740 *, int32_t, UICharInfo_t604 , const MethodInfo*))List_1_set_Item_m20898_gshared)(__this, ___index, ___value, method)
