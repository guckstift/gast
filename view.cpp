
#include <sdl/window.h>
#include "view.h"

using namespace sdl;

namespace gast
{
	View::View () :
		wnd (0)
	{
	}

	void View::setWindow (Window *_wnd)
	{
		wnd = _wnd;
	}
}

