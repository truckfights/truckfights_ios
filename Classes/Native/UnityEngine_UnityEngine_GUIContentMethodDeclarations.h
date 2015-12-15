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

// UnityEngine.GUIContent
struct GUIContent_t749;
// System.String
struct String_t;
// UnityEngine.GUIContent[]
struct GUIContentU5BU5D_t859;
// System.String[]
struct StringU5BU5D_t65;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.GUIContent::.ctor()
extern "C" void GUIContent__ctor_m4217 (GUIContent_t749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::.ctor(System.String)
extern "C" void GUIContent__ctor_m4218 (GUIContent_t749 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::.ctor(UnityEngine.GUIContent)
extern "C" void GUIContent__ctor_m4219 (GUIContent_t749 * __this, GUIContent_t749 * ___src, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::.cctor()
extern "C" void GUIContent__cctor_m4220 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIContent::get_text()
extern "C" String_t* GUIContent_get_text_m4221 (GUIContent_t749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::set_text(System.String)
extern "C" void GUIContent_set_text_m4222 (GUIContent_t749 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIContent::get_tooltip()
extern "C" String_t* GUIContent_get_tooltip_m4223 (GUIContent_t749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIContent UnityEngine.GUIContent::Temp(System.String)
extern "C" GUIContent_t749 * GUIContent_Temp_m4224 (Object_t * __this /* static, unused */, String_t* ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::ClearStaticCache()
extern "C" void GUIContent_ClearStaticCache_m4225 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIContent[] UnityEngine.GUIContent::Temp(System.String[])
extern "C" GUIContentU5BU5D_t859* GUIContent_Temp_m4226 (Object_t * __this /* static, unused */, StringU5BU5D_t65* ___texts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
