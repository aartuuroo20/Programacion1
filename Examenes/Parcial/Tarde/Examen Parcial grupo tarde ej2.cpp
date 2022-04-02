#include <iostream>
#include <array>
#include <math.h>
#include <vector>
#include <set>
using namespace std;

int main() {
  array <double,30> serie{1,2};
  vector <double> impares;
  set <double> ordenados;
  double total;

  for(int i=2;i<serie.size();i++){
    total = pow(-1,i)*serie.at(i-1)-serie.at(i-2);
    serie.at(i)=total;
    if(i % 2 == 1){
      impares.push_back(total);
    }
   }

  double contador{0};
  double media;
  for(auto elem: impares){
    cout << elem << "\n";
    contador = contador + elem;
    media = contador / impares.size();
  }
  cout << "La media es: " << media << "\n";

  for(auto elem:serie){
    ordenados.insert(elem);
  }
  for(auto elem:ordenados){
    cout<<elem<<"\n";
  }
}