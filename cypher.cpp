#include "cypher.hpp"

std::string txt2cypher(std::string txt){
  std::string cyp = txt;

  long unsigned int l = (long unsigned int)txt.length();
  
  for(long unsigned int i = 0; i < l; ++i){
    long unsigned int a = 2 * i + 1;
    if(a >= l) a = 2 * l - a - 1;
    cyp[i] = txt[a];
  }

  return cyp;
}

std::string cypher2txt(std::string cyp){
  std::string txt = cyp;

  long unsigned int l = (long unsigned int)cyp.length();

  for(long unsigned int i = 0; i < l; ++i){
    long unsigned int a = i / 2;
    if(i % 2 == 0) a = l - a - 1;
    txt[i] = cyp[a];
  }

  return txt;
}
