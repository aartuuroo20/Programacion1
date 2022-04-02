#include <iostream>
using namespace std;
#include <vector>

int main() {
  int a{0};
  int b{0};
  int c{0};
  vector <int> multiplos;
  
  cout << "Introduce 3 numeros: ";
  cin >> a >> b >> c;

  int num{a};
  while(num<=b){
    if(num % c ==0) multiplos.push_back(num);
    num++;
  }


  }
 