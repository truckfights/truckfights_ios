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

// UnityEngine.GUILayout/LayoutedWindow
struct LayoutedWindow_t750;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t255;
// UnityEngine.GUIContent
struct GUIContent_t749;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t256;
// UnityEngine.GUIStyle
struct GUIStyle_t286;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.GUILayout/LayoutedWindow::.ctor(UnityEngine.GUI/WindowFunction,UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUILayoutOption[],UnityEngine.GUIStyle)
extern "C" void LayoutedWindow__ctor_m4227 (LayoutedWindow_t750 * __this, WindowFunction_t255 * ___f, Rect_t95  ___screenRect, GUIContent_t749 * ___content, GUILayoutOptionU5BU5D_t256* ___options, GUIStyle_t286 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout/LayoutedWindow::DoWindow(System.Int32)
extern "C" void LayoutedWindow_DoWindow_m4228 (LayoutedWindow_t750 * __this, int32_t ___windowID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
