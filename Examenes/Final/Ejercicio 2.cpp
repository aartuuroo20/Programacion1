#include <iostream>
#include <string>
#include<time.h>
using namespace std;

int main() {
  srand(time(NULL));
  int numero = rand()%50+1;

  for(int i=0; i<5; i++){
    cout << "Introduce numero: " << "\n";
    int adv; cin >> adv;
    if(adv == numero){
      cout << "Ganaste";
      return 0;
    }else if(numero > adv){
      cout << "Es mayor" << "\n";

    }else{
      cout << "Es menor" << "\n";
    }

    }
    cout << "Has perdido. El numero es " << numero << "\n";

  }
 

