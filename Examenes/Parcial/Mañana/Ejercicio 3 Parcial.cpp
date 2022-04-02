#include <iostream>
#include<vector>
using namespace std;
int main() {

//apartado 1

  string b;
  cout << "introduzca una frase: \n";
  getline(cin,b);
  //apartado 2
  for(int pos=b.size()-1;pos>=0;pos--){
    cout<<b.at(pos);
  }
  cout<<"\n";

  //apartado 3

  int contador=0;
    int found=b.find("as");
    while(found!=-1){
    contador++;
    found=b.find("as",found+1);
    }
    cout<<"as aparece: "<<contador<<" veces\n";

    //apartado 4

vector<string>palabras;
string palabra = "";
for (auto elem: b) {
  if(elem!=' '){
palabra=palabra+elem;
  }else{
palabras.push_back (palabra);
palabra="";
  }
}
if(!palabra.empty())palabras.push_back(palabra);
}