#pragma once

// Bento includes
#include <bento_collection/vector.h>
#include <bento_math/types.h>

namespace tortilla
{
	struct TUnwrapResult
	{
		ALLOCATOR_BASED
		TUnwrapResult(bento::IAllocator& alloc)
		: _uvs(alloc)
		, _allocator(alloc)
		{
		}
		bento::Vector<bento::Vector2> 	_uvs;
		bento::IAllocator&				_allocator;
	};
}