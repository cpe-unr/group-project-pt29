#include "noisegate.h"
#include <iostream>




noiseGate::noiseGate(){
	noiseThresh = 0.4;
}

noiseGate::noiseGate(float newThreshVal){
	noiseThresh = newThreshVal;
}
	
void noiseGate::thresholdValue(unsigned char* buffer, int bufferSize){
	
	for(int i = 0; i < bufferSize; i++){
		if(buffer[i] < 255 * noiseThresh){
			buffer[i] = 127;
		}
	}
}

void noiseGate::processBuffer(unsigned char* buffer, int bufferSize){
	thresholdValue(buffer, bufferSize);
}
