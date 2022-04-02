#include <iostream>

using namespace std;

int main() {
  cout << "Introduce un numero: ";
  int n;
  cin >> n;
  int d{2};

  while(d < n){
    if(n % d ==0){
      cout << "No primo";
      return 0;
    }
    d++;
  }
  cout << "Es primo";
  return 0;
 
}