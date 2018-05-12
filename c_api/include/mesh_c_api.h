#pragma once

// Internal includes
#include "types_c_api.h"

// External includes
#include <stdint.h>

extern "C"
{
	// Function to create a new tortilla mesh
	TORTILLA_EXPORT TortillaMeshObject* tortilla_create_mesh(TortillaAllocatorObject* alloc);

	// Fill the mesh structure
	TORTILLA_EXPORT void tortilla_fill_mesh(TortillaMeshObject* mesh, float* vert_array, uint32_t num_verts, uint32_t idx_array, uint32_t num_faces);

	// Function to destroy a tortilla mesh
	TORTILLA_EXPORT void tortilla_destroy_mesh(TortillaMeshObject* mesh);
}