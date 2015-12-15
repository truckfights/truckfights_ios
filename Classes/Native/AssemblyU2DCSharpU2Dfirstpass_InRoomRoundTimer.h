#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Rect.h"

// InRoomRoundTimer
struct  InRoomRoundTimer_t163  : public MonoBehaviour_t80
{
	// System.Int32 InRoomRoundTimer::SecondsPerTurn
	int32_t ___SecondsPerTurn_3;
	// System.Double InRoomRoundTimer::StartTime
	double ___StartTime_4;
	// UnityEngine.Rect InRoomRoundTimer::TextPos
	Rect_t95  ___TextPos_5;
	// System.Boolean InRoomRoundTimer::startRoundWhenTimeIsSynced
	bool ___startRoundWhenTimeIsSynced_6;
};
