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

// System.Reflection.TargetInvocationException
struct TargetInvocationException_t1685;
// System.Exception
struct Exception_t118;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t862;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.TargetInvocationException::.ctor(System.Exception)
extern "C" void TargetInvocationException__ctor_m10460 (TargetInvocationException_t1685 * __this, Exception_t118 * ___inner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.TargetInvocationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TargetInvocationException__ctor_m10461 (TargetInvocationException_t1685 * __this, SerializationInfo_t862 * ___info, StreamingContext_t863  ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
