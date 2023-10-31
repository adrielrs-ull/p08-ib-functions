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
