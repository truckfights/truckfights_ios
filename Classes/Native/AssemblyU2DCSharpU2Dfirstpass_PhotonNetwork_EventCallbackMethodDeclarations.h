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

// PhotonNetwork/EventCallback
struct EventCallback_t96;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t98;
// System.AsyncCallback
struct AsyncCallback_t99;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void PhotonNetwork/EventCallback::.ctor(System.Object,System.IntPtr)
extern "C" void EventCallback__ctor_m405 (EventCallback_t96 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork/EventCallback::Invoke(System.Byte,System.Object,System.Int32)
extern "C" void EventCallback_Invoke_m406 (EventCallback_t96 * __this, uint8_t ___eventCode, Object_t * ___content, int32_t ___senderId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_EventCallback_t96(Il2CppObject* delegate, uint8_t ___eventCode, Object_t * ___content, int32_t ___senderId);
// System.IAsyncResult PhotonNetwork/EventCallback::BeginInvoke(System.Byte,System.Object,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * EventCallback_BeginInvoke_m407 (EventCallback_t96 * __this, uint8_t ___eventCode, Object_t * ___content, int32_t ___senderId, AsyncCallback_t99 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork/EventCallback::EndInvoke(System.IAsyncResult)
extern "C" void EventCallback_EndInvoke_m408 (EventCallback_t96 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
