#define STB_IMAGE_IMPLEMENTATION
#include <stb/stb_image.h>

#include "TextureLoader.h"

bool TextureLoader::loadFromFile(std::string path)
{
    int w,h,comp;
    unsigned char *data = stbi_load(path.c_str(), &w, &h, &comp, 0);

    if(data == NULL)
    {
	std::cout<<path<< " not found."<<std::endl;
	return false;
    }

    textureData.width = w;
    textureData.height = h;
        
    textureData.hasAlpha = (comp==4);
    
    textureData.data.clear();
    for(int i = 0; i<w*h*comp; i++)
    {
	textureData.data.push_back(data[i]);
    }

    stbi_image_free(data);

    return true;
}

kte::TextureData TextureLoader::save(std::string fileName)
{
    textureData.name = fileName;
    return textureData;
}
