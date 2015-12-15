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

// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t2826;
// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t2825;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T)
extern "C" void LinkedListNode_1__ctor_m22257_gshared (LinkedListNode_1_t2826 * __this, LinkedList_1_t2825 * ___list, Object_t * ___value, const MethodInfo* method);
#define LinkedListNode_1__ctor_m22257(__this, ___list, ___value, method) (( void (*) (LinkedListNode_1_t2826 *, LinkedList_1_t2825 *, Object_t *, const MethodInfo*))LinkedListNode_1__ctor_m22257_gshared)(__this, ___list, ___value, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T,System.Collections.Generic.LinkedListNode`1<T>,System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedListNode_1__ctor_m22258_gshared (LinkedListNode_1_t2826 * __this, LinkedList_1_t2825 * ___list, Object_t * ___value, LinkedListNode_1_t2826 * ___previousNode, LinkedListNode_1_t2826 * ___nextNode, const MethodInfo* method);
#define LinkedListNode_1__ctor_m22258(__this, ___list, ___value, ___previousNode, ___nextNode, method) (( void (*) (LinkedListNode_1_t2826 *, LinkedList_1_t2825 *, Object_t *, LinkedListNode_1_t2826 *, LinkedListNode_1_t2826 *, const MethodInfo*))LinkedListNode_1__ctor_m22258_gshared)(__this, ___list, ___value, ___previousNode, ___nextNode, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::Detach()
extern "C" void LinkedListNode_1_Detach_m22259_gshared (LinkedListNode_1_t2826 * __this, const MethodInfo* method);
#define LinkedListNode_1_Detach_m22259(__this, method) (( void (*) (LinkedListNode_1_t2826 *, const MethodInfo*))LinkedListNode_1_Detach_m22259_gshared)(__this, method)
// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_List()
extern "C" LinkedList_1_t2825 * LinkedListNode_1_get_List_m22260_gshared (LinkedListNode_1_t2826 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_List_m22260(__this, method) (( LinkedList_1_t2825 * (*) (LinkedListNode_1_t2826 *, const MethodInfo*))LinkedListNode_1_get_List_m22260_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_Next()
extern "C" LinkedListNode_1_t2826 * LinkedListNode_1_get_Next_m22261_gshared (LinkedListNode_1_t2826 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Next_m22261(__this, method) (( LinkedListNode_1_t2826 * (*) (LinkedListNode_1_t2826 *, const MethodInfo*))LinkedListNode_1_get_Next_m22261_gshared)(__this, method)
// T System.Collections.Generic.LinkedListNode`1<System.Object>::get_Value()
extern "C" Object_t * LinkedListNode_1_get_Value_m22262_gshared (LinkedListNode_1_t2826 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Value_m22262(__this, method) (( Object_t * (*) (LinkedListNode_1_t2826 *, const MethodInfo*))LinkedListNode_1_get_Value_m22262_gshared)(__this, method)
