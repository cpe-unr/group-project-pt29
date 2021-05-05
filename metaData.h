#ifndef METADATA_H
#define METADATA_H

#include <iostream>
#include "MetaDataHeader.h"
#include "WaveHeader.h"

class MetaData{

	/**
	* Attributes
	*/

METADATA_HEADER metaDataHeader;
WAV_HEADER wavHeader;


std::string MetaFile;
	
	/**
	* Buffer variable for metadata specifically
	*/

unsigned char* unusedBuffer =NULL

std::vector<std::string> Head;
std::vector<std::string> Information;
public:

	/** constructor
	*
	*
	*/
MetaData(const std::string fileName);
	
	/**
	* Reads the file
	*
	*/
void readFile()override;
};

	/** 
	* Note - I was no able to incorporate any of my metadata functionality :(
	*/

#endif
