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

// WebRpcResponse
struct WebRpcResponse_t86;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t200;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t87;

#include "codegen/il2cpp-codegen.h"

// System.Void WebRpcResponse::.ctor(ExitGames.Client.Photon.OperationResponse)
extern "C" void WebRpcResponse__ctor_m365 (WebRpcResponse_t86 * __this, OperationResponse_t200 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebRpcResponse::get_Name()
extern "C" String_t* WebRpcResponse_get_Name_m366 (WebRpcResponse_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebRpcResponse::set_Name(System.String)
extern "C" void WebRpcResponse_set_Name_m367 (WebRpcResponse_t86 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebRpcResponse::get_ReturnCode()
extern "C" int32_t WebRpcResponse_get_ReturnCode_m368 (WebRpcResponse_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebRpcResponse::set_ReturnCode(System.Int32)
extern "C" void WebRpcResponse_set_ReturnCode_m369 (WebRpcResponse_t86 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebRpcResponse::get_DebugMessage()
extern "C" String_t* WebRpcResponse_get_DebugMessage_m370 (WebRpcResponse_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebRpcResponse::set_DebugMessage(System.String)
extern "C" void WebRpcResponse_set_DebugMessage_m371 (WebRpcResponse_t86 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> WebRpcResponse::get_Parameters()
extern "C" Dictionary_2_t87 * WebRpcResponse_get_Parameters_m372 (WebRpcResponse_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebRpcResponse::set_Parameters(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void WebRpcResponse_set_Parameters_m373 (WebRpcResponse_t86 * __this, Dictionary_2_t87 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebRpcResponse::ToStringFull()
extern "C" String_t* WebRpcResponse_ToStringFull_m374 (WebRpcResponse_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
