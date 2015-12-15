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

// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
struct DispatcherFactory_t998;
// System.Object
struct Object_t;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t999;
// System.IAsyncResult
struct IAsyncResult_t98;
// System.AsyncCallback
struct AsyncCallback_t99;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_Dispatcher.h"

// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::.ctor(System.Object,System.IntPtr)
extern "C" void DispatcherFactory__ctor_m5409 (DispatcherFactory_t998 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::Invoke()
extern "C" Dispatcher_t999 * DispatcherFactory_Invoke_m5410 (DispatcherFactory_t998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Dispatcher_t999 * pinvoke_delegate_wrapper_DispatcherFactory_t998(Il2CppObject* delegate);
// System.IAsyncResult Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * DispatcherFactory_BeginInvoke_m5411 (DispatcherFactory_t998 * __this, AsyncCallback_t99 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::EndInvoke(System.IAsyncResult)
extern "C" Dispatcher_t999 * DispatcherFactory_EndInvoke_m5412 (DispatcherFactory_t998 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
