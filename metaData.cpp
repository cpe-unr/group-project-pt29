#include "metaData.h"
#include "MetaDataHeader.h"
#include "WaveHeader.h"



MetaData::MetaData(const std::string fileName){
	MetaFile = fileName;
	readFile();
}

void MetaData::readFile(){
	std::ifstream file(MetaFile, std::ios::binary | std::ios::in);
	if(file.is_open()){
		file.read((char*)&wavHeader,*sizeof(wav_header));
		unusedBuffer = new unsigned char[wavHeader.data_bbytes];
		file.read((char*)unusedBuffer, wavHeader.data_bytes);

		file.read((char*)&metaDataHeader, sizeof(metadata_header));

		
		while(!file.eof()) {
			char InfoHeader[4];
			file.read((char*)&InfoHeader, 4);
			Head.push_back(InfoHeader);
			int informationSize;
			file.read((char*)&informationSize, 4);
			char Info[informationSize];
			file.read((char*)&Info, informationSize);
			Information.push_back(Info);
		}

		Head.erase(Head.end() - 2, Head.end());
		Information.erase(Information.end() - 2, Information.end());
		file.close();
	}
}
	
