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

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t1341;
// System.AsyncCallback
struct AsyncCallback_t99;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.IO.Stream
struct Stream_t1342;
// System.Exception
struct Exception_t118;
// System.Threading.WaitHandle
struct WaitHandle_t1387;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m7217 (ReceiveRecordAsyncResult_t1341 * __this, AsyncCallback_t99 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t21* ___initialBuffer, Stream_t1342 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t1342 * ReceiveRecordAsyncResult_get_Record_m7218 (ReceiveRecordAsyncResult_t1341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t21* ReceiveRecordAsyncResult_get_ResultingBuffer_m7219 (ReceiveRecordAsyncResult_t1341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t21* ReceiveRecordAsyncResult_get_InitialBuffer_m7220 (ReceiveRecordAsyncResult_t1341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m7221 (ReceiveRecordAsyncResult_t1341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t118 * ReceiveRecordAsyncResult_get_AsyncException_m7222 (ReceiveRecordAsyncResult_t1341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m7223 (ReceiveRecordAsyncResult_t1341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1387 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m7224 (ReceiveRecordAsyncResult_t1341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m7225 (ReceiveRecordAsyncResult_t1341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m7226 (ReceiveRecordAsyncResult_t1341 * __this, Exception_t118 * ___ex, ByteU5BU5D_t21* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m7227 (ReceiveRecordAsyncResult_t1341 * __this, Exception_t118 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m7228 (ReceiveRecordAsyncResult_t1341 * __this, ByteU5BU5D_t21* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
