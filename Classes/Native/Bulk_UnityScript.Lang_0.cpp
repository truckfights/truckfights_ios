#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// System.Array
struct Array_t;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array.h"
#include "UnityScript_Lang_U3CModuleU3E.h"
#include "UnityScript_Lang_U3CModuleU3EMethodDeclarations.h"
#include "UnityScript_Lang_UnityScript_Lang_Extensions.h"
#include "UnityScript_Lang_UnityScript_Lang_ExtensionsMethodDeclarations.h"
#include "mscorlib_System_Int32.h"
#include "mscorlib_System_ArrayMethodDeclarations.h"
#include "UnityScript_Lang_UnityScript_Lang_UnityBuiltins.h"
#include "UnityScript_Lang_UnityScript_Lang_UnityBuiltinsMethodDeclarations.h"
#include "mscorlib_System_Single.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityScript.Lang.Extensions::get_length(System.Array)
extern "C" int32_t Extensions_get_length_m1440 (Object_t * __this /* static, unused */, Array_t * ___a, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___a;
		NullCheck(L_0);
		int32_t L_1 = Array_get_Length_m1433(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single UnityScript.Lang.UnityBuiltins::parseFloat(System.Int32)
extern "C" float UnityBuiltins_parseFloat_m1456 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		return (((float)((float)L_0)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
