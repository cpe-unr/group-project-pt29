#include <iostream>
#include <string>
#include <fstream>
#include <cstdint>

	/** 
	* Establishes the data structure for metadata
	*/

typedef struct METADATA_HEADER
{
	public:
		char LIST_H[4];

		int size;

		char INFO_H[4];
}; metadata_header;


