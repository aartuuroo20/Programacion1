#include <iostream>
#include <array>
using namespace std;

int main(){
    array <int, 6> nums={5, 7, 8, 7, 4, 2};
    int contador=0;

    for(int i=0; i<nums.size(); i++){
     if(nums[i]==7)contador++;
 }
  cout << "Contador: 7 " << "=" << contador;

}