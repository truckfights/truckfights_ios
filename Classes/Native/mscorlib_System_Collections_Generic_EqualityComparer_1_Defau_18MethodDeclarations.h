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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t2981;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m24060_gshared (DefaultComparer_t2981 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m24060(__this, method) (( void (*) (DefaultComparer_t2981 *, const MethodInfo*))DefaultComparer__ctor_m24060_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m24061_gshared (DefaultComparer_t2981 * __this, DateTimeOffset_t1984  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m24061(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2981 *, DateTimeOffset_t1984 , const MethodInfo*))DefaultComparer_GetHashCode_m24061_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m24062_gshared (DefaultComparer_t2981 * __this, DateTimeOffset_t1984  ___x, DateTimeOffset_t1984  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m24062(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2981 *, DateTimeOffset_t1984 , DateTimeOffset_t1984 , const MethodInfo*))DefaultComparer_Equals_m24062_gshared)(__this, ___x, ___y, method)
