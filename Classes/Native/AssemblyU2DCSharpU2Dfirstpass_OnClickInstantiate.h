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
// System.String[]
struct StringU5BU5D_t65;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// OnClickInstantiate
struct  OnClickInstantiate_t171  : public MonoBehaviour_t80
{
	// UnityEngine.GameObject OnClickInstantiate::Prefab
	GameObject_t159 * ___Prefab_2;
	// System.Int32 OnClickInstantiate::InstantiateType
	int32_t ___InstantiateType_3;
	// System.String[] OnClickInstantiate::InstantiateTypeNames
	StringU5BU5D_t65* ___InstantiateTypeNames_4;
	// System.Boolean OnClickInstantiate::showGui
	bool ___showGui_5;
};
