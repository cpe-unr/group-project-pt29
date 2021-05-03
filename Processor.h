#ifndef PROGRAMMING_ASSIGNMENT_3KL_PROCESSOR_H
#define PROGRAMMING_ASSIGNMENT_3KL_PROCESSOR_H


#include <iostream>
#include <string>
#include <fstream>
#include <cstdint>


using namespace std;

class Processor {
public:
    virtual void processBuffer(unsigned char* buffer, int bufferSize) = 0;
};


#endif
