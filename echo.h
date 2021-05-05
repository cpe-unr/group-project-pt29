#ifndef ECHO_H
#define ECHO_H


#include <iostream>
#include "Processor.h"

class Echo:public Processor{
	
private:

	int delay;

public:
	/**
	* Constructor
	*
	*/
	Echo();
	/**
	* Parameterized Constructor
	* @param int - Amount of delay in echo
	*/
	Echo(int);

	/**
	* Creates the Echo Function 
	* @param unsigned char - will pass buffer through here
	* @param int - size of the buffer
	*/

	void createEcho(unsigned char*, int);	
	
	/**
	* Processes the buffer through the echo function
	* @param buffer - this is where the buffer passes through
	* @param bufferSize - The size of the buffer.
	*/

	void processBuffer(unsigned char* buffer, int bufferSize);
	
};

	

#endif
