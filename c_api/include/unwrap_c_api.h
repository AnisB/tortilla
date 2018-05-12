#pragma once

#include "types_c_api.h"

extern "C"
{
	// Function to create a new tortilla unwrap result
	TORTILLA_EXPORT TortillaUnwrapResultObject* tortilla_create_unwrap_result(TortillaAllocatorObject* alloc);
	// Function to destroy a tortilla unwrap result
	TORTILLA_EXPORT void tortilla_destroy_unwrap_result(TortillaUnwrapResultObject* unwrap_result);

	// Access the uv channel result
	TORTILLA_EXPORT float* tortilla_result_values(TortillaUnwrapResultObject* unwrap_result);

	// Do an unwrap on a given mesh
	TORTILLA_EXPORT bool tortilla_unwrap_mesh(TortillaMeshObject* target_mesh, TortillaUnwrapResultObject* unwrap_result);
}