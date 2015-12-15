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
// UnityEngine.TextMesh
struct TextMesh_t191;
// UnityEngine.Font
struct Font_t192;

#include "AssemblyU2DCSharpU2Dfirstpass_Photon_MonoBehaviour.h"

// ShowInfoOfPlayer
struct  ShowInfoOfPlayer_t190  : public MonoBehaviour_t79
{
	// UnityEngine.GameObject ShowInfoOfPlayer::textGo
	GameObject_t159 * ___textGo_2;
	// UnityEngine.TextMesh ShowInfoOfPlayer::tm
	TextMesh_t191 * ___tm_3;
	// System.Single ShowInfoOfPlayer::CharacterSize
	float ___CharacterSize_4;
	// UnityEngine.Font ShowInfoOfPlayer::font
	Font_t192 * ___font_5;
	// System.Boolean ShowInfoOfPlayer::DisableOnOwnObjects
	bool ___DisableOnOwnObjects_6;
};
