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
// UnityEngine.Transform
struct Transform_t160;

#include "AssemblyU2DCSharpU2Dfirstpass_Photon_MonoBehaviour.h"

// HighlightOwnedGameObj
struct  HighlightOwnedGameObj_t158  : public MonoBehaviour_t79
{
	// UnityEngine.GameObject HighlightOwnedGameObj::PointerPrefab
	GameObject_t159 * ___PointerPrefab_2;
	// System.Single HighlightOwnedGameObj::Offset
	float ___Offset_3;
	// UnityEngine.Transform HighlightOwnedGameObj::markerTransform
	Transform_t160 * ___markerTransform_4;
};
