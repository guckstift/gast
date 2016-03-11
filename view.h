
#pragma once

#include <sdl/window.h>

namespace gast
{
	struct View
	{
		View ();
		void setWindow (sdl::Window *_wnd);
		
		sdl::Window* wnd;
	};
}

