#include <iostream>
using namespace std;

int main() {
 string texto;
 cout << "Introduzca un texto: \n";
 getline(cin, texto);
 int pos{-1};

 for(auto elem: texto){
   pos++;
   if(elem == ' '){
     if(texto.at(pos+1)=='a'){
       int next_espacio = texto.find(' ',pos+1);
       if(next_espacio != -1){
         cout << texto.substr(pos+1, next_espacio- pos-1);
       }else{
         cout << texto.substr(pos+1);
         }
     }
   }
 }
 
}