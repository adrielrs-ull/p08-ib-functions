#include "check-correct-params.h"
#include <iostream>

bool CheckCorrectParameters(const int argc, char* argv[], const int& kCorrectNumber) {
  if (argc != kCorrectNumber) {
    return false;
  }
  return true;
}

