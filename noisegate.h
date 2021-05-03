#ifndef NOISEGATE_H
#define NOISEGATE_H

#include <iostream>
#include "Processor.h"

using namespace std;

class noiseGate: public Processor{


private:
	float noiseThresh;
public:
	noiseGate();
	noiseGate(float);
	void thresholdValue(unsigned char*, int);
	void processBuffer(unsigned char* buffer, int bufferSize);
};

#endif
