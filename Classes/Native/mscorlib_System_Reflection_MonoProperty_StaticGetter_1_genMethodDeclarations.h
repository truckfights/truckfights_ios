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

// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
struct StaticGetter_1_t2957;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t98;
// System.AsyncCallback
struct AsyncCallback_t99;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MonoProperty/StaticGetter`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void StaticGetter_1__ctor_m23864_gshared (StaticGetter_1_t2957 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define StaticGetter_1__ctor_m23864(__this, ___object, ___method, method) (( void (*) (StaticGetter_1_t2957 *, Object_t *, IntPtr_t, const MethodInfo*))StaticGetter_1__ctor_m23864_gshared)(__this, ___object, ___method, method)
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::Invoke()
extern "C" Object_t * StaticGetter_1_Invoke_m23865_gshared (StaticGetter_1_t2957 * __this, const MethodInfo* method);
#define StaticGetter_1_Invoke_m23865(__this, method) (( Object_t * (*) (StaticGetter_1_t2957 *, const MethodInfo*))StaticGetter_1_Invoke_m23865_gshared)(__this, method)
// System.IAsyncResult System.Reflection.MonoProperty/StaticGetter`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * StaticGetter_1_BeginInvoke_m23866_gshared (StaticGetter_1_t2957 * __this, AsyncCallback_t99 * ___callback, Object_t * ___object, const MethodInfo* method);
#define StaticGetter_1_BeginInvoke_m23866(__this, ___callback, ___object, method) (( Object_t * (*) (StaticGetter_1_t2957 *, AsyncCallback_t99 *, Object_t *, const MethodInfo*))StaticGetter_1_BeginInvoke_m23866_gshared)(__this, ___callback, ___object, method)
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * StaticGetter_1_EndInvoke_m23867_gshared (StaticGetter_1_t2957 * __this, Object_t * ___result, const MethodInfo* method);
#define StaticGetter_1_EndInvoke_m23867(__this, ___result, method) (( Object_t * (*) (StaticGetter_1_t2957 *, Object_t *, const MethodInfo*))StaticGetter_1_EndInvoke_m23867_gshared)(__this, ___result, method)
