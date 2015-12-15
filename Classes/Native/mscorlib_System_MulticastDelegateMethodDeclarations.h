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

// System.MulticastDelegate
struct MulticastDelegate_t97;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t862;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t2069;
// System.Delegate
struct Delegate_t593;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m8189 (MulticastDelegate_t97 * __this, SerializationInfo_t862 * ___info, StreamingContext_t863  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m8190 (MulticastDelegate_t97 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m8191 (MulticastDelegate_t97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t2069* MulticastDelegate_GetInvocationList_m8192 (MulticastDelegate_t97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t593 * MulticastDelegate_CombineImpl_m8193 (MulticastDelegate_t97 * __this, Delegate_t593 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m8194 (MulticastDelegate_t97 * __this, MulticastDelegate_t97 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t97 * MulticastDelegate_KPM_m8195 (Object_t * __this /* static, unused */, MulticastDelegate_t97 * ___needle, MulticastDelegate_t97 * ___haystack, MulticastDelegate_t97 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t593 * MulticastDelegate_RemoveImpl_m8196 (MulticastDelegate_t97 * __this, Delegate_t593 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
