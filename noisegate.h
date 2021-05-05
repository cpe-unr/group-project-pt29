#ifndef NOISEGATE_H
#define NOISEGATE_H

#include <iostream>
#include "Processor.h"

using namespace std;

class noiseGate: public Processor{


private:
	/**
	*Threshold variable to determine strength of noisegate
	*/

	float noiseThresh;
public:

	/** 
	* Constructor
	*/

	noiseGate();

	/** 
	* Parameterized Constrcutor
	* @param float - Noisegate threshold valuue
	*/

	noiseGate(float);

	/**
	* Creates the noisegate threshold value.
	* @param unsigned char - will pass buffer through here
	* @param int - size of the buffer
	*/
	void thresholdValue(unsigned char*, int);
	
	/**
	* Processes the buffer through the noisegate function
	* @param buffer - this is where the buffer passes through
	* @param bufferSize - The size of the buffer.
	*/
	void processBuffer(unsigned char* buffer, int bufferSize);
};

#endif
