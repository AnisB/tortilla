// Bento includes
#include <bento_base/stream.h>

// Internal includes
#include "tortilla_model/mesh.h"

const uint32_t INPUT_MESH_VERSION = 1;

namespace bento
{
	void pack_type(Vector<char>& buffer, const tortilla::TMesh& input_mesh)
	{
		pack_bytes(buffer, INPUT_MESH_VERSION);
		pack_vector_bytes(buffer, input_mesh._verts);
		pack_vector_bytes(buffer, input_mesh._indexes);
	}

	bool unpack_type(const char*& stream, tortilla::TMesh& output_mesh)
	{
		// Read the version
		uint32_t data_stream_version;
		unpack_bytes(stream, data_stream_version);

		// Stop if this does not match the current version
		if (data_stream_version != INPUT_MESH_VERSION) return false;
		unpack_vector_bytes(stream, output_mesh._verts);
		unpack_vector_bytes(stream, output_mesh._indexes);
		return true;
	}
}
