#include <GameEngine.h>
#include <fstream>

#include "FontLoader.h"
#include <Resources/ResourcePackage.h>

#include <deque>
#include "ResourcePacker.h"
#include "TextureLoader.h"
#include "AudioLoader.h"
#include "FileLoader.h"

int main(int argc, char* argv[])
{
  //  if(argc <= 1)
    //    return -1;

    std::string packageName = "paqckageName";
    std::string descriptorFile = "Packages.txt";
	
    
    //Needed for the renderer commands
    kte::GameEngine* engine = kte::GameEngine::instance();
    engine->getContext()->create(kte::WindowDesc());
   



    std::map<std::string, kte::ResourcePackage> packages;

   
    ResourcePacker packer;
    if(!packer.loadPackages(descriptorFile))
	return false;
  
    
    FontLoader fontLoader;
    std::map<std::string, std::vector<FontInfo>> fontPackages = packer.getFonts(); 
    
    for(auto fontPackage : fontPackages)
    {
	if(!packages.count(fontPackage.first))
	    packages[fontPackage.first] = kte::ResourcePackage(fontPackage.first);
	
	for(auto font : fontPackage.second)
	{
	    if(fontLoader.loadFromFile(font.path, font.size))
	    {	   
		kte::Font f = fontLoader.save(font.name);
		packages[fontPackage.first].addResource(f);
	    }    else return -1;
	}
    }
    
    TextureLoader textureLoader;
     std::map<std::string, std::vector<TextureInfo>> texturePackages = packer.getTextures(); 
    
    for(auto texturePackage : texturePackages)
    {
	if(!packages.count(texturePackage.first))
	    packages[texturePackage.first] = kte::ResourcePackage(texturePackage.first);
	for(auto texture : texturePackage.second)
	{
	    if(textureLoader.loadFromFile(texture.path))
	    {	   
		kte::TextureData t = textureLoader.save(texture.name);
		packages[texturePackage.first].addResource(t);
	    }    else return -1;
	}
    }
    
    AudioLoader audioLoader;
    std::map<std::string, std::vector<AudioInfo>> audioPackages = packer.getAudios(); 
    for(auto audioPackage : audioPackages)
    {
	if(!packages.count(audioPackage.first))
	    packages[audioPackage.first] = kte::ResourcePackage(audioPackage.first);
	for(auto file : audioPackage.second)
	{
	    if(audioLoader.loadFromFile(file.path))
	    {	   
		kte::AudioData audio = audioLoader.save(file.name);
		packages[audioPackage.first].addResource(audio);
	    }
	    else return -1;
	}
    }
    
    FileLoader fileLoader;
    std::map<std::string, std::vector<FileInfo>> filePackages = packer.getFiles(); 
    for(auto filePackage : filePackages)
    {
	if(!packages.count(filePackage.first))
	    packages[filePackage.first] = kte::ResourcePackage(filePackage.first);
	for(auto file : filePackage.second)
	{
	    if(fileLoader.loadFromFile(file.path))
	    {	   
		kte::File f = fileLoader.save(file.name);
		packages[filePackage.first].addResource(f);
	    }    else return -1;
	}
    }
    
    for(auto& package : packages)
	package.second.persist();

    return 0;
}