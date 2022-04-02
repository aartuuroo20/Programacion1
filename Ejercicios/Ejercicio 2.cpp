#include <iostream>
using namespace std;

string texto{"Tres tristes tigres comen trigo en un trigal"};

int main() {
  
  int pos = texto.find("tri");
  cout << "Primer tri: " << pos << "\n";
  pos = texto.find("tri", pos + 1);
  cout << "Segundo tri: " << pos << "\n";
  pos = texto.find("tri", pos + 1);
  cout << "Tercer tri: " << pos << "\n";
 

}