#include <iostream>
#include <stdlib.h>
#include <array>
using namespace std;

int numero;
int resultado;
int numero2;
int deter1;
int deter2;
int fila; int col;
array <array<int,3>, 3> mat;
array <array<int,3>, 3> mat2;
array <array<int,3>, 3> mat3={};
array <array<int,3>, 3> mat4={};






void determinante(){ //apartado 5
  deter1 = (mat.at(0).at(0) * mat.at(1).at(1) * mat.at(2).at(2) +mat.at(1).at(0) * mat.at(2).at(1) * mat.at(0).at(2) + mat.at(0).at(1) *mat.at(1).at(2) * mat.at(2).at(0)) - (mat.at(0).at(2) * mat.at(1).at(1) * mat.at(2).at(0) + mat.at(1).at(2) * mat.at(2).at(1) * mat.at(0).at(0) + mat.at(1).at(0) * mat.at(0).at(1) * mat.at(2).at(2));

  deter2= (mat2.at(0).at(0) * mat2.at(1).at(1) * mat2.at(2).at(2) +mat2.at(1).at(0) * mat2.at(2).at(1) * mat2.at(0).at(2) + mat2.at(0).at(1) *mat2.at(1).at(2) * mat2.at(2).at(0)) - (mat2.at(0).at(2) * mat2.at(1).at(1) * mat2.at(2).at(0) + mat2.at(1).at(2) * mat2.at(2).at(1) * mat2.at(0).at(0) + mat2.at(1).at(0) * mat2.at(0).at(1) * mat2.at(2).at(2));
}




int main() {
 
  cout << "1. Salir del programa: \n";
  cout << "2. Introducir matrices: \n";

  cout << "Ingrese una opcion: ";
  cin >> numero;

  if(numero == 2){
    cout << "Matriz 1: \n";
        for(int fila{0}; fila < 3; fila++){
          for(int col{0}; col < 3; col++){
            cout << "Introduce el elemento " << fila << ", " << col << ": ";
            int num;
            cin >> num;
            mat.at(fila).at(col) = num;
    }
  }
        cout << "Matriz 2: \n";
          for(int fila{0}; fila < 3; fila++){
            for(int col{0}; col < 3; col++){
            cout << "Introduce el elemento " << fila << ", " << col << ": ";
            int num;
            cin >> num;
            mat2.at(fila).at(col) = num;
    }
  }

  cout << "3 para sumarlas: \n";
  cout << "4 para restarlas: \n";
  cout << "5 para calcular sus determinantes: \n";
  cout << "6 para ver las matrices escritas originales: \n";

  cout << "Ingrese una opcion: ";
  cin >> numero2;

  if(numero2==3){
    cout << "Matriz suma: \n";
     for(int fila{0}; fila < 3; fila++){
          for(int col{0}; col < 3; col++){
            mat3.at(fila).at(col) =  mat.at(fila).at(col) +  mat2.at(fila).at(col) ;
            cout <<  mat3.at(fila).at(col) << " ";
      }
        cout << "\n";

  }
    
    
   
  }
  else if(numero2==4){
    cout << "Matriz resta: \n";
        for(int fila{0}; fila < 3; fila++){
          for(int col{0}; col < 3; col++){
            mat4.at(fila).at(col) =  mat.at(fila).at(col) -  mat2.at(fila).at(col) ;
            cout <<  mat4.at(fila).at(col) << " ";
    }
      cout << "\n";
        }

  }else if(numero2 ==5){
    determinante();
    cout << "El determinante de la matriz 1: " << deter1 << "\n";
    cout << "El determinante de la matriz 2: " << deter2 << "\n";
  }else{
    cout << "Matriz 1: \n";
    for(auto fila:mat){
      for(auto elem: fila){
        cout << elem << " ";
      }
      cout << "\n";
    }
    cout << "Matriz 2: \n";
    for(auto fila: mat2){
      for(auto elem:fila){
        cout << elem << " ";
      }
      cout << "\n";
    }


  }

  }

else{
    cout << "Saliste del programa";
  }
}
