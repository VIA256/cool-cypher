#include <iostream>
#include <string>

#include "cypher.hpp"

int main(int argc, char** argv){
  if(argc < 2) return 0;
  
  int l = argc - 1;
  
  for(int i = 0; i < l; ++i){
    if(i > 0) std::cout << " ";
    int a = 2 * i + 1;
    if(a >= l) a = 2 * l - a - 1;
    std::string s(argv[a + 1]);
    std::cout << txt2cypher(s);
  }
  std::cout << std::endl;
  
  return 0;
}

