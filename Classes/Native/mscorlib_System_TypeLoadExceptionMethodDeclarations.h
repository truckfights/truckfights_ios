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

// System.TypeLoadException
struct TypeLoadException_t1991;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t862;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.TypeLoadException::.ctor()
extern "C" void TypeLoadException__ctor_m12715 (TypeLoadException_t1991 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TypeLoadException::.ctor(System.String)
extern "C" void TypeLoadException__ctor_m12716 (TypeLoadException_t1991 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TypeLoadException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TypeLoadException__ctor_m12717 (TypeLoadException_t1991 * __this, SerializationInfo_t862 * ___info, StreamingContext_t863  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TypeLoadException::get_Message()
extern "C" String_t* TypeLoadException_get_Message_m12718 (TypeLoadException_t1991 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TypeLoadException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TypeLoadException_GetObjectData_m12719 (TypeLoadException_t1991 * __this, SerializationInfo_t862 * ___info, StreamingContext_t863  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
