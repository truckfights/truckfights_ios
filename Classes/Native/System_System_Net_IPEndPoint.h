#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.IPAddress
struct IPAddress_t269;

#include "System_System_Net_EndPoint.h"

// System.Net.IPEndPoint
struct  IPEndPoint_t1077  : public EndPoint_t1054
{
	// System.Net.IPAddress System.Net.IPEndPoint::address
	IPAddress_t269 * ___address_0;
	// System.Int32 System.Net.IPEndPoint::port
	int32_t ___port_1;
};
