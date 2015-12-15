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

// ExitGames.Client.Photon.PeerBase/MyAction
struct MyAction_t907;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t98;
// System.AsyncCallback
struct AsyncCallback_t99;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void ExitGames.Client.Photon.PeerBase/MyAction::.ctor(System.Object,System.IntPtr)
extern "C" void MyAction__ctor_m4944 (MyAction_t907 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase/MyAction::Invoke()
extern "C" void MyAction_Invoke_m4945 (MyAction_t907 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_MyAction_t907(Il2CppObject* delegate);
// System.IAsyncResult ExitGames.Client.Photon.PeerBase/MyAction::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * MyAction_BeginInvoke_m4946 (MyAction_t907 * __this, AsyncCallback_t99 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase/MyAction::EndInvoke(System.IAsyncResult)
extern "C" void MyAction_EndInvoke_m4947 (MyAction_t907 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
