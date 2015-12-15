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

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t386;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t563;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t831;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
extern "C" void UnityEvent_1__ctor_m2947_gshared (UnityEvent_1_t386 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m2947(__this, method) (( void (*) (UnityEvent_1_t386 *, const MethodInfo*))UnityEvent_1__ctor_m2947_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m2949_gshared (UnityEvent_1_t386 * __this, UnityAction_1_t563 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m2949(__this, ___call, method) (( void (*) (UnityEvent_1_t386 *, UnityAction_1_t563 *, const MethodInfo*))UnityEvent_1_AddListener_m2949_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m3231_gshared (UnityEvent_1_t386 * __this, UnityAction_1_t563 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m3231(__this, ___call, method) (( void (*) (UnityEvent_1_t386 *, UnityAction_1_t563 *, const MethodInfo*))UnityEvent_1_RemoveListener_m3231_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Single>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m17639_gshared (UnityEvent_1_t386 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m17639(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t386 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m17639_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t831 * UnityEvent_1_GetDelegate_m17640_gshared (UnityEvent_1_t386 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m17640(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t831 * (*) (UnityEvent_1_t386 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m17640_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t831 * UnityEvent_1_GetDelegate_m17641_gshared (Object_t * __this /* static, unused */, UnityAction_1_t563 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m17641(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t831 * (*) (Object_t * /* static, unused */, UnityAction_1_t563 *, const MethodInfo*))UnityEvent_1_GetDelegate_m17641_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m2948_gshared (UnityEvent_1_t386 * __this, float ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m2948(__this, ___arg0, method) (( void (*) (UnityEvent_1_t386 *, float, const MethodInfo*))UnityEvent_1_Invoke_m2948_gshared)(__this, ___arg0, method)
