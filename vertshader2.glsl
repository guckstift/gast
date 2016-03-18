
#version 120

uniform mat4 view;
uniform int shadingMode;
uniform vec3 diffuseColor;

attribute vec3 position;
attribute vec4 vertColor;
varying vec4 color;

void main ()
{
	gl_Position = view * vec4 (position, 1.0);
	if (shadingMode==0) {
			color = vertColor;
	}
	else if (shadingMode == 1) {
			color = vec4 (diffuseColor, 1.0);
	}
}

