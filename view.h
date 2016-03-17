
#pragma once

#include <sdl/window.h>

namespace gast
{
	struct Camera;
	
	struct View
	{
		View ();
		View (sdl::Window& _wnd, Camera& _cam);
		void setWindow (sdl::Window& _wnd);
		void setCamera (Camera& _cam);
		
		sdl::Window* wnd;
		Camera* cam;
	};
}

