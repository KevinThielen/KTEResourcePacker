#ifndef AUDIO_LOADER_H
#define AUDIO_LOADER_H



#include <iostream>
#include <fstream>
#include <sndfile.h>
#include <Resources/AudioData.h>

class AudioLoader 
{
public:	
  bool loadFromFile(std::string path);  
  kte::AudioData save(std::string fileName);
  
private:
   kte::AudioData audioData;
};

#endif