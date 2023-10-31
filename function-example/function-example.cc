#include <iostream>
#include "check-correct-params.h"
#include <cmath>

double MathFunction(const double& x, const double& y, const double& t) {
  double resultado = (sqrt(2 * t - 4)) / (pow(x, 2) - pow(y, 2));
  return resultado;
}

int main(int argc, char* argv[]) {
  if (CheckCorrectParameters(argc, argv, 4)) {
    int param1{std::stoi(argv[1])};
    int param2{std::stoi(argv[2])};
    int param3{std::stoi(argv[3])};
    double resultado = MathFunction(param1, param2, param3);
    std::cout << resultado << std::endl;
  } else {
    std::cout << "Wrong Input" << std::endl;
  }
  return 0;
}
