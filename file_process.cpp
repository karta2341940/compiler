#include "scan.h"


void* scan(char filename[])
{
	std::fstream file;
	file.open(filename, std::ios::in|std::ios::ate);
	long size =file.tellg();
	return (char*)calloc(size,sizeof(char));
}