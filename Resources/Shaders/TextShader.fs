#version 330
uniform sampler2D texture;
in vec4 fragmentColor;
in vec2 fragmentUV;

out vec4 finalColor;

void main()
{

   // finalColor =  vec4(texture2D(texture, fragmentUV).rgb, 1);
   finalColor = fragmentColor;
    finalColor.a = texture2D(texture, fragmentUV).r;
}