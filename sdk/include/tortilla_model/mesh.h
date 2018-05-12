#pragma once

// Bento includes
#include <bento_collection/vector.h>
#include <bento_math/types.h>

namespace tortilla
{
	struct TMesh
	{
		ALLOCATOR_BASED
		TMesh(bento::IAllocator& alloc)
		: _verts(alloc)
		, _indexes(alloc)
		, _allocator(alloc)
		{
		}

		bento::Vector<bento::Vector3> 	_verts;
		bento::Vector<bento::IVector3> 	_indexes;
		bento::IAllocator&				_allocator;
	};
}

namespace bento
{
	void pack_type(Vector<char>& buffer, const tortilla::TMesh& input_mesh);
	bool unpack_type(char*& stream, tortilla::TMesh& output_mesh);
}