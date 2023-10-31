#include <iostream>
#include "upper-lower-case.h"

std::string UpperLowerCase(std::string& texto) {
  for (char& caracter : texto) {
    if (caracter >= 65 && caracter <= 90) {
      caracter = caracter + 32; 
    } else if (caracter >= 97 && caracter <= 122) {
      caracter = caracter - 32; 
    }   
  }
  return texto;   
}
