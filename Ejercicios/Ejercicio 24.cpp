Realizar un programa que pida al usuario un número y almacene en un std::vector sus factores (todos aquellos números menores que él por los que puede ser dividido).


#include <iostream>
#include <vector>

int main() {
  std::cout << "Introduce un numero ";
  int numero = 0;
  std::cin >> numero;
  std::vector <int> factores = {};

  for (int divisor = 1; divisor <= numero/2; divisor++) {
    if (numero % divisor == 0) {
      factores.push_back (divisor);
    }
  }

  for (auto elem: factores) {
    std::cout << elem << "\n";
  }
  
}