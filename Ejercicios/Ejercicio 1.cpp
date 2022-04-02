 #include <iostream>
 using namespace std;

  struct Cuadrado{
     float lado;
     int posicion;
   };
  struct Triangulo_isosceles{
     int base;
     float altura;
     int posicion;
   };
  struct Circulo{
     int radio;
     int posicion;
   };
   

 int main() {

   Cuadrado cuadrado;
   Triangulo_isosceles triangulo;
   Circulo circulo;

   cuadrado.lado = 5.5;
   cuadrado.posicion = 'Izquierda';

   triangulo.base = 6;
   triangulo.altura = 8.8;
   triangulo.posicion = 'Centro';

   circulo.radio = 7;
   circulo.posicion = 'Derecha';
}