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

// System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>
struct Predicate_1_t2950;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t98;
// System.AsyncCallback
struct AsyncCallback_t99;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Reflection_CustomAttributeNamedArgument.h"

// System.Void System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m23824_gshared (Predicate_1_t2950 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m23824(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2950 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m23824_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m23825_gshared (Predicate_1_t2950 * __this, CustomAttributeNamedArgument_t1661  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m23825(__this, ___obj, method) (( bool (*) (Predicate_1_t2950 *, CustomAttributeNamedArgument_t1661 , const MethodInfo*))Predicate_1_Invoke_m23825_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m23826_gshared (Predicate_1_t2950 * __this, CustomAttributeNamedArgument_t1661  ___obj, AsyncCallback_t99 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m23826(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2950 *, CustomAttributeNamedArgument_t1661 , AsyncCallback_t99 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m23826_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Reflection.CustomAttributeNamedArgument>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m23827_gshared (Predicate_1_t2950 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m23827(__this, ___result, method) (( bool (*) (Predicate_1_t2950 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m23827_gshared)(__this, ___result, method)
