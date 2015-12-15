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

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2772;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__25.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m21712_gshared (Enumerator_t2779 * __this, Dictionary_2_t2772 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m21712(__this, ___dictionary, method) (( void (*) (Enumerator_t2779 *, Dictionary_2_t2772 *, const MethodInfo*))Enumerator__ctor_m21712_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m21713_gshared (Enumerator_t2779 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m21713(__this, method) (( Object_t * (*) (Enumerator_t2779 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m21713_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m21714_gshared (Enumerator_t2779 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m21714(__this, method) (( void (*) (Enumerator_t2779 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m21714_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t225  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21715_gshared (Enumerator_t2779 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21715(__this, method) (( DictionaryEntry_t225  (*) (Enumerator_t2779 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21715_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21716_gshared (Enumerator_t2779 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21716(__this, method) (( Object_t * (*) (Enumerator_t2779 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21716_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21717_gshared (Enumerator_t2779 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21717(__this, method) (( Object_t * (*) (Enumerator_t2779 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21717_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool Enumerator_MoveNext_m21718_gshared (Enumerator_t2779 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m21718(__this, method) (( bool (*) (Enumerator_t2779 *, const MethodInfo*))Enumerator_MoveNext_m21718_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" KeyValuePair_2_t2774  Enumerator_get_Current_m21719_gshared (Enumerator_t2779 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m21719(__this, method) (( KeyValuePair_2_t2774  (*) (Enumerator_t2779 *, const MethodInfo*))Enumerator_get_Current_m21719_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m21720_gshared (Enumerator_t2779 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m21720(__this, method) (( Object_t * (*) (Enumerator_t2779 *, const MethodInfo*))Enumerator_get_CurrentKey_m21720_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m21721_gshared (Enumerator_t2779 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m21721(__this, method) (( int32_t (*) (Enumerator_t2779 *, const MethodInfo*))Enumerator_get_CurrentValue_m21721_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Reset()
extern "C" void Enumerator_Reset_m21722_gshared (Enumerator_t2779 * __this, const MethodInfo* method);
#define Enumerator_Reset_m21722(__this, method) (( void (*) (Enumerator_t2779 *, const MethodInfo*))Enumerator_Reset_m21722_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyState()
extern "C" void Enumerator_VerifyState_m21723_gshared (Enumerator_t2779 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m21723(__this, method) (( void (*) (Enumerator_t2779 *, const MethodInfo*))Enumerator_VerifyState_m21723_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m21724_gshared (Enumerator_t2779 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m21724(__this, method) (( void (*) (Enumerator_t2779 *, const MethodInfo*))Enumerator_VerifyCurrent_m21724_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Dispose()
extern "C" void Enumerator_Dispose_m21725_gshared (Enumerator_t2779 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m21725(__this, method) (( void (*) (Enumerator_t2779 *, const MethodInfo*))Enumerator_Dispose_m21725_gshared)(__this, method)
