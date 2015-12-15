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

// ExitGames.Client.Photon.SerializeMethod
struct SerializeMethod_t944;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.IAsyncResult
struct IAsyncResult_t98;
// System.AsyncCallback
struct AsyncCallback_t99;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Byte.h"

// System.Void ExitGames.Client.Photon.SerializeMethod::.ctor(System.Object,System.IntPtr)
extern "C" void SerializeMethod__ctor_m5094 (SerializeMethod_t944 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.SerializeMethod::Invoke(System.Object)
extern "C" ByteU5BU5D_t21* SerializeMethod_Invoke_m5095 (SerializeMethod_t944 * __this, Object_t * ___customObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" ByteU5BU5D_t21* pinvoke_delegate_wrapper_SerializeMethod_t944(Il2CppObject* delegate, Object_t * ___customObject);
// System.IAsyncResult ExitGames.Client.Photon.SerializeMethod::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * SerializeMethod_BeginInvoke_m5096 (SerializeMethod_t944 * __this, Object_t * ___customObject, AsyncCallback_t99 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.SerializeMethod::EndInvoke(System.IAsyncResult)
extern "C" ByteU5BU5D_t21* SerializeMethod_EndInvoke_m5097 (SerializeMethod_t944 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
