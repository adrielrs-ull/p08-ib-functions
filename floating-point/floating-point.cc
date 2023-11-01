/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file floating-point.cc
  * @author Adriel Reyes Suárez alu0101640136@ull.edu.es
  * @date Nov 1 2023
  * @software license https://www.gnu.org/licenses/gpl-3.0.html
  * @brief The program returns wheter the parameters are equal or not
  * @bug There are no known bugs
  * 
  */


#include<iostream>
#include <cmath>
#include "check-correct-params.h"

bool AreEqual(const double number1, const double number2, const double epsilon = 1e-7) {
  if (std::abs(number1 - number2) < epsilon) {
    return true;
  }
  return false;
}

int main(int argc, char* argv[]) {
  if (CheckCorrectParameters(argc, argv, 3)) {
    double numero1{std::stod(argv[1])};
    double numero2{std::stod(argv[2])};
    if (AreEqual(numero1, numero2)) {
      std::cout << "Son iguales" << std::endl;
    } else {
      std::cout << "No son iguales" << std::endl;
    }
  } else {
    std::cout << "Wrong input" << std::endl;
  }
  return 0;
}
