﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.Assembly
struct Assembly_t1229;
// System.Type
struct Type_t;
// System.AttributeUsageAttribute
struct AttributeUsageAttribute_t1405;

#include "mscorlib_System_Object.h"

// System.MonoCustomAttrs
struct  MonoCustomAttrs_t2016  : public Object_t
{
};
struct MonoCustomAttrs_t2016_StaticFields{
	// System.Reflection.Assembly System.MonoCustomAttrs::corlib
	Assembly_t1229 * ___corlib_0;
	// System.Type System.MonoCustomAttrs::AttributeUsageType
	Type_t * ___AttributeUsageType_1;
	// System.AttributeUsageAttribute System.MonoCustomAttrs::DefaultAttributeUsage
	AttributeUsageAttribute_t1405 * ___DefaultAttributeUsage_2;
};
