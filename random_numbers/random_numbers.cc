/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file integer_division_and_reminder.cc
  * @author Adriel Reyes Suárez alu0101640136@ull.edu.es
  * @date Nov 1 2023
  * @software license https://www.gnu.org/licenses/gpl-3.0.html
  * @brief The program returns a random number within an interval
  * @bug There are no known bugs
  * 
  */


#include <iostream>
#include "check-correct-params.h"
#include <cstdlib>
#include <ctime>

int RandomNumber(const int& min, const int& max) {
  std::srand(std::time(nullptr));
  int random_number{min + (std::rand() % (max - min + + 1))};
  return random_number;
}

int main(int argc, char* argv[]) {
  if (CheckCorrectParameters(argc, argv, 3)) {
    int min{std::stoi(argv[1])};
    int max{std::stoi(argv[2])};
    std::cout << RandomNumber(min, max) << std::endl;   
  } else {
    std::cout << "Wrong Input" << std::endl;
  }
  return 0;
}
