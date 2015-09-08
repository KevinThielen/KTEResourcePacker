#version 330

layout (location = 1) in vec3 vertex;
layout (location = 2) in vec2 uv;
layout (location = 3) in vec4 color;
layout (location = 4) in vec4 textureRectangle;
layout (location = 5) in mat4 MVP;

out vec4 fragmentColor;
out vec2 fragmentUV;

void main()
{
    fragmentColor = color;
    fragmentUV.x = textureRectangle.x + uv.x * textureRectangle.z;
    fragmentUV.y = textureRectangle.y + uv.y * textureRectangle.a;

    gl_Position = MVP* vec4(vertex, 1.0f);
}