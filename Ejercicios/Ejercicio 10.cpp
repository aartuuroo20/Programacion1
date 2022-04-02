#include <iostream>
#include<array>
using namespace std;

int main() {
  array <int, 6> nums{1, 3, 5, 7, 8, 9};
  float suma{0};

  for(int i: nums){
   suma = suma + i;
  }
  float media = suma / nums.size();
  cout << "La media es: " << media;
  
 }