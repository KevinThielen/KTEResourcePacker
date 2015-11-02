precision mediump float;

uniform sampler2D texture;
varying vec4 fragmentColor;
varying vec2 fragmentUV;

void main()
{
    gl_FragColor =  fragmentColor * texture2D(texture, fragmentUV);
}
