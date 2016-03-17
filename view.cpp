
#include <sdl/window.h>
#include "view.h"

using namespace sdl;

namespace gast
{
	View::View () :
		wnd (0), cam (0)
	{
	}

	View::View (sdl::Window& _wnd, Camera& _cam)
	{
		setWindow (_wnd);
		setCamera (_cam);
	}

	void View::setWindow (Window& _wnd)
	{
		wnd = &_wnd;
	}

	void View::setCamera (Camera& _cam)
	{
		cam = &_cam;
	}
}

