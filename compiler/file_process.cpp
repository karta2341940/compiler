




#include "scan.h"


void* scan(char filename[])
{
	std::fstream file;
	file.open(filename, std::ios::in|std::ios::ate);
	long size =file.tellg();
	return (char*)calloc(size,sizeof(char));
}
///<summary>Erase space and new line at the front and the end</summary>
std::string& trim(std::string& s)
{
	if (s.empty())
	{
		return s;
	}
	s.erase(0, s.find_first_not_of(" \n"));
	s.erase(s.find_last_not_of("\n") + 1);
	s.erase(0, s.find_first_not_of(" "));
	s.erase(s.find_last_not_of(" ")+1);
	return s;
}











