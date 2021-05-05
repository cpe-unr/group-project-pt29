#ifndef WAV_H
#define WAV_H


#include "WaveHeader.h"

class Wav {
public:
	/**
	* Reads 8 bit mono files only 
	* @param fileName - This is the Wav file that ends up being read.
	*/
    void read8BitMonoFile(const std::string &fileName);

	/**
	* Writes 8 bit mono files only 
	* @param fileName - This is the Wav file that ends up being written.
	*/
    void write8BitMonoFile(const std::string &outFileName);
private:
    unsigned char* buffer = NULL;
    wav_header waveHeader;
public:
    virtual ~Wav();

public:
    unsigned char *getBuffer();
    int getBufferSize() const;
};


#endif
