#pragma once

#include "types_c_api.h"

extern "C"
{
	// Function to create a new nyx allocator
	TORTILLA_EXPORT TortillaAllocatorObject* tortilla_create_allocator();

	// Function to destroy a nyx allocator
	TORTILLA_EXPORT void tortilla_destroy_allocator(TortillaAllocatorObject* allocator);
}