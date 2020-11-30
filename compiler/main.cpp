#include <string>
#include "scan.h"


int main(int argv,char** args)
{
	/*
	std::fstream file;
	for (int i = 1; i < argv; i++)
	{
		std::cout << args[i] << std::endl;
		if (i == argv)
		std::cout << std::endl;
	}
	

	for (int i = 1; i < argv; i++)
	{
		
	}
	*/
	std::fstream file;
	std::string str="";
	file.open("main.cpp",std::ios::in);
	str.assign( std::istreambuf_iterator<char>(file) , std::istreambuf_iterator<char>() );
	std::cout <<"Int is : "<< sizeof(int)<<std::endl;
	std::cout << "char is : "<<sizeof(char) << std::endl;
	std::cout <<"float is : " << sizeof(float) << std::endl;
	std::cout <<"double is : " <<sizeof(double) << std::endl;
	std::cout <<"bool is : "<< sizeof(bool) << std::endl;
	std::cout <<"string is : "<< sizeof(std::string) << std::endl;
	std::cout << "sttt is : " <<std::endl<< str << std::endl;
}

std:: 




