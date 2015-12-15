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

// UnityEngine.TextEditor
struct TextEditor_t827;
// UnityEngine.Event
struct Event_t276;
struct Event_t276_marshaled;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_TextEditor_DblClickSnapping.h"
#include "UnityEngine_UnityEngine_TextEditor_CharacterType.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void UnityEngine.TextEditor::.ctor()
extern "C" void TextEditor__ctor_m4624 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.TextEditor::get_position()
extern "C" Rect_t95  TextEditor_get_position_m4625 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::set_position(UnityEngine.Rect)
extern "C" void TextEditor_set_position_m4626 (TextEditor_t827 * __this, Rect_t95  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::get_cursorIndex()
extern "C" int32_t TextEditor_get_cursorIndex_m4627 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::set_cursorIndex(System.Int32)
extern "C" void TextEditor_set_cursorIndex_m4628 (TextEditor_t827 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::get_selectIndex()
extern "C" int32_t TextEditor_get_selectIndex_m4629 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::set_selectIndex(System.Int32)
extern "C" void TextEditor_set_selectIndex_m4630 (TextEditor_t827 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::ClearCursorPos()
extern "C" void TextEditor_ClearCursorPos_m4631 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::OnFocus()
extern "C" void TextEditor_OnFocus_m4632 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::OnLostFocus()
extern "C" void TextEditor_OnLostFocus_m4633 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::GrabGraphicalCursorPos()
extern "C" void TextEditor_GrabGraphicalCursorPos_m4634 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::HandleKeyEvent(UnityEngine.Event)
extern "C" bool TextEditor_HandleKeyEvent_m4635 (TextEditor_t827 * __this, Event_t276 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::DeleteLineBack()
extern "C" bool TextEditor_DeleteLineBack_m4636 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::DeleteWordBack()
extern "C" bool TextEditor_DeleteWordBack_m4637 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::DeleteWordForward()
extern "C" bool TextEditor_DeleteWordForward_m4638 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::Delete()
extern "C" bool TextEditor_Delete_m4639 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::Backspace()
extern "C" bool TextEditor_Backspace_m4640 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectAll()
extern "C" void TextEditor_SelectAll_m4641 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectNone()
extern "C" void TextEditor_SelectNone_m4642 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::get_hasSelection()
extern "C" bool TextEditor_get_hasSelection_m4643 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::DeleteSelection()
extern "C" bool TextEditor_DeleteSelection_m4644 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::ReplaceSelection(System.String)
extern "C" void TextEditor_ReplaceSelection_m4645 (TextEditor_t827 * __this, String_t* ___replace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::Insert(System.Char)
extern "C" void TextEditor_Insert_m4646 (TextEditor_t827 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveRight()
extern "C" void TextEditor_MoveRight_m4647 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveLeft()
extern "C" void TextEditor_MoveLeft_m4648 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveUp()
extern "C" void TextEditor_MoveUp_m4649 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveDown()
extern "C" void TextEditor_MoveDown_m4650 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveLineStart()
extern "C" void TextEditor_MoveLineStart_m4651 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveLineEnd()
extern "C" void TextEditor_MoveLineEnd_m4652 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveGraphicalLineStart()
extern "C" void TextEditor_MoveGraphicalLineStart_m4653 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveGraphicalLineEnd()
extern "C" void TextEditor_MoveGraphicalLineEnd_m4654 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveTextStart()
extern "C" void TextEditor_MoveTextStart_m4655 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveTextEnd()
extern "C" void TextEditor_MoveTextEnd_m4656 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::IndexOfEndOfLine(System.Int32)
extern "C" int32_t TextEditor_IndexOfEndOfLine_m4657 (TextEditor_t827 * __this, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveParagraphForward()
extern "C" void TextEditor_MoveParagraphForward_m4658 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveParagraphBackward()
extern "C" void TextEditor_MoveParagraphBackward_m4659 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveCursorToPosition(UnityEngine.Vector2)
extern "C" void TextEditor_MoveCursorToPosition_m4660 (TextEditor_t827 * __this, Vector2_t162  ___cursorPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectToPosition(UnityEngine.Vector2)
extern "C" void TextEditor_SelectToPosition_m4661 (TextEditor_t827 * __this, Vector2_t162  ___cursorPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectLeft()
extern "C" void TextEditor_SelectLeft_m4662 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectRight()
extern "C" void TextEditor_SelectRight_m4663 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectUp()
extern "C" void TextEditor_SelectUp_m4664 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectDown()
extern "C" void TextEditor_SelectDown_m4665 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectTextEnd()
extern "C" void TextEditor_SelectTextEnd_m4666 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectTextStart()
extern "C" void TextEditor_SelectTextStart_m4667 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MouseDragSelectsWholeWords(System.Boolean)
extern "C" void TextEditor_MouseDragSelectsWholeWords_m4668 (TextEditor_t827 * __this, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::DblClickSnap(UnityEngine.TextEditor/DblClickSnapping)
extern "C" void TextEditor_DblClickSnap_m4669 (TextEditor_t827 * __this, uint8_t ___snapping, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::GetGraphicalLineStart(System.Int32)
extern "C" int32_t TextEditor_GetGraphicalLineStart_m4670 (TextEditor_t827 * __this, int32_t ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::GetGraphicalLineEnd(System.Int32)
extern "C" int32_t TextEditor_GetGraphicalLineEnd_m4671 (TextEditor_t827 * __this, int32_t ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::FindNextSeperator(System.Int32)
extern "C" int32_t TextEditor_FindNextSeperator_m4672 (TextEditor_t827 * __this, int32_t ___startPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::isLetterLikeChar(System.Char)
extern "C" bool TextEditor_isLetterLikeChar_m4673 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::FindPrevSeperator(System.Int32)
extern "C" int32_t TextEditor_FindPrevSeperator_m4674 (TextEditor_t827 * __this, int32_t ___startPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveWordRight()
extern "C" void TextEditor_MoveWordRight_m4675 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveToStartOfNextWord()
extern "C" void TextEditor_MoveToStartOfNextWord_m4676 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveToEndOfPreviousWord()
extern "C" void TextEditor_MoveToEndOfPreviousWord_m4677 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectToStartOfNextWord()
extern "C" void TextEditor_SelectToStartOfNextWord_m4678 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectToEndOfPreviousWord()
extern "C" void TextEditor_SelectToEndOfPreviousWord_m4679 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextEditor/CharacterType UnityEngine.TextEditor::ClassifyChar(System.Char)
extern "C" int32_t TextEditor_ClassifyChar_m4680 (TextEditor_t827 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::FindStartOfNextWord(System.Int32)
extern "C" int32_t TextEditor_FindStartOfNextWord_m4681 (TextEditor_t827 * __this, int32_t ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::FindEndOfPreviousWord(System.Int32)
extern "C" int32_t TextEditor_FindEndOfPreviousWord_m4682 (TextEditor_t827 * __this, int32_t ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveWordLeft()
extern "C" void TextEditor_MoveWordLeft_m4683 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectWordRight()
extern "C" void TextEditor_SelectWordRight_m4684 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectWordLeft()
extern "C" void TextEditor_SelectWordLeft_m4685 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::ExpandSelectGraphicalLineStart()
extern "C" void TextEditor_ExpandSelectGraphicalLineStart_m4686 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::ExpandSelectGraphicalLineEnd()
extern "C" void TextEditor_ExpandSelectGraphicalLineEnd_m4687 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectGraphicalLineStart()
extern "C" void TextEditor_SelectGraphicalLineStart_m4688 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectGraphicalLineEnd()
extern "C" void TextEditor_SelectGraphicalLineEnd_m4689 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectParagraphForward()
extern "C" void TextEditor_SelectParagraphForward_m4690 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectParagraphBackward()
extern "C" void TextEditor_SelectParagraphBackward_m4691 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectCurrentWord()
extern "C" void TextEditor_SelectCurrentWord_m4692 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::FindEndOfClassification(System.Int32,System.Int32)
extern "C" int32_t TextEditor_FindEndOfClassification_m4693 (TextEditor_t827 * __this, int32_t ___p, int32_t ___dir, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectCurrentParagraph()
extern "C" void TextEditor_SelectCurrentParagraph_m4694 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::UpdateScrollOffsetIfNeeded()
extern "C" void TextEditor_UpdateScrollOffsetIfNeeded_m4695 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::UpdateScrollOffset()
extern "C" void TextEditor_UpdateScrollOffset_m4696 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::DrawCursor(System.String)
extern "C" void TextEditor_DrawCursor_m4697 (TextEditor_t827 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::PerformOperation(UnityEngine.TextEditor/TextEditOp)
extern "C" bool TextEditor_PerformOperation_m4698 (TextEditor_t827 * __this, int32_t ___operation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SaveBackup()
extern "C" void TextEditor_SaveBackup_m4699 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::Cut()
extern "C" bool TextEditor_Cut_m4700 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::Copy()
extern "C" void TextEditor_Copy_m4701 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.TextEditor::ReplaceNewlinesWithSpaces(System.String)
extern "C" String_t* TextEditor_ReplaceNewlinesWithSpaces_m4702 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::Paste()
extern "C" bool TextEditor_Paste_m4703 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MapKey(System.String,UnityEngine.TextEditor/TextEditOp)
extern "C" void TextEditor_MapKey_m4704 (Object_t * __this /* static, unused */, String_t* ___key, int32_t ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::InitKeyActions()
extern "C" void TextEditor_InitKeyActions_m4705 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::DetectFocusChange()
extern "C" void TextEditor_DetectFocusChange_m4706 (TextEditor_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
