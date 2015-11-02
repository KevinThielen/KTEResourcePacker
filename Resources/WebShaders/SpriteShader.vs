precision mediump float;

attribute vec3 vertex;
attribute vec2 uv;
attribute vec4 color;
attribute vec4 textureRectangle;
attribute mat4 MVP;

varying vec4 fragmentColor;
varying vec2 fragmentUV;

precision mediump float;

void main()
{
    fragmentColor = color;
    fragmentUV.x = textureRectangle.x + uv.x * textureRectangle.z;
    fragmentUV.y = textureRectangle.y + uv.y * textureRectangle.a;

    gl_Position = MVP* vec4(vertex, 1.0);
}