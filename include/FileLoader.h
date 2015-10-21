#ifndef FILE_LOADER_H
#define FILE_LOADER_H

#include <string>
#include <GameEngine.h>
#include <Resources/File.h>
#include <sstream>


class FileLoader 
{
public:	
  bool loadFromFile(std::string path)
  {
    std::ifstream f(path, std::ios::in | std::ios::binary );
    std::stringstream ss;
    
    if(f.is_open())
    {
	ss << f.rdbuf();
	file.content = ss.str();
    }
    else 
	return false;
    
    return true;
  }
  
  kte::File save(std::string fileName)
  {
      file.name = fileName;
      return file;
  }
private:
    kte::File file;
};

#endif