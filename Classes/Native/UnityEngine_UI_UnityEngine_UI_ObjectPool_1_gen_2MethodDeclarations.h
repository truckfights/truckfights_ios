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

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
#define ObjectPool_1__ctor_m16819(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t2431 *, UnityAction_1_t2432 *, UnityAction_1_t2432 *, const MethodInfo*))ObjectPool_1__ctor_m16743_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countAll()
#define ObjectPool_1_get_countAll_m16820(__this, method) (( int32_t (*) (ObjectPool_1_t2431 *, const MethodInfo*))ObjectPool_1_get_countAll_m16745_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m16821(__this, ___value, method) (( void (*) (ObjectPool_1_t2431 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m16747_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countActive()
#define ObjectPool_1_get_countActive_m16822(__this, method) (( int32_t (*) (ObjectPool_1_t2431 *, const MethodInfo*))ObjectPool_1_get_countActive_m16749_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m16823(__this, method) (( int32_t (*) (ObjectPool_1_t2431 *, const MethodInfo*))ObjectPool_1_get_countInactive_m16751_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Get()
#define ObjectPool_1_Get_m16824(__this, method) (( List_1_t113 * (*) (ObjectPool_1_t2431 *, const MethodInfo*))ObjectPool_1_Get_m16753_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Release(T)
#define ObjectPool_1_Release_m16825(__this, ___element, method) (( void (*) (ObjectPool_1_t2431 *, List_1_t113 *, const MethodInfo*))ObjectPool_1_Release_m16755_gshared)(__this, ___element, method)
