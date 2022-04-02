#include <iostream>
#include<array>
#include<set>
#include <stdlib.h>
#include <time.h> 
using namespace std;

set<int>conjunto;

int main() {

//apartado 1
  srand(time(NULL));
  array<int,100>arr;
for(int i{0};i<100;i++){
  arr.at(i)=5+rand()%551;
}

//apartado 2

int min=555;
int max=5;
for(auto elem:arr){
  if(elem<min)min=elem;
  if(elem>max)max=elem;

}
 cout<<"El maximo es: "<<max<<"\n";
 cout<<"el minimo es: "<<min<<"\n";

 //apartado3

 for(auto elem:arr){
   if( elem%2==0){
conjunto.insert(elem);
   }
  } 
}