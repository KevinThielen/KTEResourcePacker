#include <GameEngine.h>
#include <fstream>
#include <boost/filesystem.hpp>
#include <boost/filesystem/operations.hpp> 
#include "FontLoader.h"
#include <Resources/ResourcePackage.h>
#include <Utility/Serializer.h>

#include <deque>
using namespace boost::filesystem;

int main(int argc, char* argv[])
{
    if(argc <= 1)
        return -1;

    std::map<std::string, bool> fontExtensions;
    fontExtensions["ttf"]  = true;
    
    std::string packageName = "paqckageName";
    std::string resourcePath = "../Resources/";
    
    /*
    if(argc == 2)
        packageName = "General";
    else
        packageName = argv[2];

    if(argc == 3)
	resourcePath = "../Resources/";
    else
	resourcePath = argv[3];
    */

    std::cout<<"Creating package "<<packageName<< " for ressources in "<<resourcePath<<": " <<std::endl;
    
    kte::GameEngine* engine = kte::GameEngine::instance();
    engine->getContext()->create(kte::WindowDesc());
    
    

    
    std::cout<<"The following subdirectories are found: "<<std::endl;
    std::deque<std::string> subDirs;
    // [directory][filetype][files{}]
    std::map<std::string, std::map<std::string, std::vector<std::string>>> resources;
    
    subDirs.push_back(resourcePath);
    
    for(auto subDirItr = subDirs.begin(); subDirItr != subDirs.end(); ++subDirItr) 
    {
	std::string subDir = *subDirItr;
	std::cout<<"\nScanning "<<subDir<<std::endl;
	path p(subDir);
	directory_iterator endItr;
	    
	//scan resources
	for(directory_iterator itr(p); itr != endItr; ++itr)
	{
		std::string subdirPath= itr->path().string();
		std::string subdirName = subdirPath.substr(subdirPath.find_last_of("/")+1);
	    
	    if (!is_regular_file(itr->path())) {
		
		subDirs.push_back(subdirPath);
	    }
	    else 
	    {
		std::string fileType = subdirPath.substr(subdirPath.find_last_of(".")+1);
		resources[subDir][fileType].push_back(subdirPath);
	    }
	}
    }
	
    
    FontLoader fontLoader;
	
    std::vector<kte::Font> fonts;
    std::cout<<"\n"<<resourcePath<<std::endl;
    
    
   kte::ResourcePackage package;
    
    //iterate trough all resources 
    for(auto dir : resources)
    {
	std::string dirName = dir.first.substr(dir.first.find_last_of("/")+1);
	for(auto files : dir.second)
	{
	    std::string fileExtension = files.first;
	    for(auto file : files.second)
	    {
		std::string filePath = file;
		int startIndex = filePath.find_last_of("/") +1;
		int endIndex = filePath.find_last_of(".");
		
		std::string resourceName = filePath.substr(startIndex, endIndex-startIndex);  
		if( fontExtensions[fileExtension])
		{
		    int fontSize = std::atoi(dirName.c_str());
		    if(fontSize > 0)
		    {
			if(fontLoader.loadFromFile(file,fontSize));
			{
			    
			    kte::Font f = fontLoader.saveFont(resourceName + "_" + dirName);
			    fonts.push_back(f);
			    package.addResource(f);
			}
		    }
		    else std::cout<<dirName<<std::endl;
		}
	    }
	}
    }
	
    package.persist();
    
    
    
    package.read("fonts.kte");
    
   // std::fstream file(packageName+".kte", std::ios::binary);
  //  std::cout<<"Writing header.." <<std::endl;
    
  //  std::string header = "KTE";
    
    /*
    FontLoader fontloader;
    if(!fontloader.loadFromFile("font.ttf", 32))
    {
	std::cout<<"Couldn't load font font.ttf from file."<<std::endl;
	return -1;
    }
    fontloader.saveFont("font32.tga");
   if(!fontloader.loadFromFile("font.ttf", 96))
    {
	std::cout<<"Couldn't load font font.ttf from file."<<std::endl;
	return -1;
    }
    fontloader.saveFont("font96.tga");
    */
    return 0;
}