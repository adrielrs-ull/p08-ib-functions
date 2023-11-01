/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file triangle-area.cc
  * @author Adriel Reyes Suárez alu0101640136@ull.edu.es
  * @date Nov 1 2023
  * @software license https://www.gnu.org/licenses/gpl-3.0.html
  * @brief The program returns the area of the triangle with sides lado1, lado2
  * and lado3
  * @bug There are no known bugs
  * 
  */


#include <iostream>
#include <cmath>
#include <iomanip>
#include "check-correct-params.h"

bool IsAValidTriangle(const double& lado1, const double& lado2, const double& lado3) {
  if ((lado1 < lado2 + lado3) && (lado2 < lado1 + lado3) && (lado3 < lado1 + lado2)) {
    return true;
  } 
  return false;
}

double HeronFormula(const double& lado1, const double& lado2, const double& lado3) {
  double p{0.5 *(lado1 + lado2 +lado3)}; 
  double area{std::sqrt(p * (p - lado1) * (p - lado2) * (p - lado3))};
  return area;
}

int main (int argc, char* argv[]) {
  if (CheckCorrectParameters(argc, argv, 4)) {
    double lado1{std::stod(argv[1])};
    double lado2{std::stod(argv[2])};
    double lado3{std::stod(argv[3])};
    if (IsAValidTriangle(lado1, lado2, lado3)) {
      std::cout << std::fixed << std::setprecision(2) << HeronFormula(lado1, lado2, lado3) << std::endl;
    } else {
      std::cout << "Not a valid Triangle" << std::endl;
    }

  } else {
    std::cout << "Wrong Input" << std::endl;
  } 
  return 0;
}
