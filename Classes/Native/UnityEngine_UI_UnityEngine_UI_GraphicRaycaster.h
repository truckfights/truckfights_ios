﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Canvas
struct Canvas_t422;
// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_t429;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t430;

#include "UnityEngine_UI_UnityEngine_EventSystems_BaseRaycaster.h"
#include "UnityEngine_UI_UnityEngine_UI_GraphicRaycaster_BlockingObjec.h"
#include "UnityEngine_UnityEngine_LayerMask.h"

// UnityEngine.UI.GraphicRaycaster
struct  GraphicRaycaster_t428  : public BaseRaycaster_t361
{
	// System.Boolean UnityEngine.UI.GraphicRaycaster::m_IgnoreReversedGraphics
	bool ___m_IgnoreReversedGraphics_3;
	// UnityEngine.UI.GraphicRaycaster/BlockingObjects UnityEngine.UI.GraphicRaycaster::m_BlockingObjects
	int32_t ___m_BlockingObjects_4;
	// UnityEngine.LayerMask UnityEngine.UI.GraphicRaycaster::m_BlockingMask
	LayerMask_t379  ___m_BlockingMask_5;
	// UnityEngine.Canvas UnityEngine.UI.GraphicRaycaster::m_Canvas
	Canvas_t422 * ___m_Canvas_6;
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::m_RaycastResults
	List_1_t429 * ___m_RaycastResults_7;
};
struct GraphicRaycaster_t428_StaticFields{
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::s_SortedGraphics
	List_1_t429 * ___s_SortedGraphics_8;
	// System.Comparison`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::<>f__am$cache6
	Comparison_1_t430 * ___U3CU3Ef__amU24cache6_9;
};
