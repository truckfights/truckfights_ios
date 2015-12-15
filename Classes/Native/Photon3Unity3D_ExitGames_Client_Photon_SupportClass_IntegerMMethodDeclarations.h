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

// ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate
struct IntegerMillisecondsDelegate_t953;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t98;
// System.AsyncCallback
struct AsyncCallback_t99;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void IntegerMillisecondsDelegate__ctor_m5177 (IntegerMillisecondsDelegate_t953 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::Invoke()
extern "C" int32_t IntegerMillisecondsDelegate_Invoke_m5178 (IntegerMillisecondsDelegate_t953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t pinvoke_delegate_wrapper_IntegerMillisecondsDelegate_t953(Il2CppObject* delegate);
// System.IAsyncResult ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * IntegerMillisecondsDelegate_BeginInvoke_m5179 (IntegerMillisecondsDelegate_t953 * __this, AsyncCallback_t99 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::EndInvoke(System.IAsyncResult)
extern "C" int32_t IntegerMillisecondsDelegate_EndInvoke_m5180 (IntegerMillisecondsDelegate_t953 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
