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

// System.Collections.Generic.Dictionary`2/Transform`1<PunTeams/Team,System.Object,System.Object>
struct Transform_1_t2398;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t98;
// System.AsyncCallback
struct AsyncCallback_t99;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "AssemblyU2DCSharpU2Dfirstpass_PunTeams_Team.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<PunTeams/Team,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m16433_gshared (Transform_1_t2398 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m16433(__this, ___object, ___method, method) (( void (*) (Transform_1_t2398 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m16433_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<PunTeams/Team,System.Object,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m16434_gshared (Transform_1_t2398 * __this, uint8_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m16434(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t2398 *, uint8_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m16434_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<PunTeams/Team,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m16435_gshared (Transform_1_t2398 * __this, uint8_t ___key, Object_t * ___value, AsyncCallback_t99 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m16435(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2398 *, uint8_t, Object_t *, AsyncCallback_t99 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m16435_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<PunTeams/Team,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m16436_gshared (Transform_1_t2398 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m16436(__this, ___result, method) (( Object_t * (*) (Transform_1_t2398 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m16436_gshared)(__this, ___result, method)
