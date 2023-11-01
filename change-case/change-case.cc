/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file change-case.cc
  * @author Adriel Reyes Suárez alu0101640136@ull.edu.es
  * @date Nov 1 2023
  * @software license https://www.gnu.org/licenses/gpl-3.0.html
  * @brief The program changes an uppercase letter to a lowercase letter
  * @bug There are no known bugs
  * 
  */


#include <iostream>
#include "check-correct-params.h"
#include "upper-lower-case.h"

int main(int argc, char* argv[]) {
  if (CheckCorrectParameters(argc, argv, 2)) {
    std::string texto{argv[1]};
    std::cout << UpperLowerCase(texto) << std::endl;
  } else {
    std::cout << "Wrong input" << std::endl;
  }
}
