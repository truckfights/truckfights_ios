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

// InputToEvent
struct InputToEvent_t164;
// UnityEngine.GameObject
struct GameObject_t159;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void InputToEvent::.ctor()
extern "C" void InputToEvent__ctor_m753 (InputToEvent_t164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject InputToEvent::get_goPointedAt()
extern "C" GameObject_t159 * InputToEvent_get_goPointedAt_m754 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputToEvent::set_goPointedAt(UnityEngine.GameObject)
extern "C" void InputToEvent_set_goPointedAt_m755 (Object_t * __this /* static, unused */, GameObject_t159 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 InputToEvent::get_DragVector()
extern "C" Vector2_t162  InputToEvent_get_DragVector_m756 (InputToEvent_t164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputToEvent::Start()
extern "C" void InputToEvent_Start_m757 (InputToEvent_t164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputToEvent::Update()
extern "C" void InputToEvent_Update_m758 (InputToEvent_t164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputToEvent::Press(UnityEngine.Vector2)
extern "C" void InputToEvent_Press_m759 (InputToEvent_t164 * __this, Vector2_t162  ___screenPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputToEvent::Release(UnityEngine.Vector2)
extern "C" void InputToEvent_Release_m760 (InputToEvent_t164 * __this, Vector2_t162  ___screenPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject InputToEvent::RaycastObject(UnityEngine.Vector2)
extern "C" GameObject_t159 * InputToEvent_RaycastObject_m761 (InputToEvent_t164 * __this, Vector2_t162  ___screenPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
