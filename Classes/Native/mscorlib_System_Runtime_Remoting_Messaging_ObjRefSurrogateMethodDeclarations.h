﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Runtime.Remoting.Messaging.ObjRefSurrogate
struct ObjRefSurrogate_t1784;
// System.Object
struct Object_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t862;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t1786;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Remoting.Messaging.ObjRefSurrogate::.ctor()
extern "C" void ObjRefSurrogate__ctor_m10785 (ObjRefSurrogate_t1784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.ObjRefSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
extern "C" Object_t * ObjRefSurrogate_SetObjectData_m10786 (ObjRefSurrogate_t1784 * __this, Object_t * ___obj, SerializationInfo_t862 * ___si, StreamingContext_t863  ___sc, Object_t * ___selector, const MethodInfo* method) IL2CPP_METHOD_ATTR;
