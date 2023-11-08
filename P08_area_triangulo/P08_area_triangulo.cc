/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @author Adriel Reyes Suárez alu0101640136@ull.edu.es
  * @date Nov 8 2023
  * @software license https://www.gnu.org/licenses/gpl-3.0.html
  * @brief El programa calcula el area de un triangulo mediante una funcion float usando el lado del triangulo
  * @bug There are no known bugs
  * 
  */


#include <iostream>
#include <cmath>
#include <iomanip>

/**
 * @brief La función calcula el area del triangulo equilátero
 * @para Se almacena el valor en la variable float "lado"
 * @return Retorna el area del triangulo
 */

double AreaTriangulo(const float lado) {
  return (std::sqrt(3)) * (lado * lado) / 4;
}

int main() {
  float lado;
  std::cin >> lado;
  std::cout << std::fixed << std::setprecision(4) << AreaTriangulo(lado) << std::endl;
  return 0;
}
