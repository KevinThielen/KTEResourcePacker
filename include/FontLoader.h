#ifndef FONT_LOADER_H
#define FONT_LOADER_H


#include <freetype/ft2build.h>
#include FT_FREETYPE_H

#include <string>
#include <GameEngine.h>
#include <Resources/Font.h>
#include <GL/glew.h>

class FontLoader 
{
public:	
  bool loadFromFile(std::string path, unsigned int fontSize);  
  kte::Font saveFont(std::string fileName);
  
private:
    FT_Face fontFace;
    FT_Library fontLibrary;
    GLuint textureAtlas;
    kte::Font font;
};

#endif