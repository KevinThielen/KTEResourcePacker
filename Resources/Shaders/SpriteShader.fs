#version 330

uniform sampler2D texture;
in vec4 fragmentColor;
in vec2 fragmentUV;

out vec4 finalColor;

void main()
{
    finalColor =  fragmentColor * texture2D(texture, fragmentUV);
}
