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

// Region
struct Region_t91;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_CloudRegionCode.h"
#include "AssemblyU2DCSharpU2Dfirstpass_CloudRegionFlag.h"

// System.Void Region::.ctor()
extern "C" void Region__ctor_m655 (Region_t91 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CloudRegionCode Region::Parse(System.String)
extern "C" int32_t Region_Parse_m656 (Object_t * __this /* static, unused */, String_t* ___codeAsString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CloudRegionFlag Region::ParseFlag(System.String)
extern "C" int32_t Region_ParseFlag_m657 (Object_t * __this /* static, unused */, String_t* ___codeAsString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Region::ToString()
extern "C" String_t* Region_ToString_m658 (Region_t91 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
