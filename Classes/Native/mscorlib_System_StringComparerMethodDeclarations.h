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

// System.StringComparer
struct StringComparer_t875;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.StringComparer::.ctor()
extern "C" void StringComparer__ctor_m12639 (StringComparer_t875 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.StringComparer::.cctor()
extern "C" void StringComparer__cctor_m12640 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.StringComparer System.StringComparer::get_InvariantCultureIgnoreCase()
extern "C" StringComparer_t875 * StringComparer_get_InvariantCultureIgnoreCase_m6530 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.StringComparer System.StringComparer::get_OrdinalIgnoreCase()
extern "C" StringComparer_t875 * StringComparer_get_OrdinalIgnoreCase_m4826 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.StringComparer::Compare(System.Object,System.Object)
extern "C" int32_t StringComparer_Compare_m12641 (StringComparer_t875 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.StringComparer::Equals(System.Object,System.Object)
extern "C" bool StringComparer_Equals_m12642 (StringComparer_t875 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.StringComparer::GetHashCode(System.Object)
extern "C" int32_t StringComparer_GetHashCode_m12643 (StringComparer_t875 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
