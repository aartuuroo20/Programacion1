#include <iostream>
using namespace std;

int main() {
  int n{0};
  cout<<"elige num:";
  cin>>n;
  int d{2};

  
 for(int i{2}; i<n/2; i++){
   if(n % i==0){
     cout << "No primo";
     return 0;
    }
   
 
 }
 cout << "Es primo";
 return 0;

 
}