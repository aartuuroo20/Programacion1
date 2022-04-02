#include <iostream>
#include <vector>

//ejercicio 3
int main() {
  std::vector<std::string>vec;
  std::vector<std::string>vec2;

  std::string word = "En medio del camino de la vida me vi perdido en una selva oscura, la  buena senda errada y la andadura, cuando el alma vagaba adormecido. Largo fuera contar, que no se olvida, como era aquel lugar de desventura y es solo recordar tanta amargura, y la mente quedar despavorida";

  std::string guardar= "";
  std::string guardar2= "";
  //apartado 1 
  for (auto elem:word){

    if(elem==' '){
      vec.push_back(guardar);
      guardar= "";

    }else{
      guardar.push_back(elem);
    }
  }
  //la ultima palabra
  vec.push_back(guardar);
  for(auto elem:vec){
    std::cout<<elem<<"\n";
  }

  //apartado 2
  for (auto elem:word){

      if(elem=='.'){
        vec2.push_back(guardar);
        guardar2= "";

      }else{
        guardar2.push_back(elem);
      }
    }
    //la ultima oracion
    vec2.push_back(guardar2);
    for(auto elem:vec2){
      std::cout<<elem<<"\n";
    }
}