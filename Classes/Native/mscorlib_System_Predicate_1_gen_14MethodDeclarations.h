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

// System.Predicate`1<System.Single>
struct Predicate_1_t2378;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t98;
// System.AsyncCallback
struct AsyncCallback_t99;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m16248_gshared (Predicate_1_t2378 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m16248(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2378 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m16248_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Single>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m16249_gshared (Predicate_1_t2378 * __this, float ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m16249(__this, ___obj, method) (( bool (*) (Predicate_1_t2378 *, float, const MethodInfo*))Predicate_1_Invoke_m16249_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m16250_gshared (Predicate_1_t2378 * __this, float ___obj, AsyncCallback_t99 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m16250(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2378 *, float, AsyncCallback_t99 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m16250_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m16251_gshared (Predicate_1_t2378 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m16251(__this, ___result, method) (( bool (*) (Predicate_1_t2378 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m16251_gshared)(__this, ___result, method)
