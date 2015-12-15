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

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t329;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t98;
// System.AsyncCallback
struct AsyncCallback_t99;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m2841_gshared (Comparison_1_t329 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m2841(__this, ___object, ___method, method) (( void (*) (Comparison_1_t329 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m2841_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m16637_gshared (Comparison_1_t329 * __this, RaycastResult_t360  ___x, RaycastResult_t360  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m16637(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t329 *, RaycastResult_t360 , RaycastResult_t360 , const MethodInfo*))Comparison_1_Invoke_m16637_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m16638_gshared (Comparison_1_t329 * __this, RaycastResult_t360  ___x, RaycastResult_t360  ___y, AsyncCallback_t99 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m16638(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t329 *, RaycastResult_t360 , RaycastResult_t360 , AsyncCallback_t99 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m16638_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m16639_gshared (Comparison_1_t329 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m16639(__this, ___result, method) (( int32_t (*) (Comparison_1_t329 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m16639_gshared)(__this, ___result, method)
