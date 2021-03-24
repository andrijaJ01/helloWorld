
#include<iostream>
#include"test.hpp"


int main(int argc, char *argv[]){
   Line line(10.0);
 
   std::cout << "Length of line : " << line.getLength() <<std::endl;

   line.setLength(6.0); 
   std::cout << "Length of line : " << line.getLength() <<std::endl;
 
return 0;
} 
