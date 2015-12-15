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

// System.Func`1<System.Boolean>
struct Func_1_t254;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t98;
// System.AsyncCallback
struct AsyncCallback_t99;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_1__ctor_m1038_gshared (Func_1_t254 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_1__ctor_m1038(__this, ___object, ___method, method) (( void (*) (Func_1_t254 *, Object_t *, IntPtr_t, const MethodInfo*))Func_1__ctor_m1038_gshared)(__this, ___object, ___method, method)
// TResult System.Func`1<System.Boolean>::Invoke()
extern "C" bool Func_1_Invoke_m5393_gshared (Func_1_t254 * __this, const MethodInfo* method);
#define Func_1_Invoke_m5393(__this, method) (( bool (*) (Func_1_t254 *, const MethodInfo*))Func_1_Invoke_m5393_gshared)(__this, method)
// System.IAsyncResult System.Func`1<System.Boolean>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * Func_1_BeginInvoke_m15660_gshared (Func_1_t254 * __this, AsyncCallback_t99 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_1_BeginInvoke_m15660(__this, ___callback, ___object, method) (( Object_t * (*) (Func_1_t254 *, AsyncCallback_t99 *, Object_t *, const MethodInfo*))Func_1_BeginInvoke_m15660_gshared)(__this, ___callback, ___object, method)
// TResult System.Func`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" bool Func_1_EndInvoke_m15661_gshared (Func_1_t254 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_1_EndInvoke_m15661(__this, ___result, method) (( bool (*) (Func_1_t254 *, Object_t *, const MethodInfo*))Func_1_EndInvoke_m15661_gshared)(__this, ___result, method)
