#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t160;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t175;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// OnJoinedInstantiate
struct  OnJoinedInstantiate_t174  : public MonoBehaviour_t80
{
	// UnityEngine.Transform OnJoinedInstantiate::SpawnPosition
	Transform_t160 * ___SpawnPosition_2;
	// System.Single OnJoinedInstantiate::PositionOffset
	float ___PositionOffset_3;
	// UnityEngine.GameObject[] OnJoinedInstantiate::PrefabsToInstantiate
	GameObjectU5BU5D_t175* ___PrefabsToInstantiate_4;
};
