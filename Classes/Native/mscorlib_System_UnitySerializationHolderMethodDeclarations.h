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

// System.UnitySerializationHolder
struct UnitySerializationHolder_t2039;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t862;
// System.Type
struct Type_t;
// System.DBNull
struct DBNull_t1981;
// System.Reflection.Module
struct Module_t1620;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder__ctor_m12725 (UnitySerializationHolder_t2039 * __this, SerializationInfo_t862 * ___info, StreamingContext_t863  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetTypeData_m12726 (Object_t * __this /* static, unused */, Type_t * ___instance, SerializationInfo_t862 * ___info, StreamingContext_t863  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetDBNullData_m12727 (Object_t * __this /* static, unused */, DBNull_t1981 * ___instance, SerializationInfo_t862 * ___info, StreamingContext_t863  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetModuleData_m12728 (Object_t * __this /* static, unused */, Module_t1620 * ___instance, SerializationInfo_t862 * ___info, StreamingContext_t863  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetObjectData_m12729 (UnitySerializationHolder_t2039 * __this, SerializationInfo_t862 * ___info, StreamingContext_t863  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" Object_t * UnitySerializationHolder_GetRealObject_m12730 (UnitySerializationHolder_t2039 * __this, StreamingContext_t863  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
