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

// ExitGames.Client.Photon.CustomType
struct CustomType_t946;
// System.Type
struct Type_t;
// ExitGames.Client.Photon.SerializeStreamMethod
struct SerializeStreamMethod_t218;
// ExitGames.Client.Photon.DeserializeStreamMethod
struct DeserializeStreamMethod_t219;

#include "codegen/il2cpp-codegen.h"

// System.Void ExitGames.Client.Photon.CustomType::.ctor(System.Type,System.Byte,ExitGames.Client.Photon.SerializeStreamMethod,ExitGames.Client.Photon.DeserializeStreamMethod)
extern "C" void CustomType__ctor_m5108 (CustomType_t946 * __this, Type_t * ___type, uint8_t ___code, SerializeStreamMethod_t218 * ___serializeFunction, DeserializeStreamMethod_t219 * ___deserializeFunction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
