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

// System.Net.HttpWebRequest
struct HttpWebRequest_t1073;
// System.Uri
struct Uri_t217;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t862;
// System.Net.ServicePoint
struct ServicePoint_t1075;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
extern "C" void HttpWebRequest__ctor_m5655 (HttpWebRequest_t1073 * __this, Uri_t217 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest__ctor_m5656 (HttpWebRequest_t1073 * __this, SerializationInfo_t862 * ___serializationInfo, StreamingContext_t863  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.cctor()
extern "C" void HttpWebRequest__cctor_m5657 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m5658 (HttpWebRequest_t1073 * __this, SerializationInfo_t862 * ___serializationInfo, StreamingContext_t863  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_Address()
extern "C" Uri_t217 * HttpWebRequest_get_Address_m5659 (HttpWebRequest_t1073 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
extern "C" ServicePoint_t1075 * HttpWebRequest_get_ServicePoint_m5660 (HttpWebRequest_t1073 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
extern "C" ServicePoint_t1075 * HttpWebRequest_GetServicePoint_m5661 (HttpWebRequest_t1073 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_GetObjectData_m5662 (HttpWebRequest_t1073 * __this, SerializationInfo_t862 * ___serializationInfo, StreamingContext_t863  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
