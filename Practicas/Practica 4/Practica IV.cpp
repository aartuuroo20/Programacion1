	#include <iostream>
#include <functional>
#include <vector>
using namespace std;

int main() { 
  
  //Apartado 1

   //maximo 
   function<float (vector<float>const &)> max = [] (vector<float> const & v){
      float max{-9999999};
      for(auto elem: v){
        if(max < elem) max = elem;
      }

    return max;
  };

  //minimo
  function<float (vector<float>const &)> min = [] (vector<float> const & v){
      float min{9999999};
      for(auto elem: v){
        if(min > elem) min = elem;
      }

    return min;
  };

  //media de un vector
  function<float (vector<float>const &)> media = [] (vector<float> const & v){
    float suma{0};
    for(auto elem: v){
      suma += elem;
    }
    return suma / v.size();
  };

  //sumatorio
  function<float(vector<float>const &)> suma = [] (vector<float> const & v){
    float suma{0};
    for(auto elem: v){
      suma +=elem;
    }
    return suma;
  };

  //producto de un vector
  function<float(vector<float> const &)> producto = [] (vector<float> const & v){
    float producto;
    for(auto elem: v){
      producto = producto + elem;
    }
    return producto;
  };

  //Apartado 2

  function<float(function<float(vector<float>)>, function<float(vector<float>)>, vector<vector<float>>)> comp = [] (function<float(vector<float>)> f1, function<float(vector<float>)> f2, vector<vector<float>> vv){

    vector<float> g;
    for(auto v: vv){
      g.push_back(f2(v));
    }
    return f1(g);
  };

  cout << comp(max, max, {{1,2,3}, {3,5}, {1,1,1,1}}) << "\n";
  cout << comp(min, max, {{1,2,3}, {3,5}, {1,1,1,1}}) << "\n";
  cout << comp(suma, media, {{1,2,3}, {3,5}, {1,1,1,1}}) << "\n";
  cout << comp(media, suma, {{1,2,3}, {3,5}, {1,1,1,1}}) << "\n";

  //Apartado 3

  vector <float> v;
  vector <float> v1;
  int n;

  cout << "Cuantos vectores desea introducir: " << "\n";
  int numeros; cin >> numeros;

  for(int i=1; i<=numeros; i++){
    cout << "Introduce el tamaño del  vector \n";
    int tamaño; cin >> tamaño;
    for(int i=1; i<=tamaño; i++){
      cout << "Introduce un numero: ";
      cin >> n;
      v.push_back(n);
  }
}


  return 0;
}
