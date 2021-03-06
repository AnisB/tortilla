// Internal includes
#include "mesh_c_api.h"

// SDK includes
#include <tortilla_model/mesh.h>

TortillaMeshObject* tortilla_create_mesh(TortillaAllocatorObject* alloc)
{
	bento::IAllocator* alloc_ptr = (bento::IAllocator*)alloc;
	return (TortillaMeshObject*)bento::make_new<tortilla::TMesh>(*alloc_ptr, *alloc_ptr);
}

void tortilla_fill_mesh(TortillaMeshObject* mesh, float* vert_array, uint32_t num_verts, uint32_t* idx_array, uint32_t num_faces)
{
	tortilla::TMesh* mesh_ptr = (tortilla::TMesh*)mesh;
	mesh_ptr->_verts.resize(num_verts);
	memcpy(mesh_ptr->_verts.begin(), vert_array, sizeof(bento::Vector3) * num_verts);
	mesh_ptr->_indexes.resize(num_faces);
	memcpy(mesh_ptr->_indexes.begin(), idx_array, sizeof(bento::IVector3) * num_faces);
}

void tortilla_destroy_mesh(TortillaMeshObject* mesh)
{
	tortilla::TMesh* mesh_ptr = (tortilla::TMesh*)mesh;
	bento::make_delete<tortilla::TMesh>(mesh_ptr->_allocator, mesh_ptr);
}