#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include "scan.h"

using namespace std;

int main(int argv,char** args)
{
	fstream file;
	for (int i = 1; i < argv; i++)
	{
		cout << args[i] << endl;
		if (i == argv)
		cout << endl;
	}
	char** str2 = (char**)calloc(argv-1, sizeof(char*));

	for (int i = 1; i < argv; i++)
	{
		//str2[i] =(char*) scan(args[i]);
	}
	
}






