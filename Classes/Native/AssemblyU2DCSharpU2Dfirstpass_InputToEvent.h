#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t159;
// UnityEngine.Camera
struct Camera_t165;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// InputToEvent
struct  InputToEvent_t164  : public MonoBehaviour_t80
{
	// UnityEngine.GameObject InputToEvent::lastGo
	GameObject_t159 * ___lastGo_2;
	// System.Boolean InputToEvent::DetectPointedAtGameObject
	bool ___DetectPointedAtGameObject_4;
	// UnityEngine.Vector2 InputToEvent::pressedPosition
	Vector2_t162  ___pressedPosition_5;
	// UnityEngine.Vector2 InputToEvent::currentPos
	Vector2_t162  ___currentPos_6;
	// System.Boolean InputToEvent::Dragging
	bool ___Dragging_7;
	// UnityEngine.Camera InputToEvent::m_Camera
	Camera_t165 * ___m_Camera_8;
};
struct InputToEvent_t164_StaticFields{
	// UnityEngine.Vector3 InputToEvent::inputHitPos
	Vector3_t138  ___inputHitPos_3;
	// UnityEngine.GameObject InputToEvent::<goPointedAt>k__BackingField
	GameObject_t159 * ___U3CgoPointedAtU3Ek__BackingField_9;
};
