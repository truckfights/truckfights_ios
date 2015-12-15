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

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t2427;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2609;
// System.Collections.IEnumerator
struct IEnumerator_t208;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C" void Stack_1__ctor_m16756_gshared (Stack_1_t2427 * __this, const MethodInfo* method);
#define Stack_1__ctor_m16756(__this, method) (( void (*) (Stack_1_t2427 *, const MethodInfo*))Stack_1__ctor_m16756_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m16757_gshared (Stack_1_t2427 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_IsSynchronized_m16757(__this, method) (( bool (*) (Stack_1_t2427 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_IsSynchronized_m16757_gshared)(__this, method)
// System.Object System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m16758_gshared (Stack_1_t2427 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_SyncRoot_m16758(__this, method) (( Object_t * (*) (Stack_1_t2427 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_SyncRoot_m16758_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Stack_1_System_Collections_ICollection_CopyTo_m16759_gshared (Stack_1_t2427 * __this, Array_t * ___dest, int32_t ___idx, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_CopyTo_m16759(__this, ___dest, ___idx, method) (( void (*) (Stack_1_t2427 *, Array_t *, int32_t, const MethodInfo*))Stack_1_System_Collections_ICollection_CopyTo_m16759_gshared)(__this, ___dest, ___idx, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16760_gshared (Stack_1_t2427 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16760(__this, method) (( Object_t* (*) (Stack_1_t2427 *, const MethodInfo*))Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16760_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m16761_gshared (Stack_1_t2427 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_IEnumerable_GetEnumerator_m16761(__this, method) (( Object_t * (*) (Stack_1_t2427 *, const MethodInfo*))Stack_1_System_Collections_IEnumerable_GetEnumerator_m16761_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
extern "C" Object_t * Stack_1_Peek_m16762_gshared (Stack_1_t2427 * __this, const MethodInfo* method);
#define Stack_1_Peek_m16762(__this, method) (( Object_t * (*) (Stack_1_t2427 *, const MethodInfo*))Stack_1_Peek_m16762_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C" Object_t * Stack_1_Pop_m16763_gshared (Stack_1_t2427 * __this, const MethodInfo* method);
#define Stack_1_Pop_m16763(__this, method) (( Object_t * (*) (Stack_1_t2427 *, const MethodInfo*))Stack_1_Pop_m16763_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
extern "C" void Stack_1_Push_m16764_gshared (Stack_1_t2427 * __this, Object_t * ___t, const MethodInfo* method);
#define Stack_1_Push_m16764(__this, ___t, method) (( void (*) (Stack_1_t2427 *, Object_t *, const MethodInfo*))Stack_1_Push_m16764_gshared)(__this, ___t, method)
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C" int32_t Stack_1_get_Count_m16765_gshared (Stack_1_t2427 * __this, const MethodInfo* method);
#define Stack_1_get_Count_m16765(__this, method) (( int32_t (*) (Stack_1_t2427 *, const MethodInfo*))Stack_1_get_Count_m16765_gshared)(__this, method)
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2429  Stack_1_GetEnumerator_m16766_gshared (Stack_1_t2427 * __this, const MethodInfo* method);
#define Stack_1_GetEnumerator_m16766(__this, method) (( Enumerator_t2429  (*) (Stack_1_t2427 *, const MethodInfo*))Stack_1_GetEnumerator_m16766_gshared)(__this, method)
