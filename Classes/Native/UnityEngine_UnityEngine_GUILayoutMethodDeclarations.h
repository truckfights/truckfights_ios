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

// System.String
struct String_t;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t256;
// UnityEngine.GUIStyle
struct GUIStyle_t286;
// UnityEngine.GUIContent
struct GUIContent_t749;
// System.String[]
struct StringU5BU5D_t65;
// UnityEngine.GUIContent[]
struct GUIContentU5BU5D_t859;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t255;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t277;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_Label_m1047 (Object_t * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t256* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_Label_m1267 (Object_t * __this /* static, unused */, String_t* ___text, GUIStyle_t286 * ___style, GUILayoutOptionU5BU5D_t256* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::DoLabel(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_DoLabel_m4229 (Object_t * __this /* static, unused */, GUIContent_t749 * ___content, GUIStyle_t286 * ___style, GUILayoutOptionU5BU5D_t256* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
extern "C" bool GUILayout_Button_m1101 (Object_t * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t256* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::DoButton(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" bool GUILayout_DoButton_m4230 (Object_t * __this /* static, unused */, GUIContent_t749 * ___content, GUIStyle_t286 * ___style, GUILayoutOptionU5BU5D_t256* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayout::TextField(System.String,UnityEngine.GUILayoutOption[])
extern "C" String_t* GUILayout_TextField_m1207 (Object_t * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t256* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayout::DoTextField(System.String,System.Int32,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" String_t* GUILayout_DoTextField_m4231 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___maxLength, bool ___multiline, GUIStyle_t286 * ___style, GUILayoutOptionU5BU5D_t256* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::Toggle(System.Boolean,System.String,UnityEngine.GUILayoutOption[])
extern "C" bool GUILayout_Toggle_m1050 (Object_t * __this /* static, unused */, bool ___value, String_t* ___text, GUILayoutOptionU5BU5D_t256* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::DoToggle(System.Boolean,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" bool GUILayout_DoToggle_m4232 (Object_t * __this /* static, unused */, bool ___value, GUIContent_t749 * ___content, GUIStyle_t286 * ___style, GUILayoutOptionU5BU5D_t256* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUILayout::Toolbar(System.Int32,System.String[],UnityEngine.GUILayoutOption[])
extern "C" int32_t GUILayout_Toolbar_m1234 (Object_t * __this /* static, unused */, int32_t ___selected, StringU5BU5D_t65* ___texts, GUILayoutOptionU5BU5D_t256* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUILayout::Toolbar(System.Int32,UnityEngine.GUIContent[],UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" int32_t GUILayout_Toolbar_m4233 (Object_t * __this /* static, unused */, int32_t ___selected, GUIContentU5BU5D_t859* ___contents, GUIStyle_t286 * ___style, GUILayoutOptionU5BU5D_t256* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUILayout::HorizontalSlider(System.Single,System.Single,System.Single,UnityEngine.GUILayoutOption[])
extern "C" float GUILayout_HorizontalSlider_m1053 (Object_t * __this /* static, unused */, float ___value, float ___leftValue, float ___rightValue, GUILayoutOptionU5BU5D_t256* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUILayout::DoHorizontalSlider(System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" float GUILayout_DoHorizontalSlider_m4234 (Object_t * __this /* static, unused */, float ___value, float ___leftValue, float ___rightValue, GUIStyle_t286 * ___slider, GUIStyle_t286 * ___thumb, GUILayoutOptionU5BU5D_t256* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::FlexibleSpace()
extern "C" void GUILayout_FlexibleSpace_m1205 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_BeginHorizontal_m1096 (Object_t * __this /* static, unused */, GUILayoutOptionU5BU5D_t256* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_BeginHorizontal_m4235 (Object_t * __this /* static, unused */, GUIContent_t749 * ___content, GUIStyle_t286 * ___style, GUILayoutOptionU5BU5D_t256* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndHorizontal()
extern "C" void GUILayout_EndHorizontal_m1097 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect)
extern "C" void GUILayout_BeginArea_m1203 (Object_t * __this /* static, unused */, Rect_t95  ___screenRect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect,UnityEngine.GUIStyle)
extern "C" void GUILayout_BeginArea_m1265 (Object_t * __this /* static, unused */, Rect_t95  ___screenRect, GUIStyle_t286 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUILayout_BeginArea_m4236 (Object_t * __this /* static, unused */, Rect_t95  ___screenRect, GUIContent_t749 * ___content, GUIStyle_t286 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndArea()
extern "C" void GUILayout_EndArea_m1209 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUILayout::BeginScrollView(UnityEngine.Vector2,UnityEngine.GUILayoutOption[])
extern "C" Vector2_t162  GUILayout_BeginScrollView_m1204 (Object_t * __this /* static, unused */, Vector2_t162  ___scrollPosition, GUILayoutOptionU5BU5D_t256* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUILayout::BeginScrollView(UnityEngine.Vector2,System.Boolean,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" Vector2_t162  GUILayout_BeginScrollView_m4237 (Object_t * __this /* static, unused */, Vector2_t162  ___scrollPosition, bool ___alwaysShowHorizontal, bool ___alwaysShowVertical, GUIStyle_t286 * ___horizontalScrollbar, GUIStyle_t286 * ___verticalScrollbar, GUIStyle_t286 * ___background, GUILayoutOptionU5BU5D_t256* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndScrollView()
extern "C" void GUILayout_EndScrollView_m1206 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndScrollView(System.Boolean)
extern "C" void GUILayout_EndScrollView_m4238 (Object_t * __this /* static, unused */, bool ___handleScrollWheel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayout::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String,UnityEngine.GUILayoutOption[])
extern "C" Rect_t95  GUILayout_Window_m1046 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t95  ___screenRect, WindowFunction_t255 * ___func, String_t* ___text, GUILayoutOptionU5BU5D_t256* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayout::DoWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" Rect_t95  GUILayout_DoWindow_m4239 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t95  ___screenRect, WindowFunction_t255 * ___func, GUIContent_t749 * ___content, GUIStyle_t286 * ___style, GUILayoutOptionU5BU5D_t256* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
extern "C" GUILayoutOption_t277 * GUILayout_Width_m4240 (Object_t * __this /* static, unused */, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
extern "C" GUILayoutOption_t277 * GUILayout_Height_m4241 (Object_t * __this /* static, unused */, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandWidth(System.Boolean)
extern "C" GUILayoutOption_t277 * GUILayout_ExpandWidth_m1208 (Object_t * __this /* static, unused */, bool ___expand, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandHeight(System.Boolean)
extern "C" GUILayoutOption_t277 * GUILayout_ExpandHeight_m4242 (Object_t * __this /* static, unused */, bool ___expand, const MethodInfo* method) IL2CPP_METHOD_ATTR;
