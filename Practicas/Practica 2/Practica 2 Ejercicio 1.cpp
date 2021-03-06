#include <iostream>
#include <string>
​
int main()
{
    //Introducimos texto por teclado
    std::string texto;
​
    std::cout<<"Introduce un texto por teclado: ";
    getline(std::cin,texto);
​
    std::cout<<"El texto introducido es: "<<texto<<std::endl;
​
    for(int i=0;i<texto.size();i++)
    {//Recorremos el string buscando '1','2' o '3'
​
        switch(texto.at(i))
        {//En todos los casos mostramos por pantalla el caracter
            case '1': //Si es '1' saltamos una posición
                std::cout<<texto.at(i)<<std::endl;
                if(i+1<texto.size())
                {//Comprobamos que no nos salimos del string
                    i=i+1;
                }
                else
                {
                    std::cout<<"Superado tamaño del texto"<<std::endl;
                    i=texto.size();
                }
                            
            break;
            case '2'://Si es '2' saltamos dos posiciones
                std::cout<<texto.at(i)<<std::endl;
                if(i+2<texto.size())
                {//Comprobamos que no nos salimos del string
                    i=i+2;
                }
                else
                {
                    std::cout<<"Superado tamaño del texto"<<std::endl;
                    i=texto.size();
                }
                
            break;
            case '3': //Si es '3' saltamos tres posiciones
                std::cout<<texto.at(i)<<std::endl;
                if(i+3<texto.size())
                {//Comprobamos que no nos salimos del string
                    i=i+3;
                }
                else
                {
                    std::cout<<"Superado tamaño del texto"<<std::endl;
                    i=texto.size();
                }
​
            break;
            default: //Para cualquier otro caracter no contemplado en los case, lo mostramos por pantalla
                std::cout<<texto.at(i)<<std::endl;
        }
    }
    
    return 0;
}