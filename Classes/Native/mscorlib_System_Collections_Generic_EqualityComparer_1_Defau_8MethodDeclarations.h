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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>
struct DefaultComparer_t2643;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>::.ctor()
extern "C" void DefaultComparer__ctor_m20011_gshared (DefaultComparer_t2643 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m20011(__this, method) (( void (*) (DefaultComparer_t2643 *, const MethodInfo*))DefaultComparer__ctor_m20011_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m20012_gshared (DefaultComparer_t2643 * __this, Color32_t567  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m20012(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2643 *, Color32_t567 , const MethodInfo*))DefaultComparer_GetHashCode_m20012_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Color32>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m20013_gshared (DefaultComparer_t2643 * __this, Color32_t567  ___x, Color32_t567  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m20013(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2643 *, Color32_t567 , Color32_t567 , const MethodInfo*))DefaultComparer_Equals_m20013_gshared)(__this, ___x, ___y, method)
