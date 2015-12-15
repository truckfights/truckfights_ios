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

// ExitGames.Client.Photon.DeserializeMethod
struct DeserializeMethod_t945;
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

// System.Void ExitGames.Client.Photon.DeserializeMethod::.ctor(System.Object,System.IntPtr)
extern "C" void DeserializeMethod__ctor_m5101 (DeserializeMethod_t945 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.DeserializeMethod::Invoke(System.Byte[])
extern "C" Object_t * DeserializeMethod_Invoke_m5102 (DeserializeMethod_t945 * __this, ByteU5BU5D_t21* ___serializedCustomObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Object_t * pinvoke_delegate_wrapper_DeserializeMethod_t945(Il2CppObject* delegate, ByteU5BU5D_t21* ___serializedCustomObject);
// System.IAsyncResult ExitGames.Client.Photon.DeserializeMethod::BeginInvoke(System.Byte[],System.AsyncCallback,System.Object)
extern "C" Object_t * DeserializeMethod_BeginInvoke_m5103 (DeserializeMethod_t945 * __this, ByteU5BU5D_t21* ___serializedCustomObject, AsyncCallback_t99 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.DeserializeMethod::EndInvoke(System.IAsyncResult)
extern "C" Object_t * DeserializeMethod_EndInvoke_m5104 (DeserializeMethod_t945 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
