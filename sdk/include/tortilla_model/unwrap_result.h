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
		{
		}
		bento::Vector<bento::Vector2> _uvs;
	};
}