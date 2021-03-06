#include <iostream>
#include <array>
#include <set>
#include <cmath>
​
int main()
{
    int indice{0};
    std::array<double,10> cadena;
    double numero{0.0};
    
    //Pedimos al usuario que introduzca 10 números por teclado
    while(indice < 10)
    {
        std::cout<<"\nIntroduce numero "<<indice<<": ";
        std::cin>>numero;
        
        cadena.at(indice)=numero;
        indice++;
    }
    
    //Calculamos la media de los valores introducidos
    double acum{0};
    for(double elem:cadena)
    {//Calculamos la suma de todos los elementos
        acum=acum+elem;
    }
    double media=acum/cadena.size(); //Dividimos entre el numero de elementos
    std::cout<<"La media es: "<<media<<std::endl;
    
    //Calculamos la desviación típica
    //https://es.wikipedia.org/wiki/Desviaci%C3%B3n_t%C3%ADpica
        //Desviación estándar poblacional de las calificaciones de ocho alumnos
​
    //Calculamos la desviación de cada dato respecto a la media
    std::array<double,10> desv;
    for(int i=0;i<cadena.size();i++)
    {
        desv.at(i)=pow(cadena.at(i)-media,2);
    }
    
    //Calculamos la varianza (media de las deviaciones de cada dato)
    double acumdesv{0};
    for(double elem:desv)
    {
        acumdesv=acumdesv+elem;
    }
    std::cout<<"La varianza es: "<<acumdesv/desv.size()<<std::endl;
    //Calculamos la desviación estándar
    std::cout<<"La desviacion estandar es: "<<sqrt(acumdesv/desv.size())<<std::endl;
    
    //Mostramos máximo y mínimo
    std::set<double> Conj;
    for(double elem:cadena)
    {//Metemos los valores introducidos en un set
        Conj.insert(elem);
    }
    
    int cont{0};
    for(double elem:Conj)
    {//Lo recorremos quedándonos con el primero y el último. Que son el mínimo y el máximo
        if(cont==0)
        {
            std::cout<<"El valor minimo es: "<<elem<<std::endl;
        }
        else if(cont==Conj.size()-1)
        {
            std::cout<<"El valor maximo es: "<<elem<<std::endl;
        }
        
        cont++;
    }
    
    //Mostramos por pantalla los valores ordenados sin mostrar los repetidos
    std::cout<<"Los numeros introduciso ordenados de menor a mayor, sin repetición son: ";
    for(double elem:Conj)
    {
        std::cout<<elem<<"_";
    }
    
    return 0;
