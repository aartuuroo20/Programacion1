Crear un array de números enteros e indicar cuántas veces seguidas aparece como máximo el número 7. Es decir, para el array {1,2,7,7,4,3,3,7,7,7,2} el número máximo de veces seguidas que aparece el 7 es 3. Aparece 2 veces seguidas, y 3 veces seguidas, por lo que el máximo es 3.

#include <iostream>
#include <array>

int main() {
  std::array <int, 11> notas = {1,2,7,7,4,3,3,7,7,7,2};

  int contador7Seguidos = 0;
  int mayorNumeroVeces = 0;

  for (int elem: notas) {

    if (elem == 7) {
      contador7Seguidos++;
    }
    else {
      contador7Seguidos = 0;
    }

    if (contador7Seguidos > mayorNumeroVeces) {
      mayorNumeroVeces = contador7Seguidos;
    }
  }

  std::cout << mayorNumeroVeces;
}