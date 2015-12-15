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

// System.Collections.Generic.List`1<System.Byte>
struct List_1_t246;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_t3030;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t2999;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t208;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t3031;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte>
struct ReadOnlyCollection_1_t2328;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Predicate`1<System.Byte>
struct Predicate_1_t2331;
// System.Comparison`1<System.Byte>
struct Comparison_1_t2335;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_12.h"

// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
extern "C" void List_1__ctor_m1012_gshared (List_1_t246 * __this, const MethodInfo* method);
#define List_1__ctor_m1012(__this, method) (( void (*) (List_1_t246 *, const MethodInfo*))List_1__ctor_m1012_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m15423_gshared (List_1_t246 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m15423(__this, ___collection, method) (( void (*) (List_1_t246 *, Object_t*, const MethodInfo*))List_1__ctor_m15423_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(System.Int32)
extern "C" void List_1__ctor_m15424_gshared (List_1_t246 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m15424(__this, ___capacity, method) (( void (*) (List_1_t246 *, int32_t, const MethodInfo*))List_1__ctor_m15424_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.cctor()
extern "C" void List_1__cctor_m15425_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m15425(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m15425_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Byte>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15426_gshared (List_1_t246 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15426(__this, method) (( Object_t* (*) (List_1_t246 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15426_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m15427_gshared (List_1_t246 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m15427(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t246 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m15427_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m15428_gshared (List_1_t246 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15428(__this, method) (( Object_t * (*) (List_1_t246 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m15428_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m15429_gshared (List_1_t246 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m15429(__this, ___item, method) (( int32_t (*) (List_1_t246 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m15429_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m15430_gshared (List_1_t246 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m15430(__this, ___item, method) (( bool (*) (List_1_t246 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m15430_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m15431_gshared (List_1_t246 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m15431(__this, ___item, method) (( int32_t (*) (List_1_t246 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m15431_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m15432_gshared (List_1_t246 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m15432(__this, ___index, ___item, method) (( void (*) (List_1_t246 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m15432_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m15433_gshared (List_1_t246 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m15433(__this, ___item, method) (( void (*) (List_1_t246 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m15433_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15434_gshared (List_1_t246 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15434(__this, method) (( bool (*) (List_1_t246 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15434_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m15435_gshared (List_1_t246 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15435(__this, method) (( bool (*) (List_1_t246 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m15435_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m15436_gshared (List_1_t246 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m15436(__this, method) (( Object_t * (*) (List_1_t246 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m15436_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m15437_gshared (List_1_t246 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m15437(__this, method) (( bool (*) (List_1_t246 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m15437_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m15438_gshared (List_1_t246 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m15438(__this, method) (( bool (*) (List_1_t246 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m15438_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m15439_gshared (List_1_t246 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m15439(__this, ___index, method) (( Object_t * (*) (List_1_t246 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m15439_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m15440_gshared (List_1_t246 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m15440(__this, ___index, ___value, method) (( void (*) (List_1_t246 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m15440_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(T)
extern "C" void List_1_Add_m15441_gshared (List_1_t246 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_Add_m15441(__this, ___item, method) (( void (*) (List_1_t246 *, uint8_t, const MethodInfo*))List_1_Add_m15441_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m15442_gshared (List_1_t246 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m15442(__this, ___newCount, method) (( void (*) (List_1_t246 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m15442_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m15443_gshared (List_1_t246 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m15443(__this, ___collection, method) (( void (*) (List_1_t246 *, Object_t*, const MethodInfo*))List_1_AddCollection_m15443_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m15444_gshared (List_1_t246 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m15444(__this, ___enumerable, method) (( void (*) (List_1_t246 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m15444_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m15445_gshared (List_1_t246 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m15445(__this, ___collection, method) (( void (*) (List_1_t246 *, Object_t*, const MethodInfo*))List_1_AddRange_m15445_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Byte>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2328 * List_1_AsReadOnly_m15446_gshared (List_1_t246 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m15446(__this, method) (( ReadOnlyCollection_1_t2328 * (*) (List_1_t246 *, const MethodInfo*))List_1_AsReadOnly_m15446_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Clear()
extern "C" void List_1_Clear_m15447_gshared (List_1_t246 * __this, const MethodInfo* method);
#define List_1_Clear_m15447(__this, method) (( void (*) (List_1_t246 *, const MethodInfo*))List_1_Clear_m15447_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::Contains(T)
extern "C" bool List_1_Contains_m15448_gshared (List_1_t246 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_Contains_m15448(__this, ___item, method) (( bool (*) (List_1_t246 *, uint8_t, const MethodInfo*))List_1_Contains_m15448_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m15449_gshared (List_1_t246 * __this, ByteU5BU5D_t21* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m15449(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t246 *, ByteU5BU5D_t21*, int32_t, const MethodInfo*))List_1_CopyTo_m15449_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Byte>::Find(System.Predicate`1<T>)
extern "C" uint8_t List_1_Find_m15450_gshared (List_1_t246 * __this, Predicate_1_t2331 * ___match, const MethodInfo* method);
#define List_1_Find_m15450(__this, ___match, method) (( uint8_t (*) (List_1_t246 *, Predicate_1_t2331 *, const MethodInfo*))List_1_Find_m15450_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m15451_gshared (Object_t * __this /* static, unused */, Predicate_1_t2331 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m15451(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2331 *, const MethodInfo*))List_1_CheckMatch_m15451_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m15452_gshared (List_1_t246 * __this, Predicate_1_t2331 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m15452(__this, ___match, method) (( int32_t (*) (List_1_t246 *, Predicate_1_t2331 *, const MethodInfo*))List_1_FindIndex_m15452_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m15453_gshared (List_1_t246 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2331 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m15453(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t246 *, int32_t, int32_t, Predicate_1_t2331 *, const MethodInfo*))List_1_GetIndex_m15453_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Byte>::GetEnumerator()
extern "C" Enumerator_t2327  List_1_GetEnumerator_m15454_gshared (List_1_t246 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m15454(__this, method) (( Enumerator_t2327  (*) (List_1_t246 *, const MethodInfo*))List_1_GetEnumerator_m15454_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m15455_gshared (List_1_t246 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m15455(__this, ___item, method) (( int32_t (*) (List_1_t246 *, uint8_t, const MethodInfo*))List_1_IndexOf_m15455_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m15456_gshared (List_1_t246 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m15456(__this, ___start, ___delta, method) (( void (*) (List_1_t246 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m15456_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m15457_gshared (List_1_t246 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m15457(__this, ___index, method) (( void (*) (List_1_t246 *, int32_t, const MethodInfo*))List_1_CheckIndex_m15457_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m15458_gshared (List_1_t246 * __this, int32_t ___index, uint8_t ___item, const MethodInfo* method);
#define List_1_Insert_m15458(__this, ___index, ___item, method) (( void (*) (List_1_t246 *, int32_t, uint8_t, const MethodInfo*))List_1_Insert_m15458_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m15459_gshared (List_1_t246 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m15459(__this, ___collection, method) (( void (*) (List_1_t246 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m15459_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte>::Remove(T)
extern "C" bool List_1_Remove_m15460_gshared (List_1_t246 * __this, uint8_t ___item, const MethodInfo* method);
#define List_1_Remove_m15460(__this, ___item, method) (( bool (*) (List_1_t246 *, uint8_t, const MethodInfo*))List_1_Remove_m15460_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m15461_gshared (List_1_t246 * __this, Predicate_1_t2331 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m15461(__this, ___match, method) (( int32_t (*) (List_1_t246 *, Predicate_1_t2331 *, const MethodInfo*))List_1_RemoveAll_m15461_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m15462_gshared (List_1_t246 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m15462(__this, ___index, method) (( void (*) (List_1_t246 *, int32_t, const MethodInfo*))List_1_RemoveAt_m15462_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Reverse()
extern "C" void List_1_Reverse_m15463_gshared (List_1_t246 * __this, const MethodInfo* method);
#define List_1_Reverse_m15463(__this, method) (( void (*) (List_1_t246 *, const MethodInfo*))List_1_Reverse_m15463_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Sort()
extern "C" void List_1_Sort_m15464_gshared (List_1_t246 * __this, const MethodInfo* method);
#define List_1_Sort_m15464(__this, method) (( void (*) (List_1_t246 *, const MethodInfo*))List_1_Sort_m15464_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m15465_gshared (List_1_t246 * __this, Comparison_1_t2335 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m15465(__this, ___comparison, method) (( void (*) (List_1_t246 *, Comparison_1_t2335 *, const MethodInfo*))List_1_Sort_m15465_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Byte>::ToArray()
extern "C" ByteU5BU5D_t21* List_1_ToArray_m1013_gshared (List_1_t246 * __this, const MethodInfo* method);
#define List_1_ToArray_m1013(__this, method) (( ByteU5BU5D_t21* (*) (List_1_t246 *, const MethodInfo*))List_1_ToArray_m1013_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::TrimExcess()
extern "C" void List_1_TrimExcess_m15466_gshared (List_1_t246 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m15466(__this, method) (( void (*) (List_1_t246 *, const MethodInfo*))List_1_TrimExcess_m15466_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m15467_gshared (List_1_t246 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m15467(__this, method) (( int32_t (*) (List_1_t246 *, const MethodInfo*))List_1_get_Capacity_m15467_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m15468_gshared (List_1_t246 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m15468(__this, ___value, method) (( void (*) (List_1_t246 *, int32_t, const MethodInfo*))List_1_set_Capacity_m15468_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte>::get_Count()
extern "C" int32_t List_1_get_Count_m15469_gshared (List_1_t246 * __this, const MethodInfo* method);
#define List_1_get_Count_m15469(__this, method) (( int32_t (*) (List_1_t246 *, const MethodInfo*))List_1_get_Count_m15469_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Byte>::get_Item(System.Int32)
extern "C" uint8_t List_1_get_Item_m15470_gshared (List_1_t246 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m15470(__this, ___index, method) (( uint8_t (*) (List_1_t246 *, int32_t, const MethodInfo*))List_1_get_Item_m15470_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m15471_gshared (List_1_t246 * __this, int32_t ___index, uint8_t ___value, const MethodInfo* method);
#define List_1_set_Item_m15471(__this, ___index, ___value, method) (( void (*) (List_1_t246 *, int32_t, uint8_t, const MethodInfo*))List_1_set_Item_m15471_gshared)(__this, ___index, ___value, method)
