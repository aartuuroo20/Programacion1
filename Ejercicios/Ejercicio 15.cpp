Usando while. A partir de un vector de números enteros, crear otro que contenga sólo los números pares. Por ejemplo, a parir de {1,3,4,5,6,7} se crea -> {4,6}.

#include <iostream>
#include <array>
#include <vector>

int main() {
  std::vector <int> vec = {1,3,4,5,6,7};

  std::vector <int> numerosPares;
  int pos = 0;


  while (pos < vec.size()) { 
    if (vec.at(pos) % 2 == 0) {
      numerosPares.push_back(vec.at(pos));
    }
    pos++;
  }

  pos = 0;

  while (pos < numerosPares.size()) {
    std::cout << numerosPares.at(pos) << "\n";
    pos++;
  }
}