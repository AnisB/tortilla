// Internal includes
#include "mesh_c_api.h"

// SDK includes
#include <tortilla_model/mesh.h>

TortillaMeshObject* tortilla_create_mesh(TortillaAllocatorObject* alloc)
{
	bento::IAllocator* alloc_ptr = (bento::IAllocator*)alloc;
	return (TortillaMeshObject*)bento::make_new<tortilla::TMesh>(*alloc_ptr, *alloc_ptr);
}

void tortilla_destroy_mesh(TortillaMeshObject* mesh)
{
	tortilla::TMesh* mesh_ptr = (tortilla::TMesh*)mesh;
	bento::make_delete<tortilla::TMesh>(*mesh_ptr->_allocator, mesh_ptr);
}