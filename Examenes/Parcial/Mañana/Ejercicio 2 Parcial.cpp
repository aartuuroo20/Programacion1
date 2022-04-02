#include <iostream>
using namespace std;

int main() {

//apartado 1

  int suma=0;
  for(int i=1;i<=100;i++){
    suma=suma+i;
  }
 
 cout << "la suma es: "<<suma<<"\n";

 //apartado 2

 int mostrados=0;
 int num=1;
 while(mostrados<10){
if(num%3==0 && num%2==0){
  cout<<num<<"\n";
  mostrados++;
}
num++;
 }

  //apartado 3

  mostrados=0;
  num=50;
  while(mostrados<1){
    bool primo=true;//compruebo si es primo
    for(int i=2;i<num/2;i++){
       if(num%i==0){
         primo=false;
       }
    }
         if(primo){
     cout<<"El primer numero primo mayor que 50 es: "<<num<<"\n";
     mostrados=1;
      }
     num++; 
   }
}