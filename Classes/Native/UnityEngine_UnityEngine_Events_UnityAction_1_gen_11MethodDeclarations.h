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

// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t2583;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t98;
// System.AsyncCallback
struct AsyncCallback_t99;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m19054_gshared (UnityAction_1_t2583 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m19054(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t2583 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m19054_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m19055_gshared (UnityAction_1_t2583 * __this, Vector2_t162  ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m19055(__this, ___arg0, method) (( void (*) (UnityAction_1_t2583 *, Vector2_t162 , const MethodInfo*))UnityAction_1_Invoke_m19055_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m19056_gshared (UnityAction_1_t2583 * __this, Vector2_t162  ___arg0, AsyncCallback_t99 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m19056(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t2583 *, Vector2_t162 , AsyncCallback_t99 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m19056_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m19057_gshared (UnityAction_1_t2583 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m19057(__this, ___result, method) (( void (*) (UnityAction_1_t2583 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m19057_gshared)(__this, ___result, method)
