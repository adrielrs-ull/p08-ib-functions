/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file integer_division_and_reminder.cc
  * @author Adriel Reyes Suárez alu0101640136@ull.edu.es
  * @date Nov 8 2023
  * @software license https://www.gnu.org/licenses/gpl-3.0.html
  * @brief El programa calcula el volumen de un cilindro de cierto radio y
  * altura
  * @bug There are no known bugs
  * 
  */


#include <iostream>
#include <cmath>
#include <iomanip>

/**
 * @brief La función calcula el area de un círculo
 * @para "radio" toma el valor del radio introducido
 * @return Devuelve el area del círculo de forma double
 */

double AreaCirculo(const int radio1) {
  return M_PI * radio1 * radio1; 
}

/**
 * @brief La función calcula el volumen de un círculo
 * @para "radio" toma el valor del radio introducido y "altura" del valor introducido
 * @return Devuelve el volvolumen del cilindro de forma double
 */


double VolumenCilindro(const int radio2, const int altura) {
  return altura * AreaCirculo(radio2);
}

int main() {
  int radio3, altura2;
  std::cin >> radio3 >> altura2;
  std::cout << std::fixed <<  std::setprecision(4) << VolumenCilindro(radio3, altura2) << std::endl;
}
