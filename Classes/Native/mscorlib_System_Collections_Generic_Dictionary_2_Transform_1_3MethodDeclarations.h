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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Byte>
struct Transform_1_t2180;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t98;
// System.AsyncCallback
struct AsyncCallback_t99;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m13420_gshared (Transform_1_t2180 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m13420(__this, ___object, ___method, method) (( void (*) (Transform_1_t2180 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m13420_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Byte>::Invoke(TKey,TValue)
extern "C" uint8_t Transform_1_Invoke_m13421_gshared (Transform_1_t2180 * __this, uint8_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m13421(__this, ___key, ___value, method) (( uint8_t (*) (Transform_1_t2180 *, uint8_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m13421_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Byte>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m13422_gshared (Transform_1_t2180 * __this, uint8_t ___key, Object_t * ___value, AsyncCallback_t99 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m13422(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2180 *, uint8_t, Object_t *, AsyncCallback_t99 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m13422_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" uint8_t Transform_1_EndInvoke_m13423_gshared (Transform_1_t2180 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m13423(__this, ___result, method) (( uint8_t (*) (Transform_1_t2180 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m13423_gshared)(__this, ___result, method)
