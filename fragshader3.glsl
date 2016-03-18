
#version 330

uniform mat4 view;
uniform uint shadingMode;
uniform vec3 diffuseColor;

in vec4 color;
out vec4 outColor;

void main ()
{
	switch (shadingMode) {
		case 0:
			outColor = color;
			break;
		case 1:
			outColor = diffuseColor;
			break;
	}
}

