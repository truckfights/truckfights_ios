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

// System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate
struct RenewalDelegate_t1755;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Lifetime.ILease
struct ILease_t1756;
// System.IAsyncResult
struct IAsyncResult_t98;
// System.AsyncCallback
struct AsyncCallback_t99;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void RenewalDelegate__ctor_m10657 (RenewalDelegate_t1755 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::Invoke(System.Runtime.Remoting.Lifetime.ILease)
extern "C" TimeSpan_t1116  RenewalDelegate_Invoke_m10658 (RenewalDelegate_t1755 * __this, Object_t * ___lease, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" TimeSpan_t1116  pinvoke_delegate_wrapper_RenewalDelegate_t1755(Il2CppObject* delegate, Object_t * ___lease);
// System.IAsyncResult System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::BeginInvoke(System.Runtime.Remoting.Lifetime.ILease,System.AsyncCallback,System.Object)
extern "C" Object_t * RenewalDelegate_BeginInvoke_m10659 (RenewalDelegate_t1755 * __this, Object_t * ___lease, AsyncCallback_t99 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::EndInvoke(System.IAsyncResult)
extern "C" TimeSpan_t1116  RenewalDelegate_EndInvoke_m10660 (RenewalDelegate_t1755 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
