#include "FontLoader.h"

#include <iostream>
#include <algorithm>    // std::find
#include <fstream>
#include <complex>

bool FontLoader::loadFromFile(std::string path, unsigned int fontSize)
{
  //  Font font;
    font = kte::Font();
    font.textureWidth = 0;
    font.textureWidth = 0;
  
    std::cout << "Loading font "<<path<<".."<<std::endl;
    if (FT_Init_FreeType(&fontLibrary)) {
	std::cout << "Could not initialize freetype library"<<std::endl;
	return false;
    }

    if (FT_New_Face(fontLibrary, path.c_str(), 0, &fontFace)) {
	std::cout <<  "Failed to load font: \"" << path <<std::endl;
	return false;
    }

 
    FT_Set_Pixel_Sizes(fontFace, 0, fontSize);
    font.fontSize = fontSize;
    
    //calc the width and height of the font texture atlas
    FT_GlyphSlot g = fontFace->glyph;

    font.textureHeight = 0;
    

    for (int i = 32; i <128; i++)
    {
	
	    if (FT_Load_Char(fontFace, i, FT_LOAD_RENDER))
	    {
		std::cout << "Error loading character " << (char)i << " in " << path<<std::endl;
		continue;
	    }
	    font.textureWidth += g->bitmap.width;

	    
	    unsigned int charHeight = g->bitmap.rows;
	    if (charHeight > font.textureHeight)
		font.textureHeight = charHeight;
	
    }
 
 unsigned int fontHeight = font.textureHeight;
 
    //scale to next power of 2 for webGL
    int scaleX = 2, scaleY = 2;
    while(scaleX < font.textureWidth)
	scaleX *= 2;
    while(scaleY < font.textureHeight)
	scaleY *= 2;
 
   
    font.textureWidth = scaleX;
    font.textureHeight = scaleY;

    
    //delet the old atlas
    if(textureAtlas)
	glDeleteTextures(1, &textureAtlas);
    //create the texture atlas
    glActiveTexture(GL_TEXTURE0);
    glGenTextures(1, &textureAtlas);
    glBindTexture(GL_TEXTURE_2D, textureAtlas);
    glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE );
    glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE );
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glPixelStorei ( GL_UNPACK_ALIGNMENT, 1 ) ;
    glPixelStorei ( GL_PACK_ALIGNMENT, 1 ) ;
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RED, font.textureWidth, font.textureHeight, 0, GL_RED, GL_UNSIGNED_BYTE, 0);

    

    //load the glyphs and put them in the texture
    int x = 0;

   
    for (int i = 32; i < 128; i++) {
	if (FT_Load_Char(fontFace, i, FT_LOAD_RENDER))
	    continue;

	glTexSubImage2D(GL_TEXTURE_2D, 0, x, 0, g->bitmap.width, g->bitmap.rows, GL_RED, GL_UNSIGNED_BYTE, g->bitmap.buffer);



	//add the glyph information
	font.glyphs[i].advanceX = g->advance.x >> 6;
	font.glyphs[i].advanceY = g->advance.y >> 6;

	font.glyphs[i].bitmapWidth = g->bitmap.width;
	font.glyphs[i].bitmapHeight = g->bitmap.rows;

	font.glyphs[i].bitmapLeft = g->bitmap_left;
	font.glyphs[i].bitmapTop = g->bitmap_top;

	font.glyphs[i].textureX = x;
 	x += g->bitmap.width +1;
    }
    
    FT_Done_Face(fontFace);
    FT_Done_FreeType(fontLibrary);
    
    std::cout << "Done."<<std::endl;
    return true;
}

kte::Font FontLoader::save(std::string filename)
{
    
    int x = font.textureWidth;
    int y = font.textureHeight;
    
    font.name = filename;
    // get the image data
    long imageSize = x * y;

    font.data.clear();
    
    std::vector<unsigned char> fontData;
    fontData.resize(x*y);
    for(int i = 0; i<imageSize; i++)
    {
	fontData[i] = 0;
    }
    
     glActiveTexture(textureAtlas);
     glGetTexImage(GL_TEXTURE_2D, 0, GL_RED, GL_UNSIGNED_BYTE, &fontData[0]);
    
     for(int i = 0; i<imageSize; i++)
     {
	font.data.push_back(fontData[i]);
     }
    return font;
}