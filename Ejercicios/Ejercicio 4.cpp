#include <iostream>
using namespace std;

int main() {
 string texto{""};
 string pwd{""};
 cout << "Introduce una frase; \n";
 getline(cin,texto);
 //hola password perro que tal
 int x = texto.find("password");

 if(x==-1){
   cout << "No hay password en tu frase\n";
 }else{
   int posinicial = x + 9; //posinicial=14
   int posfinal = texto.find(" ",posinicial); //posfinal=19 ("Encuentra un espacio apartir de la posinicial")
   pwd = texto.substr(posinicial, posfinal - posinicial);
   cout << "la pwd es " << pwd << "\n";
  }
}