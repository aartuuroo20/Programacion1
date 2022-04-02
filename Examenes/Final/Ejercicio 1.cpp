#include <iostream>
#include <string>
#include<vector>
using namespace std;

int main() {
  string cadena;
  cout << "Introduce una frase: " << "\n";
  getline(cin,cadena);

  vector<string> palabras;
  string palabra;

  for(auto e: cadena){ //COmo siempre va a haber una primera palabra en una frase este lo almacena en la varible string, posteriormete cuando encuentra un espacio añade lo que ha almacenado el string al vector y lo borra y asi sucesivamente hasta acabar
    if(e!=' '){
      palabra.push_back(e);
    }else{
      palabras.push_back(palabra);
      palabra.clear();
    }

  }

  if(!palabra.empty()) palabras.push_back(palabra);

  for(auto palabra: palabras ){
    char primera = palabra.front();
    char ultima = palabra.back();
    if(primera == 'a'||primera == 'e'||primera == 'i'||primera == 'o'||primera == 'u'){
      if(ultima == 'a'||ultima == 'e'||ultima == 'i'||ultima == 'o'||ultima == 'u'){
        cout << palabra << "\n";
      }

    }
  }

}


