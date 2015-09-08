#include <GameEngine.h>
#include <fstream>
#include <boost/filesystem.hpp>
#include <boost/filesystem/operations.hpp> 
#include <boost/concept_check.hpp>
#include "FontLoader.h"
#include <Resources/ResourcePackage.h>

#include <deque>
#include "ResourcePacker.h"

int main(int argc, char* argv[])
{
  //  if(argc <= 1)
    //    return -1;

    std::string packageName = "paqckageName";
    std::string descriptorFile = "Packages.txt";
	
    
    //Needed for the renderer commands
    kte::GameEngine* engine = kte::GameEngine::instance();
    engine->getContext()->create(kte::WindowDesc());
   



    kte::ResourcePackage package;
    FontLoader fontLoader;

   
    ResourcePacker packer;
    if(!packer.loadPackages(descriptorFile))
	return false;
    std::vector<FontData> fonts = packer.getFonts(); 
    
    for(auto font : fonts)
    {
	if(fontLoader.loadFromFile(font.path, font.size))
	{	   
	    kte::Font f = fontLoader.saveFont(font.name);
	    package.addResource(f);
	}
    }
    
    package.persist("General.kte");

    return 0;
}