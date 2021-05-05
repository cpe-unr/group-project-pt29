#ifndef PROGRAMMING_ASSIGNMENT_3KL_PROCESSOR_H
#define PROGRAMMING_ASSIGNMENT_3KL_PROCESSOR_H


#include <iostream>
#include <string>
#include <fstream>
#include <cstdint>


using namespace std;

class Processor {
public:
	/**
	* This prepares the buffer to be passed through my processor functions 
	* @param buffer - this is the buffer 
	* @param bufferSize - this is the size of the buffer 
	*/
    virtual void processBuffer(unsigned char* buffer, int bufferSize) = 0;
};


#endif
