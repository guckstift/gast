
#include <gs/utils.h>
#include <reslist.h>
#include "stdprogram.h"

using namespace gs;
using namespace gl;

namespace gast
{
	StdProgram::StdProgram ()
	{
	}

	void StdProgram::create (int glMajVer, int glMinVer)
	{
		char *vertSrc;
		char *fragSrc;
		
		if (glMajVer > 3 || glMajVer == 3 && glMinVer >= 3) {
			vertSrc = res_gspkgs_gast_vertshader3_glsl;
			fragSrc = res_gspkgs_gast_fragshader3_glsl;
		}
		else if (glMajVer > 2 || glMajVer == 2 && glMinVer >= 1) {
			vertSrc = res_gspkgs_gast_vertshader2_glsl;
			fragSrc = res_gspkgs_gast_fragshader2_glsl;
		}
		else {
			errLog << "Error" << fail;
		}
		
		vertShader.create (VERTEX);
		vertShader.setSource (vertSrc);
		vertShader.compile ();
		
		fragShader.create (FRAGMENT);
		fragShader.setSource (fragSrc);
		fragShader.compile ();
		
		Program::create ();
		Program::attachShader (vertShader);
		Program::link ();
	}
}

