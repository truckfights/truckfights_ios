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

// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t999;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t207;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
struct DispatcherFactory_t998;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t111;
// System.Array
struct Array_t;
// System.IConvertible
struct IConvertible_t1015;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>
struct IEnumerable_1_t1016;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TypeCode.h"

// System.Void Boo.Lang.Runtime.RuntimeServices::.cctor()
extern "C" void RuntimeServices__cctor_m5437 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::GetDispatcher(System.Object,System.String,System.Type[],Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory)
extern "C" Dispatcher_t999 * RuntimeServices_GetDispatcher_m5438 (Object_t * __this /* static, unused */, Object_t * ___target, String_t* ___cacheKeyName, TypeU5BU5D_t207* ___cacheKeyTypes, DispatcherFactory_t998 * ___factory, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.RuntimeServices::Coerce(System.Object,System.Type)
extern "C" Object_t * RuntimeServices_Coerce_m1432 (Object_t * __this /* static, unused */, Object_t * ___value, Type_t * ___toType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::CreateCoerceDispatcher(System.Object,System.Type)
extern "C" Dispatcher_t999 * RuntimeServices_CreateCoerceDispatcher_m5439 (Object_t * __this /* static, unused */, Object_t * ___value, Type_t * ___toType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::EmitPromotionDispatcher(System.Type,System.Type)
extern "C" Dispatcher_t999 * RuntimeServices_EmitPromotionDispatcher_m5440 (Object_t * __this /* static, unused */, Type_t * ___fromType, Type_t * ___toType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsPromotableNumeric(System.Type)
extern "C" bool RuntimeServices_IsPromotableNumeric_m5441 (Object_t * __this /* static, unused */, Type_t * ___fromType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::EmitImplicitConversionDispatcher(System.Reflection.MethodInfo)
extern "C" Dispatcher_t999 * RuntimeServices_EmitImplicitConversionDispatcher_m5442 (Object_t * __this /* static, unused */, MethodInfo_t * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.RuntimeServices::CoercibleDispatcher(System.Object,System.Object[])
extern "C" Object_t * RuntimeServices_CoercibleDispatcher_m5443 (Object_t * __this /* static, unused */, Object_t * ___o, ObjectU5BU5D_t111* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.RuntimeServices::IdentityDispatcher(System.Object,System.Object[])
extern "C" Object_t * RuntimeServices_IdentityDispatcher_m5444 (Object_t * __this /* static, unused */, Object_t * ___o, ObjectU5BU5D_t111* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsNumeric(System.TypeCode)
extern "C" bool RuntimeServices_IsNumeric_m5445 (Object_t * __this /* static, unused */, int32_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::EqualityOperator(System.Object,System.Object)
extern "C" bool RuntimeServices_EqualityOperator_m5446 (Object_t * __this /* static, unused */, Object_t * ___lhs, Object_t * ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::ArrayEqualityImpl(System.Array,System.Array)
extern "C" bool RuntimeServices_ArrayEqualityImpl_m5447 (Object_t * __this /* static, unused */, Array_t * ___lhs, Array_t * ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode Boo.Lang.Runtime.RuntimeServices::GetConvertTypeCode(System.TypeCode,System.TypeCode)
extern "C" int32_t RuntimeServices_GetConvertTypeCode_m5448 (Object_t * __this /* static, unused */, int32_t ___lhsTypeCode, int32_t ___rhsTypeCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::EqualityOperator(System.Object,System.TypeCode,System.Object,System.TypeCode)
extern "C" bool RuntimeServices_EqualityOperator_m5449 (Object_t * __this /* static, unused */, Object_t * ___lhs, int32_t ___lhsTypeCode, Object_t * ___rhs, int32_t ___rhsTypeCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::IsPromotableNumeric(System.TypeCode)
extern "C" bool RuntimeServices_IsPromotableNumeric_m5450 (Object_t * __this /* static, unused */, int32_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IConvertible Boo.Lang.Runtime.RuntimeServices::CheckNumericPromotion(System.Object)
extern "C" Object_t * RuntimeServices_CheckNumericPromotion_m5451 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IConvertible Boo.Lang.Runtime.RuntimeServices::CheckNumericPromotion(System.IConvertible)
extern "C" Object_t * RuntimeServices_CheckNumericPromotion_m5452 (Object_t * __this /* static, unused */, Object_t * ___convertible, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Boo.Lang.Runtime.RuntimeServices::UnboxSingle(System.Object)
extern "C" float RuntimeServices_UnboxSingle_m1463 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::UnboxBoolean(System.Object)
extern "C" bool RuntimeServices_UnboxBoolean_m5453 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.Runtime.RuntimeServices::ToBool(System.Object)
extern "C" bool RuntimeServices_ToBool_m1464 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.RuntimeServices::ToBoolTrue(System.Object,System.Object[])
extern "C" Object_t * RuntimeServices_ToBoolTrue_m5454 (Object_t * __this /* static, unused */, Object_t * ___value, ObjectU5BU5D_t111* ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.RuntimeServices::UnboxBooleanDispatcher(System.Object,System.Object[])
extern "C" Object_t * RuntimeServices_UnboxBooleanDispatcher_m5455 (Object_t * __this /* static, unused */, Object_t * ___value, ObjectU5BU5D_t111* ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.RuntimeServices::CreateBoolConverter(System.Type)
extern "C" Dispatcher_t999 * RuntimeServices_CreateBoolConverter_m5456 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices::FindImplicitConversionOperator(System.Type,System.Type)
extern "C" MethodInfo_t * RuntimeServices_FindImplicitConversionOperator_m5457 (Object_t * __this /* static, unused */, Type_t * ___from, Type_t * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo> Boo.Lang.Runtime.RuntimeServices::GetExtensionMethods()
extern "C" Object_t* RuntimeServices_GetExtensionMethods_m5458 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices::FindImplicitConversionMethod(System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>,System.Type,System.Type)
extern "C" MethodInfo_t * RuntimeServices_FindImplicitConversionMethod_m5459 (Object_t * __this /* static, unused */, Object_t* ___candidates, Type_t * ___from, Type_t * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
