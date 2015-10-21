#ifndef RESOURCE_PACKER_H
#define RESOURCE_PACKER_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <vector>

struct FontInfo
{
	std::string name;
	std::string path;
	unsigned int size;
};
struct TextureInfo
{
	std::string name;
	std::string path;
};

struct FileInfo 
{
    std::string name;
    std::string path;
};

struct AudioInfo 
{
    std::string name;
    std::string path;
};

class ResourcePacker 
{
public:
    
    bool loadPackages(std::string descriptorFile)
    {
	std::string buffer;
	std::fstream descriptor(descriptorFile, std::ios::binary | std::ios::in);
	std::stringstream ss;
	
	if(descriptor.is_open())
	{
	    ss << descriptor.rdbuf();
	    buffer = ss.str();
	    
	    
	    
	    int  packagePos = buffer.find("package ", 0);

	    while(packagePos >= 0)
	    {
		//get package name
		std::string packageName; 
		
		
		packagePos = buffer.find("package ", packagePos) + 8;
		int packageEnd = buffer.find("package ", packagePos+1);
		
		if(packageEnd < 0)
		    packageEnd = buffer.size();
		    
		    
		packageName = buffer.substr(packagePos, buffer.find(" {", packagePos) - packagePos);
		std::cout<<"Package: "<<packageName<<std::endl;
		
		
		
		
		int pos = buffer.find("font {", packagePos);
		

		//get all fonts
		while (pos >= 0 && pos < packageEnd)
		{
		    
		    int startPos = pos+7;
		    
		    FontInfo font;
		    int endPos = buffer.find(":", pos);
		    std::string fontName = buffer.substr(startPos, endPos-startPos); 
		    font.name =fontName;		
		    
		    startPos = buffer.find("\"", endPos)+1;
		    endPos = buffer.find("\"", startPos);
		    
		    std::string fontPath = buffer.substr(startPos, endPos-startPos); 
		    font.path = fontPath;
		    
		    startPos = buffer.find("size: ", endPos) + 6;
		    endPos = buffer.find("}", startPos+1);
		    
		    std::string fontSize = buffer.substr(startPos, endPos-startPos); 
		    font.size = std::stoi(fontSize);
		    
		    pos = buffer.find("font {", endPos);
		    
		    fonts[packageName].push_back(font);
		}
		
    // 	    get all textures
		pos = buffer.find("texture {", packagePos);
		while (pos >= 0 &&  pos < packageEnd)
		{
		    int startPos = pos+10;
		    
		    TextureInfo texture;
		    int endPos = buffer.find(":", pos);
		    std::string textureName = buffer.substr(startPos, endPos-startPos); 
		    texture.name = textureName;		
		    
		    startPos = buffer.find("\"", endPos)+1;
		    endPos = buffer.find("\"", startPos);
		    
		    std::string texturePath = buffer.substr(startPos, endPos-startPos); 
		    texture.path = texturePath;
		    
		    
		    pos = buffer.find("texture {", endPos);
		    
		    textures[packageName].push_back(texture);
		}
    // 	    get all audios
		pos = buffer.find("audio {", packagePos);
		while (pos >= 0 &&  pos < packageEnd)
		{
		    int startPos = pos+8;
		    
		    AudioInfo audio;
		    int endPos = buffer.find(":", pos);
		    std::string audioName = buffer.substr(startPos, endPos-startPos); 
		    audio.name = audioName;		
		    
		    startPos = buffer.find("\"", endPos)+1;
		    endPos = buffer.find("\"", startPos);
		    
		    std::string audioPath = buffer.substr(startPos, endPos-startPos); 
		    audio.path = audioPath;
		    
		    
		    pos = buffer.find("audio {", endPos);
		    
		    audios[packageName].push_back(audio);
		}
	    		
    //get all files
		pos = buffer.find("file {", packagePos);
		while (pos >= 0 &&  pos < packageEnd)
		{
		    int startPos = pos+7;
		    
		    FileInfo file;
		    int endPos = buffer.find(":", pos);
		    std::string fileName = buffer.substr(startPos, endPos-startPos); 
		    file.name = fileName;		
		    
		    startPos = buffer.find("\"", endPos)+1;
		    endPos = buffer.find("\"", startPos);
		    
		    std::string filePath = buffer.substr(startPos, endPos-startPos); 
		    file.path = filePath;
		    
		    
		    pos = buffer.find("file {", endPos);
		    
		    files[packageName].push_back(file);
		}
	    
	    
	        packagePos = buffer.find("package ", packageEnd);
	    }
	}
	else 
	{
	    std::cout<<"Descriptor "<<descriptorFile<<" not found."<<std::endl;
	    return false;
	}
	
	
	return true;
    }
    
    std::map<std::string, std::vector<FontInfo>> getFonts() { return fonts; }
    std::map<std::string, std::vector<TextureInfo>> getTextures() { return textures; }
    std::map<std::string, std::vector<FileInfo>> getFiles() { return files; }
    std::map<std::string, std::vector<AudioInfo>> getAudios() { return audios; }
    
private:
    std::map<std::string, std::vector<AudioInfo>> audios;
    std::map<std::string, std::vector<FontInfo>> fonts;
    std::map<std::string, std::vector<TextureInfo>> textures;
    std::map<std::string,  std::vector<FileInfo>> files;
};

#endif