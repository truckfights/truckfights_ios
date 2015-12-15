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

// UnityEngine.GUISkin
struct GUISkin_t194;
// System.String
struct String_t;
// UnityEngine.GUIContent
struct GUIContent_t749;
// UnityEngine.GUIStyle
struct GUIStyle_t286;
// UnityEngine.TextEditor
struct TextEditor_t827;
// UnityEngine.GUIContent[]
struct GUIContentU5BU5D_t859;
// UnityEngine.Rect[]
struct RectU5BU5D_t860;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t255;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_FocusType.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.GUI::.cctor()
extern "C" void GUI__cctor_m4166 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime UnityEngine.GUI::get_nextScrollStepTime()
extern "C" DateTime_t748  GUI_get_nextScrollStepTime_m4167 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C" void GUI_set_nextScrollStepTime_m4168 (Object_t * __this /* static, unused */, DateTime_t748  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::get_scrollTroughSide()
extern "C" int32_t GUI_get_scrollTroughSide_m4169 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_scrollTroughSide(System.Int32)
extern "C" void GUI_set_scrollTroughSide_m4170 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C" void GUI_set_skin_m1262 (Object_t * __this /* static, unused */, GUISkin_t194 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C" GUISkin_t194 * GUI_get_skin_m1263 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoSetSkin(UnityEngine.GUISkin)
extern "C" void GUI_DoSetSkin_m4171 (Object_t * __this /* static, unused */, GUISkin_t194 * ___newSkin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_tooltip(System.String)
extern "C" void GUI_set_tooltip_m4172 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
extern "C" void GUI_Label_m1248 (Object_t * __this /* static, unused */, Rect_t95  ___position, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUI_Label_m4173 (Object_t * __this /* static, unused */, Rect_t95  ___position, GUIContent_t749 * ___content, GUIStyle_t286 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUI_Box_m4174 (Object_t * __this /* static, unused */, Rect_t95  ___position, GUIContent_t749 * ___content, GUIStyle_t286 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" bool GUI_Button_m4175 (Object_t * __this /* static, unused */, Rect_t95  ___position, GUIContent_t749 * ___content, GUIStyle_t286 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoRepeatButton(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.FocusType)
extern "C" bool GUI_DoRepeatButton_m4176 (Object_t * __this /* static, unused */, Rect_t95  ___position, GUIContent_t749 * ___content, GUIStyle_t286 * ___style, int32_t ___focusType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUI::PasswordFieldGetStrToShow(System.String,System.Char)
extern "C" String_t* GUI_PasswordFieldGetStrToShow_m4177 (Object_t * __this /* static, unused */, String_t* ___password, uint16_t ___maskChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoTextField(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle)
extern "C" void GUI_DoTextField_m4178 (Object_t * __this /* static, unused */, Rect_t95  ___position, int32_t ___id, GUIContent_t749 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t286 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoTextField(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,System.String)
extern "C" void GUI_DoTextField_m4179 (Object_t * __this /* static, unused */, Rect_t95  ___position, int32_t ___id, GUIContent_t749 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t286 * ___style, String_t* ___secureText, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoTextField(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,System.String,System.Char)
extern "C" void GUI_DoTextField_m4180 (Object_t * __this /* static, unused */, Rect_t95  ___position, int32_t ___id, GUIContent_t749 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t286 * ___style, String_t* ___secureText, uint16_t ___maskChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::HandleTextFieldEventForTouchscreen(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,System.String,System.Char,UnityEngine.TextEditor)
extern "C" void GUI_HandleTextFieldEventForTouchscreen_m4181 (Object_t * __this /* static, unused */, Rect_t95  ___position, int32_t ___id, GUIContent_t749 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t286 * ___style, String_t* ___secureText, uint16_t ___maskChar, TextEditor_t827 * ___editor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::HandleTextFieldEventForDesktop(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,UnityEngine.TextEditor)
extern "C" void GUI_HandleTextFieldEventForDesktop_m4182 (Object_t * __this /* static, unused */, Rect_t95  ___position, int32_t ___id, GUIContent_t749 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t286 * ___style, TextEditor_t827 * ___editor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Toggle(UnityEngine.Rect,System.Boolean,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" bool GUI_Toggle_m4183 (Object_t * __this /* static, unused */, Rect_t95  ___position, bool ___value, GUIContent_t749 * ___content, GUIStyle_t286 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::Toolbar(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent[],UnityEngine.GUIStyle)
extern "C" int32_t GUI_Toolbar_m4184 (Object_t * __this /* static, unused */, Rect_t95  ___position, int32_t ___selected, GUIContentU5BU5D_t859* ___contents, GUIStyle_t286 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::FindStyles(UnityEngine.GUIStyle&,UnityEngine.GUIStyle&,UnityEngine.GUIStyle&,UnityEngine.GUIStyle&,System.String,System.String,System.String)
extern "C" void GUI_FindStyles_m4185 (Object_t * __this /* static, unused */, GUIStyle_t286 ** ___style, GUIStyle_t286 ** ___firstStyle, GUIStyle_t286 ** ___midStyle, GUIStyle_t286 ** ___lastStyle, String_t* ___first, String_t* ___mid, String_t* ___last, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::CalcTotalHorizSpacing(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
extern "C" int32_t GUI_CalcTotalHorizSpacing_m4186 (Object_t * __this /* static, unused */, int32_t ___xCount, GUIStyle_t286 * ___style, GUIStyle_t286 * ___firstStyle, GUIStyle_t286 * ___midStyle, GUIStyle_t286 * ___lastStyle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::DoButtonGrid(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent[],System.Int32,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
extern "C" int32_t GUI_DoButtonGrid_m4187 (Object_t * __this /* static, unused */, Rect_t95  ___position, int32_t ___selected, GUIContentU5BU5D_t859* ___contents, int32_t ___xCount, GUIStyle_t286 * ___style, GUIStyle_t286 * ___firstStyle, GUIStyle_t286 * ___midStyle, GUIStyle_t286 * ___lastStyle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect[] UnityEngine.GUI::CalcMouseRects(UnityEngine.Rect,System.Int32,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean)
extern "C" RectU5BU5D_t860* GUI_CalcMouseRects_m4188 (Object_t * __this /* static, unused */, Rect_t95  ___position, int32_t ___count, int32_t ___xCount, float ___elemWidth, float ___elemHeight, GUIStyle_t286 * ___style, GUIStyle_t286 * ___firstStyle, GUIStyle_t286 * ___midStyle, GUIStyle_t286 * ___lastStyle, bool ___addBorders, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::GetButtonGridMouseSelection(UnityEngine.Rect[],UnityEngine.Vector2,System.Boolean)
extern "C" int32_t GUI_GetButtonGridMouseSelection_m4189 (Object_t * __this /* static, unused */, RectU5BU5D_t860* ___buttonRects, Vector2_t162  ___mousePos, bool ___findNearest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::HorizontalSlider(UnityEngine.Rect,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
extern "C" float GUI_HorizontalSlider_m4190 (Object_t * __this /* static, unused */, Rect_t95  ___position, float ___value, float ___leftValue, float ___rightValue, GUIStyle_t286 * ___slider, GUIStyle_t286 * ___thumb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::Slider(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean,System.Int32)
extern "C" float GUI_Slider_m4191 (Object_t * __this /* static, unused */, Rect_t95  ___position, float ___value, float ___size, float ___start, float ___end, GUIStyle_t286 * ___slider, GUIStyle_t286 * ___thumb, bool ___horiz, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::HorizontalScrollbar(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" float GUI_HorizontalScrollbar_m4192 (Object_t * __this /* static, unused */, Rect_t95  ___position, float ___value, float ___size, float ___leftValue, float ___rightValue, GUIStyle_t286 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::ScrollerRepeatButton(System.Int32,UnityEngine.Rect,UnityEngine.GUIStyle)
extern "C" bool GUI_ScrollerRepeatButton_m4193 (Object_t * __this /* static, unused */, int32_t ___scrollerID, Rect_t95  ___rect, GUIStyle_t286 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::VerticalScrollbar(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" float GUI_VerticalScrollbar_m4194 (Object_t * __this /* static, unused */, Rect_t95  ___position, float ___value, float ___size, float ___topValue, float ___bottomValue, GUIStyle_t286 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::Scroller(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean)
extern "C" float GUI_Scroller_m4195 (Object_t * __this /* static, unused */, Rect_t95  ___position, float ___value, float ___size, float ___leftValue, float ___rightValue, GUIStyle_t286 * ___slider, GUIStyle_t286 * ___thumb, GUIStyle_t286 * ___leftButton, GUIStyle_t286 * ___rightButton, bool ___horiz, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::BeginGroup(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUI_BeginGroup_m4196 (Object_t * __this /* static, unused */, Rect_t95  ___position, GUIContent_t749 * ___content, GUIStyle_t286 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::EndGroup()
extern "C" void GUI_EndGroup_m4197 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUI::BeginScrollView(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Rect,System.Boolean,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
extern "C" Vector2_t162  GUI_BeginScrollView_m4198 (Object_t * __this /* static, unused */, Rect_t95  ___position, Vector2_t162  ___scrollPosition, Rect_t95  ___viewRect, bool ___alwaysShowHorizontal, bool ___alwaysShowVertical, GUIStyle_t286 * ___horizontalScrollbar, GUIStyle_t286 * ___verticalScrollbar, GUIStyle_t286 * ___background, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::EndScrollView(System.Boolean)
extern "C" void GUI_EndScrollView_m4199 (Object_t * __this /* static, unused */, bool ___handleScrollWheel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" Rect_t95  GUI_Window_m4200 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t95  ___clientRect, WindowFunction_t255 * ___func, GUIContent_t749 * ___title, GUIStyle_t286 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" void GUI_CallWindowDelegate_m4201 (Object_t * __this /* static, unused */, WindowFunction_t255 * ___func, int32_t ___id, GUISkin_t194 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t286 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DragWindow()
extern "C" void GUI_DragWindow_m1064 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::get_changed()
extern "C" bool GUI_get_changed_m1062 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C" void GUI_set_changed_m4202 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::get_enabled()
extern "C" bool GUI_get_enabled_m4203 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Internal_SetTooltip(System.String)
extern "C" void GUI_Internal_SetTooltip_m4204 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoLabel(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_DoLabel_m4205 (Object_t * __this /* static, unused */, Rect_t95  ___position, GUIContent_t749 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DoLabel(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_INTERNAL_CALL_DoLabel_m4206 (Object_t * __this /* static, unused */, Rect_t95 * ___position, GUIContent_t749 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_DoButton_m4207 (Object_t * __this /* static, unused */, Rect_t95  ___position, GUIContent_t749 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoButton(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_INTERNAL_CALL_DoButton_m4208 (Object_t * __this /* static, unused */, Rect_t95 * ___position, GUIContent_t749 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::SetNextControlName(System.String)
extern "C" void GUI_SetNextControlName_m1202 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::FocusControl(System.String)
extern "C" void GUI_FocusControl_m1201 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoToggle(UnityEngine.Rect,System.Int32,System.Boolean,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_DoToggle_m4209 (Object_t * __this /* static, unused */, Rect_t95  ___position, int32_t ___id, bool ___value, GUIContent_t749 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoToggle(UnityEngine.Rect&,System.Int32,System.Boolean,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_INTERNAL_CALL_DoToggle_m4210 (Object_t * __this /* static, unused */, Rect_t95 * ___position, int32_t ___id, bool ___value, GUIContent_t749 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::get_usePageScrollbars()
extern "C" bool GUI_get_usePageScrollbars_m4211 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::InternalRepaintEditorWindow()
extern "C" void GUI_InternalRepaintEditorWindow_m4212 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::DoWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin,System.Boolean)
extern "C" Rect_t95  GUI_DoWindow_m4213 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t95  ___clientRect, WindowFunction_t255 * ___func, GUIContent_t749 * ___title, GUIStyle_t286 * ___style, GUISkin_t194 * ___skin, bool ___forceRectOnLayout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::INTERNAL_CALL_DoWindow(System.Int32,UnityEngine.Rect&,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin,System.Boolean)
extern "C" Rect_t95  GUI_INTERNAL_CALL_DoWindow_m4214 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t95 * ___clientRect, WindowFunction_t255 * ___func, GUIContent_t749 * ___title, GUIStyle_t286 * ___style, GUISkin_t194 * ___skin, bool ___forceRectOnLayout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DragWindow(UnityEngine.Rect)
extern "C" void GUI_DragWindow_m4215 (Object_t * __this /* static, unused */, Rect_t95  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DragWindow(UnityEngine.Rect&)
extern "C" void GUI_INTERNAL_CALL_DragWindow_m4216 (Object_t * __this /* static, unused */, Rect_t95 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
