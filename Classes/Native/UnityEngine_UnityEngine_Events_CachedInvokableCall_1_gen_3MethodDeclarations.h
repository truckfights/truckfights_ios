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

// UnityEngine.Events.CachedInvokableCall`1<System.Object>
struct CachedInvokableCall_1_t2798;
// UnityEngine.Object
struct Object_t238;
struct Object_t238_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t111;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m21850_gshared (CachedInvokableCall_1_t2798 * __this, Object_t238 * ___target, MethodInfo_t * ___theFunction, Object_t * ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m21850(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t2798 *, Object_t238 *, MethodInfo_t *, Object_t *, const MethodInfo*))CachedInvokableCall_1__ctor_m21850_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m21851_gshared (CachedInvokableCall_1_t2798 * __this, ObjectU5BU5D_t111* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m21851(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t2798 *, ObjectU5BU5D_t111*, const MethodInfo*))CachedInvokableCall_1_Invoke_m21851_gshared)(__this, ___args, method)
