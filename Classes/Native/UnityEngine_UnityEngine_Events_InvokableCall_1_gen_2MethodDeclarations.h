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

// UnityEngine.Events.InvokableCall`1<System.Int32>
struct InvokableCall_1_t2500;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t2499;
// System.Object[]
struct ObjectU5BU5D_t111;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m17888_gshared (InvokableCall_1_t2500 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m17888(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2500 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m17888_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m17889_gshared (InvokableCall_1_t2500 * __this, UnityAction_1_t2499 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m17889(__this, ___action, method) (( void (*) (InvokableCall_1_t2500 *, UnityAction_1_t2499 *, const MethodInfo*))InvokableCall_1__ctor_m17889_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m17890_gshared (InvokableCall_1_t2500 * __this, ObjectU5BU5D_t111* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m17890(__this, ___args, method) (( void (*) (InvokableCall_1_t2500 *, ObjectU5BU5D_t111*, const MethodInfo*))InvokableCall_1_Invoke_m17890_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Int32>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m17891_gshared (InvokableCall_1_t2500 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m17891(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2500 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m17891_gshared)(__this, ___targetObj, ___method, method)
