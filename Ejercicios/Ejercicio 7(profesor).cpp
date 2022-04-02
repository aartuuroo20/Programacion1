#include <iostream>
using namespace std;

int main() {
 string texto;
 cout << "Introduzca un texto: \n";
 getline(cin, texto);

 char comprobacion {'a'};
 int a;
 
 for(auto i: texto){
    if(i=='a'){
      a++;
    }
 }
 cout << "Numeros de " << comprobacion << a;
}