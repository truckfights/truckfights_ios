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

// System.Predicate`1<UnityEngine.Vector2>
struct Predicate_1_t2654;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t98;
// System.AsyncCallback
struct AsyncCallback_t99;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Predicate`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m20159_gshared (Predicate_1_t2654 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m20159(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2654 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m20159_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector2>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m20160_gshared (Predicate_1_t2654 * __this, Vector2_t162  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m20160(__this, ___obj, method) (( bool (*) (Predicate_1_t2654 *, Vector2_t162 , const MethodInfo*))Predicate_1_Invoke_m20160_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Vector2>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m20161_gshared (Predicate_1_t2654 * __this, Vector2_t162  ___obj, AsyncCallback_t99 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m20161(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2654 *, Vector2_t162 , AsyncCallback_t99 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m20161_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m20162_gshared (Predicate_1_t2654 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m20162(__this, ___result, method) (( bool (*) (Predicate_1_t2654 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m20162_gshared)(__this, ___result, method)
