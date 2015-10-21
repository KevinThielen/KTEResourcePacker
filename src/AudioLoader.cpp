#include "AudioLoader.h"



bool AudioLoader::loadFromFile(std::string path)
{
    audioData = kte::AudioData();
    std::cout << "Loading audio "<<path<<".."<<std::endl;
    SNDFILE* file;
    SF_INFO info;
    
    file = sf_open(path.c_str(), SFM_READ, &info);
    if(!file)
    {
	std::cout<<"Error loading Audio "<<path<<std::endl;
	return false;
    }
    audioData.sampleRate = info.samplerate;
    audioData.numberOfChannels = info.channels;
    audioData.numberOfFrames = info.frames;

    const int BUFFER_SIZE = 1024;
    int dataCount = 0;
    short data[BUFFER_SIZE];
    
    while((dataCount = sf_read_short(file, data, BUFFER_SIZE)))
    {
	for(int i =0 ; i<dataCount; i++)
	{
	    audioData.data.push_back(data[i]);
	}
    }
    
    std::cout << "Done."<<std::endl;
    sf_close(file);
    return true;
}

kte::AudioData AudioLoader::save(std::string filename)
{
    audioData.name = filename;
    return audioData;
}