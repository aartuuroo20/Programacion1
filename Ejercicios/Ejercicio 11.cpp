#include <iostream>
#include<array>
using namespace std;

int main() {
  array<int, 10> nums{1,2,3,4,5,6,7,8,5,4};
  array<int, 11> contar{0,0,0,0,0,0,0,0,0,0,0};
  int cont{0}; //vueltas del for
  int max{0}; //las veces que se repite
  int mayor{0}; //el numero que mas veces se repite
  
  for (auto e: nums){ //guarda las veces que se repite cada numero
    contar.at(e)++;
  }
  
  
  for(auto e: contar){
    cout<<e<<"\n";
    if( e > max){
      max=e;
      mayor=cont;
    }
    cont++;
  }
  cout <<mayor << " , " << max;
}