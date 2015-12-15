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

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t2489;
// System.Collections.IEnumerator
struct IEnumerator_t208;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2609;
// System.Object[]
struct ObjectU5BU5D_t111;
// System.Predicate`1<System.Object>
struct Predicate_1_t2142;
// System.Comparison`1<System.Object>
struct Comparison_1_t2148;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m17649_gshared (IndexedSet_1_t2489 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m17649(__this, method) (( void (*) (IndexedSet_1_t2489 *, const MethodInfo*))IndexedSet_1__ctor_m17649_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m17651_gshared (IndexedSet_1_t2489 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m17651(__this, method) (( Object_t * (*) (IndexedSet_1_t2489 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m17651_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m17653_gshared (IndexedSet_1_t2489 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m17653(__this, ___item, method) (( void (*) (IndexedSet_1_t2489 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m17653_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m17655_gshared (IndexedSet_1_t2489 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m17655(__this, ___item, method) (( bool (*) (IndexedSet_1_t2489 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m17655_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m17657_gshared (IndexedSet_1_t2489 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m17657(__this, method) (( Object_t* (*) (IndexedSet_1_t2489 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m17657_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m17659_gshared (IndexedSet_1_t2489 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m17659(__this, method) (( void (*) (IndexedSet_1_t2489 *, const MethodInfo*))IndexedSet_1_Clear_m17659_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m17661_gshared (IndexedSet_1_t2489 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m17661(__this, ___item, method) (( bool (*) (IndexedSet_1_t2489 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m17661_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m17663_gshared (IndexedSet_1_t2489 * __this, ObjectU5BU5D_t111* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m17663(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t2489 *, ObjectU5BU5D_t111*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m17663_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m17665_gshared (IndexedSet_1_t2489 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m17665(__this, method) (( int32_t (*) (IndexedSet_1_t2489 *, const MethodInfo*))IndexedSet_1_get_Count_m17665_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m17667_gshared (IndexedSet_1_t2489 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m17667(__this, method) (( bool (*) (IndexedSet_1_t2489 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m17667_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m17669_gshared (IndexedSet_1_t2489 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m17669(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t2489 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m17669_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m17671_gshared (IndexedSet_1_t2489 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m17671(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t2489 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m17671_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m17673_gshared (IndexedSet_1_t2489 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m17673(__this, ___index, method) (( void (*) (IndexedSet_1_t2489 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m17673_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m17675_gshared (IndexedSet_1_t2489 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m17675(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t2489 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m17675_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m17677_gshared (IndexedSet_1_t2489 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m17677(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t2489 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m17677_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m17678_gshared (IndexedSet_1_t2489 * __this, Predicate_1_t2142 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m17678(__this, ___match, method) (( void (*) (IndexedSet_1_t2489 *, Predicate_1_t2142 *, const MethodInfo*))IndexedSet_1_RemoveAll_m17678_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m17679_gshared (IndexedSet_1_t2489 * __this, Comparison_1_t2148 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m17679(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t2489 *, Comparison_1_t2148 *, const MethodInfo*))IndexedSet_1_Sort_m17679_gshared)(__this, ___sortLayoutFunction, method)
