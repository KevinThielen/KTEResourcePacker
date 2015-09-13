#ifndef TEXTURE_LOADER_H
#define TEXTURE_LOADER_H

#include <string>
#include <GameEngine.h>
#include <Resources/TextureData.h>

class TextureLoader 
{
public:	
  bool loadFromFile(std::string path);  
  kte::TextureData save(std::string fileName);
  
private:
    kte::TextureData textureData;
};

#endif