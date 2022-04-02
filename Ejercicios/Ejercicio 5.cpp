#include <iostream>
#include<array>
using namespace std;

int main() {
 array <int, 5> notas{ 4, 3, 7, 8, 5};
 int pos{-1};
 bool encontrado = false;
 for(int n: notas){
   pos = pos +1;
   if(n==7){
     encontrado=true;
     cout << "Hay un 7 en la posicion " << pos << "\n";
   }
}
if(! encontrado){
  cout << "No he encontrado ningun 7\n";
}
}