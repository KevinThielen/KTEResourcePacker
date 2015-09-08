#ifndef RESOURCE_PACKER_H
#define RESOURCE_PACKER_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>

struct FontData 
{
	std::string name;
	std::string path;
	unsigned int size;
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
	    
	    int pos = buffer.find("font {", 0);
	    

	    //get all fonts
	    while (pos > 0)
	    {
		int startPos = pos+7;
		
		FontData font;
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
		
		fonts.push_back(font);
	    }
	    
	    
	    
	}
	else 
	{
	    std::cout<<"Descriptor "<<descriptorFile<<" not found."<<std::endl;
	    return false;
	}
	
	
	return true;
    }
    
    std::vector<FontData> getFonts() { return fonts; }
private:
    std::vector<FontData> fonts;
};

#endif