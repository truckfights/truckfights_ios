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

// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t999;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t111;
// System.IAsyncResult
struct IAsyncResult_t98;
// System.AsyncCallback
struct AsyncCallback_t99;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Object.h"

// System.Void Boo.Lang.Runtime.DynamicDispatching.Dispatcher::.ctor(System.Object,System.IntPtr)
extern "C" void Dispatcher__ctor_m5460 (Dispatcher_t999 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.DynamicDispatching.Dispatcher::Invoke(System.Object,System.Object[])
extern "C" Object_t * Dispatcher_Invoke_m5461 (Dispatcher_t999 * __this, Object_t * ___target, ObjectU5BU5D_t111* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Object_t * pinvoke_delegate_wrapper_Dispatcher_t999(Il2CppObject* delegate, Object_t * ___target, ObjectU5BU5D_t111* ___args);
// System.IAsyncResult Boo.Lang.Runtime.DynamicDispatching.Dispatcher::BeginInvoke(System.Object,System.Object[],System.AsyncCallback,System.Object)
extern "C" Object_t * Dispatcher_BeginInvoke_m5462 (Dispatcher_t999 * __this, Object_t * ___target, ObjectU5BU5D_t111* ___args, AsyncCallback_t99 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.DynamicDispatching.Dispatcher::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Dispatcher_EndInvoke_m5463 (Dispatcher_t999 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
