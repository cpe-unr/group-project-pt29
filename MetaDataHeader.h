#ifndef METADATAHEADER_H
#define METADATAHEADER_H

typedef struct metadata_header{
	public:
		char LIST_H[4];

		int size;

		char INFO_H[4];
}; metadata_header;

#endif
