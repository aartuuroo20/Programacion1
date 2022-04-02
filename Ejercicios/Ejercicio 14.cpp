#include <iostream>
using namespace std;
#include <vector>

int main() {
  vector <int>  nums{2, 5, 6, 8};

  for(int i=0; i<nums.size(); i++){
    if(nums[i]%2==0){
       cout << " " << nums[i];
    }
  }
}