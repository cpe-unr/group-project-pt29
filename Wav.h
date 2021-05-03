#ifndef WAV_H
#define WAV_H


#include "WaveHeader.h"

class Wav {
public:
    void read8BitMonoFile(const std::string &fileName);
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
