
#version 330

uniform mat4 view;
in vec3 position;
in vec4 vertColor;
out vec4 color;

void main ()
{
	gl_Position = view * vec4 (position, 1.0);
	color = vertColor;
}

