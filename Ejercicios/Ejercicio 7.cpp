#include <iostream>
using namespace std;

int main() {
  
  string texto;
  cout << "Introduce un texto: \n";
  getline(cin, texto);

  int a=0;
  char comprobación = 'a';

  for(int i=0; i<texto.length(); i++){
    if(texto[i]=='a'||texto[i]=='A')a++;
   }
   cout << "El numero de " << comprobación << "=" << a;
}