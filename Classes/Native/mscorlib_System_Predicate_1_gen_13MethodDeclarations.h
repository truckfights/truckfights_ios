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

// System.Predicate`1<System.Byte>
struct Predicate_1_t2331;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t98;
// System.AsyncCallback
struct AsyncCallback_t99;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m15545_gshared (Predicate_1_t2331 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m15545(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2331 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m15545_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Byte>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m15546_gshared (Predicate_1_t2331 * __this, uint8_t ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m15546(__this, ___obj, method) (( bool (*) (Predicate_1_t2331 *, uint8_t, const MethodInfo*))Predicate_1_Invoke_m15546_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m15547_gshared (Predicate_1_t2331 * __this, uint8_t ___obj, AsyncCallback_t99 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m15547(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2331 *, uint8_t, AsyncCallback_t99 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m15547_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m15548_gshared (Predicate_1_t2331 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m15548(__this, ___result, method) (( bool (*) (Predicate_1_t2331 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m15548_gshared)(__this, ___result, method)
