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

// System.IO.MemoryStream
struct MemoryStream_t202;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void CustomTypes::.cctor()
extern "C" void CustomTypes__cctor_m91 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CustomTypes::Register()
extern "C" void CustomTypes_Register_m92 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 CustomTypes::SerializeVector3(System.IO.MemoryStream,System.Object)
extern "C" int16_t CustomTypes_SerializeVector3_m93 (Object_t * __this /* static, unused */, MemoryStream_t202 * ___outStream, Object_t * ___customobject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object CustomTypes::DeserializeVector3(System.IO.MemoryStream,System.Int16)
extern "C" Object_t * CustomTypes_DeserializeVector3_m94 (Object_t * __this /* static, unused */, MemoryStream_t202 * ___inStream, int16_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 CustomTypes::SerializeVector2(System.IO.MemoryStream,System.Object)
extern "C" int16_t CustomTypes_SerializeVector2_m95 (Object_t * __this /* static, unused */, MemoryStream_t202 * ___outStream, Object_t * ___customobject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object CustomTypes::DeserializeVector2(System.IO.MemoryStream,System.Int16)
extern "C" Object_t * CustomTypes_DeserializeVector2_m96 (Object_t * __this /* static, unused */, MemoryStream_t202 * ___inStream, int16_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 CustomTypes::SerializeQuaternion(System.IO.MemoryStream,System.Object)
extern "C" int16_t CustomTypes_SerializeQuaternion_m97 (Object_t * __this /* static, unused */, MemoryStream_t202 * ___outStream, Object_t * ___customobject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object CustomTypes::DeserializeQuaternion(System.IO.MemoryStream,System.Int16)
extern "C" Object_t * CustomTypes_DeserializeQuaternion_m98 (Object_t * __this /* static, unused */, MemoryStream_t202 * ___inStream, int16_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 CustomTypes::SerializePhotonPlayer(System.IO.MemoryStream,System.Object)
extern "C" int16_t CustomTypes_SerializePhotonPlayer_m99 (Object_t * __this /* static, unused */, MemoryStream_t202 * ___outStream, Object_t * ___customobject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object CustomTypes::DeserializePhotonPlayer(System.IO.MemoryStream,System.Int16)
extern "C" Object_t * CustomTypes_DeserializePhotonPlayer_m100 (Object_t * __this /* static, unused */, MemoryStream_t202 * ___inStream, int16_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
