#include <iostream>
using namespace std;

string texto ="En un lugar de la Mancha, de cuyo nombre no quiero acordarme";

int main() {

 string palabra = "Mancha"; 
 int pos = texto.find(palabra);
 int length = palabra.size();
 string parte1 = texto.substr (0, pos);
 string parte2 = texto.substr (pos + length);
 cout << parte1 << "\n";
 cout << parte2 << "\n";

}