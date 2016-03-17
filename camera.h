
#pragma once

#include <glm/fwd.hpp>
#include <glm/mat4x4.hpp>

namespace gast
{
	struct Camera
	{
		Camera ();
		
		glm::mat4 mat;
	};
}

