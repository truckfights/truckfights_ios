﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// PhotonPlayer
struct PhotonPlayer_t76;

#include "codegen/il2cpp-codegen.h"

// System.Void ScoreExtensions::SetScore(PhotonPlayer,System.Int32)
extern "C" void ScoreExtensions_SetScore_m818 (Object_t * __this /* static, unused */, PhotonPlayer_t76 * ___player, int32_t ___newScore, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreExtensions::AddScore(PhotonPlayer,System.Int32)
extern "C" void ScoreExtensions_AddScore_m819 (Object_t * __this /* static, unused */, PhotonPlayer_t76 * ___player, int32_t ___scoreToAddToCurrent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ScoreExtensions::GetScore(PhotonPlayer)
extern "C" int32_t ScoreExtensions_GetScore_m820 (Object_t * __this /* static, unused */, PhotonPlayer_t76 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
