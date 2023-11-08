#include <iostream>
#include <string>

bool OrdenAlfabetico(const std::string& cadena) {
  for (int i{0}; i < cadena.length() - 1; i++) {
    if (cadena[i] > cadena[i + 1]) {
      return false;
    } 
  }
  return true;
}

std::string CombinacionCadenas(const std::string& cadena1, std::string& cadena2) {
  int suma_length = cadena1.length() + cadena2.length();
  std::string copia1{cadena1}, copia2{cadena2};
  copia1 += "~";
  copia2 += "~";
  std::string cadena_ordenada{""};
  for (int i{0}; i < suma_length; i++) {
    if (copia1[i] < copia2[i]) {
      cadena_ordenada += cadena1[i];
      if (copia1[i + 1] > copia2[i]) {
        cadena_ordenada += cadena2[i];
      } 
    } else {
      cadena_ordenada += cadena2[i];
      if (copia2[i + 1] > copia1[i]) {
        cadena_ordenada += cadena1[i];
      }  
    }
  }
  return cadena_ordenada;
}

int main() {
  std::string cadena1, cadena2;
  std::cin >> cadena1 >> cadena2;
  if (!OrdenAlfabetico(cadena1) || !OrdenAlfabetico(cadena2)) {
    std::cerr << "Error: las cadenas no están ordenadas" << std::endl;
  } else {
    std::cout << CombinacionCadenas(cadena1, cadena2) << " está ordenada" << std::endl;
  }
  return 0;
}
