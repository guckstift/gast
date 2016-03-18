
#pragma once

#include <gl/program.h>
#include <gl/shader.h>

namespace gast
{
	class StdProgram : public gl::Program
	{
	public:
		StdProgram ();
		void create (int glMajVer, int glMinVer);
		
		gl::Shader vertShader;
		gl::Shader fragShader;
	};
}

