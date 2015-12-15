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

// UnityEngine.UI.Toggle
struct Toggle_t406;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t501;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t365;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t328;
// UnityEngine.Transform
struct Transform_t160;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"

// System.Void UnityEngine.UI.Toggle::.ctor()
extern "C" void Toggle__ctor_m2577 (Toggle_t406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::get_group()
extern "C" ToggleGroup_t501 * Toggle_get_group_m2578 (Toggle_t406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::set_group(UnityEngine.UI.ToggleGroup)
extern "C" void Toggle_set_group_m2579 (Toggle_t406 * __this, ToggleGroup_t501 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C" void Toggle_Rebuild_m2580 (Toggle_t406 * __this, int32_t ___executing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::OnEnable()
extern "C" void Toggle_OnEnable_m2581 (Toggle_t406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::OnDisable()
extern "C" void Toggle_OnDisable_m2582 (Toggle_t406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::OnDidApplyAnimationProperties()
extern "C" void Toggle_OnDidApplyAnimationProperties_m2583 (Toggle_t406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::SetToggleGroup(UnityEngine.UI.ToggleGroup,System.Boolean)
extern "C" void Toggle_SetToggleGroup_m2584 (Toggle_t406 * __this, ToggleGroup_t501 * ___newGroup, bool ___setMemberValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
extern "C" bool Toggle_get_isOn_m2585 (Toggle_t406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
extern "C" void Toggle_set_isOn_m2586 (Toggle_t406 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::Set(System.Boolean)
extern "C" void Toggle_Set_m2587 (Toggle_t406 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::Set(System.Boolean,System.Boolean)
extern "C" void Toggle_Set_m2588 (Toggle_t406 * __this, bool ___value, bool ___sendCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::PlayEffect(System.Boolean)
extern "C" void Toggle_PlayEffect_m2589 (Toggle_t406 * __this, bool ___instant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::Start()
extern "C" void Toggle_Start_m2590 (Toggle_t406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::InternalToggle()
extern "C" void Toggle_InternalToggle_m2591 (Toggle_t406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void Toggle_OnPointerClick_m2592 (Toggle_t406 * __this, PointerEventData_t365 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void Toggle_OnSubmit_m2593 (Toggle_t406 * __this, BaseEventData_t328 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Toggle::UnityEngine.UI.ICanvasElement.IsDestroyed()
extern "C" bool Toggle_UnityEngine_UI_ICanvasElement_IsDestroyed_m2594 (Toggle_t406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Toggle::UnityEngine.UI.ICanvasElement.get_transform()
extern "C" Transform_t160 * Toggle_UnityEngine_UI_ICanvasElement_get_transform_m2595 (Toggle_t406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
