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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_0MethodDeclarations.h"

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
#define ObjectPool_1__ctor_m18092(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t2514 *, UnityAction_1_t2515 *, UnityAction_1_t2515 *, const MethodInfo*))ObjectPool_1__ctor_m16743_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countAll()
#define ObjectPool_1_get_countAll_m18093(__this, method) (( int32_t (*) (ObjectPool_1_t2514 *, const MethodInfo*))ObjectPool_1_get_countAll_m16745_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m18094(__this, ___value, method) (( void (*) (ObjectPool_1_t2514 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m16747_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countActive()
#define ObjectPool_1_get_countActive_m18095(__this, method) (( int32_t (*) (ObjectPool_1_t2514 *, const MethodInfo*))ObjectPool_1_get_countActive_m16749_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m18096(__this, method) (( int32_t (*) (ObjectPool_1_t2514 *, const MethodInfo*))ObjectPool_1_get_countInactive_m16751_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Get()
#define ObjectPool_1_Get_m18097(__this, method) (( List_1_t583 * (*) (ObjectPool_1_t2514 *, const MethodInfo*))ObjectPool_1_Get_m16753_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Release(T)
#define ObjectPool_1_Release_m18098(__this, ___element, method) (( void (*) (ObjectPool_1_t2514 *, List_1_t583 *, const MethodInfo*))ObjectPool_1_Release_m16755_gshared)(__this, ___element, method)
