#include <string>
#include "scan.h"


using namespace std;

int main(int argv,char** args)
{
	/*
	fstream file;
	for (int i = 1; i < argv; i++)
	{
		cout << args[i] << endl;
		if (i == argv)
		cout << endl;
	}
	

	for (int i = 1; i < argv; i++)
	{
		
	}
	*/
	fstream file;
	string str="";
	file.open("main.cpp",ios::in);
	str.assign( istreambuf_iterator<char>(file) , istreambuf_iterator<char>() );
	cout <<"Int is : "<< sizeof(int)<<endl;
	cout << "char is : "<<sizeof(char) << endl;
	cout <<"float is : " << sizeof(float) << endl;
	cout <<"double is : " <<sizeof(double) << endl;
	cout <<"bool is : "<< sizeof(bool) << endl;
	cout <<"string is : "<< sizeof(string) << endl;
	cout << "sttt is : " <<endl<< str << endl;
}






