#ifndef __PROCESSLINE_H__
#define __PROCESSLINE_H__



#include<sstream>
#include<string>


void ProcessToken(std::string,int);


void ProcessLine(std::string line) {
  
  std::stringstream ss(line);
  //loop over the line.
  std::string token;
  int index =0;
  while(ss>>token) {
   //Process the token   
   ProcessToken(token,index);
   index++;
  }

  return;
}


#endif
