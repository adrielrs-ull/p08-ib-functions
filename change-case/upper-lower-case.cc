/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file upper-lower-case.cc
  * @author Adriel Reyes Suárez alu0101640136@ull.edu.es
  * @date Nov 1 2023
  * @software license https://www.gnu.org/licenses/gpl-3.0.html
  * @brief This funciton allows the main program to change an uppercase letter
  * to a lowercase letter
  * @bug There are no known bugs
  * 
  */


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
