#pragma once

#include "types_c_api.h"

extern "C"
{
	// Function to create a new tortilla mesh
	TORTILLA_EXPORT TortillaMeshObject* tortilla_create_mesh(TortillaAllocatorObject* alloc);

	// Function to destroy a tortilla mesh
	TORTILLA_EXPORT void tortilla_destroy_mesh(TortillaMeshObject* mesh);
}