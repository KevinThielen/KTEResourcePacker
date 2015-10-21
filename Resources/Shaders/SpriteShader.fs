#version 330

uniform sampler2D texture;
in vec4 fragmentColor;
in vec2 fragmentUV;

out vec4 finalColor;

void main()
{
    finalColor =  fragmentColor * texture2D(texture, fragmentUV);
   // finalColor =  vec4((fragmentColor.rgb * texture2D(texture, fragmentUV).rgb), 1);
}