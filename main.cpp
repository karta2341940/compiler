#include <iostream>
#include <string>
#include <fstream>



int main (int argv ,char *args[])
{
    std::fstream file;

    std::cout << "Number : " << argv-1 <<std::endl;
    if(argv > 1)
    file.open(args[argv-1], std::ios::in|std::ios::out);
    else 
    exit(0);
    std::cout<< args[argv-1] <<std::endl;
    char str[50];
   
    if(file.is_open())
    std::cout <<"its open"<<std::endl<<std::endl;
    else 
    {
        std::cout <<"open failed"<<std::endl;
        exit(0);
    }
    
    
    while (file.getline(str,128,'\n'))
    {
        
        std::cout << str << std::endl;
    }
    
    //std::cout<<"Hello"<<std::endl;
    file.read(str,1024);
    std::cin.get();
    file.close();
    

}