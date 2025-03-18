#include <iostream>
#include <string>

#include "cypher.hpp"

int main(int argc, char** argv){
  if(argc < 2) return 0;

  int l = argc - 1;
  
  for(int i = 0; i < l; ++i){
    if(i > 0) std::cout << " ";
    int a = i / 2;
    if(i % 2 == 0) a = l - a - 1;
    std::string s(argv[a + 1]);
    std::cout << cypher2txt(s);
  }
  std::cout << std::endl;
  
  return 0;
}
