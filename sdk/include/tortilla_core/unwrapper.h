#pragma once

// Internal includes
#include <tortilla_model/mesh.h>
#include <tortilla_model/unwrap_result.h>

namespace tortilla
{
	bool unwrap_mesh(const TMesh& target_mesh, TUnwrapResult& output_result);
}