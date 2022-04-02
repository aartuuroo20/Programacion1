#include <iostream>

int main() {
  int n{0};
  std::cout<<"elige num\n";
  std::cin>>n;
  int f{1};
  for(int i=1;i<=n;i++){
    f=f*i;
  }
  std::cout<<f<<"\n";
}