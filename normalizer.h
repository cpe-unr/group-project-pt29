#ifndef LIMIT_H
#define LIMIT_H

#include <iostream>
#include "Processor.h"

using namespace std;

class Limiter: public Processor{

private:

	/**
	* stores the limit as a percentage of the maximum possible volume
	*
	*/

	float limitVal = 0.8;

public:
	/**
	* Creates the Limit/normalize Function 
	* @param unsigned char - will pass buffer through here
	* @param int - size of the buffer
	*/

	void limitFunc(unsigned char*, int);

	/**
	* Processes the buffer through the Limiter/normalizer function
	* @param buffer - this is where the buffer passes through
	* @param bufferSize - The size of the buffer.
	*/

	void processBuffer(unsigned char* buffer, int bufferSize);
};

#endif
