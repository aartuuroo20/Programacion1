Pedir un número al usuario y calcular el sumatorio desde 1 hasta dicho número.

#include <iostream>

int main() {
  std::cout << "Introduce un numero: ";
  int numeroUsuario = 0;
  std::cin >> numeroUsuario;
  int sumatorio = 0;
  int i = 0;

  while (i <= numeroUsuario) {
    sumatorio = sumatorio + i;
    i++;
  } 
  
  std::cout << "El sumatorio es " << sumatorio;
}