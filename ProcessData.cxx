// g++ ProcessData.cxx -o ProcessData


#include<iostream>
#include<fstream>
#include<string>
#include<sstream>


#include "ProcessToken.h" 
#include "ProcessLine.h"

int main() {

  std::ifstream infile("/home/morelli/data48.txt");

  //handle error here.

  //loop over file.
  std::string line;
  int line_number=0;
  while(getline(infile,line)) {
    ProcessLine(line); // here we process the line.
    line_number++;
  }

  return 0;
}



