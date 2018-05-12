// Internal includes
#include "unwrap_c_api.h"

// SDK includes
#include <tortilla_model/unwrap_result.h>
#include <tortilla_core/unwrapper.h>

TortillaUnwrapResultObject* tortilla_create_unwrap_result(TortillaAllocatorObject* alloc)
{
	bento::IAllocator* alloc_ptr = (bento::IAllocator*)alloc;
	return (TortillaUnwrapResultObject*)bento::make_new<tortilla::TUnwrapResult>(*alloc_ptr, *alloc_ptr);
}

void tortilla_destroy_unwrap_result(TortillaUnwrapResultObject* unwrap_result)
{
	tortilla::TUnwrapResult* unwrap_result_ptr = (tortilla::TUnwrapResult*)unwrap_result;
	bento::make_delete<tortilla::TUnwrapResult>(unwrap_result_ptr->_allocator, unwrap_result_ptr);
}

float* tortilla_result_values(TortillaUnwrapResultObject* unwrap_result)
{
	tortilla::TUnwrapResult* unwrap_result_ptr = (tortilla::TUnwrapResult*)unwrap_result;
	return unwrap_result_ptr._uvs.begin();
}

bool tortilla_unwrap_mesh(TortillaMeshObject* target_mesh, TortillaUnwrapResultObject* unwrap_result)
{
	tortilla::TMesh* mesh_ptr = (tortilla::TMesh*)target_mesh;
	tortilla::TUnwrapResult* unwrap_result_ptr = (tortilla::TUnwrapResult*)unwrap_result;

	return tortilla::unwrap_mesh(*mesh_ptr, *unwrap_result_ptr);
}