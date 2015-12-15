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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Single>
struct DefaultComparer_t2377;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Single>::.ctor()
extern "C" void DefaultComparer__ctor_m16245_gshared (DefaultComparer_t2377 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m16245(__this, method) (( void (*) (DefaultComparer_t2377 *, const MethodInfo*))DefaultComparer__ctor_m16245_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Single>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m16246_gshared (DefaultComparer_t2377 * __this, float ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m16246(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2377 *, float, const MethodInfo*))DefaultComparer_GetHashCode_m16246_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Single>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m16247_gshared (DefaultComparer_t2377 * __this, float ___x, float ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m16247(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2377 *, float, float, const MethodInfo*))DefaultComparer_Equals_m16247_gshared)(__this, ___x, ___y, method)
