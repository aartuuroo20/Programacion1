#include <iostream>
#include <vector>
#include <functional>
#include<cmath>
#include<stdio.h>
#include<time.h>
using namespace std;

auto apartado1 = [] (vector<int> const & v){
  vector<int> resultado;
  for(auto elem: v){
    if(elem > 12){
      resultado.push_back(elem);
    }
  }
  return resultado;
};

auto apartado2 = [](vector<int> const & v){
    vector<int> resultado;
    for(auto elem: v){
        if(elem % 5 ==0){
            resultado.push_back(elem);
        }

        }
    return  resultado;
};

vector<int> transform(vector<int> const & v, function<int(int)>f){
        vector<int> result;
        for(auto elem: v){
          result.push_back(f(elem));
        
        
    }
    return result;
};

void foreach (vector<int> const & v, function <void(int)> f){
        for(auto elem: v) f (elem);
    };

int main() {
    srand (time(NULL));
      vector <int> v;
      for(int i=0; i<=150; i++){
        int numero = rand() % 11+5;
        v.push_back(numero);
      }

    cout << "El primer vector es: " << "\n";
    for(auto elem: v){
        cout << elem << "-";
    }

    cout << "\n";

    vector <int> v1 = apartado1(v);
    cout << "El segundo vector es: " << "\n";
    for(auto elem: v){
        cout << elem << "-";
    }

    cout << "\n";

    vector <int> v2 = apartado2(v);
    cout << "El tercer vector es: " << "\n";
    for(auto elem: v2){
        cout << elem << "-";
    }



    auto doble=[](int x){
            return 2*x;
        };

    cout << "\n";
    cout << "\n";

    vector<int> v3;
    auto resultado = transform(v, doble);
    for(auto elem: resultado){
        v3.push_back(elem);

    }

    for(auto elem: v3){
        cout << elem << "-";
    }







}