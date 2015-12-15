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

// System.Func`1<System.Object>
struct Func_1_t2894;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t98;
// System.AsyncCallback
struct AsyncCallback_t99;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_1__ctor_m23299_gshared (Func_1_t2894 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_1__ctor_m23299(__this, ___object, ___method, method) (( void (*) (Func_1_t2894 *, Object_t *, IntPtr_t, const MethodInfo*))Func_1__ctor_m23299_gshared)(__this, ___object, ___method, method)
// TResult System.Func`1<System.Object>::Invoke()
extern "C" Object_t * Func_1_Invoke_m23300_gshared (Func_1_t2894 * __this, const MethodInfo* method);
#define Func_1_Invoke_m23300(__this, method) (( Object_t * (*) (Func_1_t2894 *, const MethodInfo*))Func_1_Invoke_m23300_gshared)(__this, method)
// System.IAsyncResult System.Func`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * Func_1_BeginInvoke_m23301_gshared (Func_1_t2894 * __this, AsyncCallback_t99 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_1_BeginInvoke_m23301(__this, ___callback, ___object, method) (( Object_t * (*) (Func_1_t2894 *, AsyncCallback_t99 *, Object_t *, const MethodInfo*))Func_1_BeginInvoke_m23301_gshared)(__this, ___callback, ___object, method)
// TResult System.Func`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_1_EndInvoke_m23302_gshared (Func_1_t2894 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_1_EndInvoke_m23302(__this, ___result, method) (( Object_t * (*) (Func_1_t2894 *, Object_t *, const MethodInfo*))Func_1_EndInvoke_m23302_gshared)(__this, ___result, method)
