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

// System.Predicate`1<UnityEngine.Vector4>
struct Predicate_1_t2665;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t98;
// System.AsyncCallback
struct AsyncCallback_t99;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void System.Predicate`1<UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m20310_gshared (Predicate_1_t2665 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m20310(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2665 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m20310_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector4>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m20311_gshared (Predicate_1_t2665 * __this, Vector4_t537  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m20311(__this, ___obj, method) (( bool (*) (Predicate_1_t2665 *, Vector4_t537 , const MethodInfo*))Predicate_1_Invoke_m20311_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Vector4>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m20312_gshared (Predicate_1_t2665 * __this, Vector4_t537  ___obj, AsyncCallback_t99 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m20312(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2665 *, Vector4_t537 , AsyncCallback_t99 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m20312_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector4>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m20313_gshared (Predicate_1_t2665 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m20313(__this, ___result, method) (( bool (*) (Predicate_1_t2665 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m20313_gshared)(__this, ___result, method)
