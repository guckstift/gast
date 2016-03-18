
#version 120

uniform mat4 view;
uniform int shadingMode;
uniform vec3 diffuseColor;

varying vec4 color;

void main ()
{
	if (shadingMode==0) {
			gl_FragColor = color;
	}
	else if (shadingMode == 1) {
			gl_FragColor = vec4 (diffuseColor, 1.0);
	}
}

