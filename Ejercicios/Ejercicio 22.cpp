#include <iostream>
#include <array>
#include <vector>
using namespace std;

int main() {
  vector <int> serie{0,1};

  cout << "Introduce numeros: ";
  int n;
  cin >> n;

  for(int i{2}; i<n; i++ ){
  
    serie.push_back(serie.at(i-2) + serie.at(i-1));
  }
  for(auto elem: serie){
    cout << elem << "\n";
  }
  return 0;
   
 
}