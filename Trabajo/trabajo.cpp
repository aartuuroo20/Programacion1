#include <iostream> 
#include <vector>
#include <functional>
#include <math.h>
#include <fstream>
#include <stdlib.h>
using namespace std;

int n;
string nombrecompleto;
vector <string> nombrescompletos;
int DNI;
vector <int> DNIS;
string correo;
vector <string> correos;
float notaparticipacion;
vector <float> notaparcials;
float notaparcial;
vector <float> notapracticas;
float notapractica;
vector <float> notaparticipacions;
float trabajo;
vector <float> trabajos;
float examen;
vector <float> examens;
vector <float> finals;
float varianza;

float notafinal(){
  float nota;
  float numero1 = 0.05* notaparticipacion;
  float numero2 = 0.05* notapractica;
  float numero3 = 0.15* trabajo;
  float numero4 = 0.1* notaparcial;
  float numero5 = 0.65* examen;

  return nota = numero1+numero2+numero3+numero4+numero5;

}

float media(vector <float> const & v){
  float m{0};
  for(auto elem: v){
    m += elem;
  }
  return m/v.size();
}

float desviacion_tipica(vector<float> const & data){
  float m = media(data);
  float sum{0};
  for(auto elem: data){
    sum += (elem-m)*(elem-m);
  }
  sum=sum/data.size();
  return sqrt(sum);

}

float mediana(vector<float> const & v2){
  float mediana;
  if(v2.size() % 2 == 0){
    mediana = (v2.size()/(2-1) + v2.size()/2) / 2;
    }else{
      mediana =  v2.size() /2;
    }
    return mediana;
  }

float lista(vector<float> const & v, vector <float> const & v2){
  int contador{0};
  for (int  i = 0; i < v.size(); i++) {
    cout << v.at(i) << " ";
    for(contador=0; contador < v2.size(); contador++){
      cout << v2.at(i) << "\n";
      break;
    }
    contador++;

  }
  return contador;

}

float sus(vector <float> const & v){
  int contador{0};
  int pos{0};
  while(pos < v.size()){
    if(v.at(pos) < 5){
      contador++;
    }
    pos++;
  }
  return contador;
}

float apro(vector <float> const & v){
  int contador{0};
  int pos{0};
  while(pos < v.size()){
    if(v.at(pos) >= 5){
      contador++;
    }
    pos++;
  }
  return contador;
}
  
function<float (vector<float>const &)> maximo = [] (vector<float> const & v){
  float max{-9999999};
  for(auto elem: v){
    if(max < elem) max = elem;
  }

  return max;
};

function<float (vector<float>const &)> minimo = [] (vector<float> const & v){
  float min{9999999};
  for(auto elem: v){
    if(min > elem) min = elem;
  }

  return min;
};

int main(){

  cout << "Introduce el numero de alumnos: ";
  cin >> n;

  for(int i=0; i<n; i++){
    cout << "Introduce nombre completo con barra baja entre nombre y apellidos: " << "\n";
    cin >> nombrecompleto;
    nombrescompletos.push_back(nombrecompleto);
    cout << "Introduce DNI: " << "\n";
    cin >> DNI;
    DNIS.push_back(DNI);
    cout << "Introudce correo correo acabado en @aprobado.nebrija: " << "\n";
    cin >> correo;
    correos.push_back(correo);
    cout << "Introduce nota de parcial: " << "\n";
    cin >> notaparcial;
    notaparcials.push_back(notaparcial);
    cout << "Introduce media de las practicas: " << "\n";
    cin >> notapractica;
    notapracticas.push_back(notapractica);
    cout << "Introudce nota de participacion: " << "\n";
    cin >> notaparticipacion;
    notaparticipacions.push_back(notaparticipacion);
    cout << "Introudce nota trabajo: " << "\n";
    cin >> trabajo;
    trabajos.push_back(trabajo);
    cout << "Introudce nota del examen final: " << "\n";
    cin >> examen;
    examens.push_back(examen);
    cout << "Tu nota final es: " << "\n";
    cout << notafinal() << "\n";
    finals.push_back(notafinal());
    cout<<"\n";
  }
  
  cout << "Introduce 1 para ver media, mediana y desviación tipica (de todos los alumnos) de cada una de las notas, para ver el listado de alumnos con su nota final, para ver el numero de alumnos suspensos y aprobados y para ver la menor nota final de la asignatura y la mayor nota. \n";

  cout<<"\n";

  int opcion; cin >> opcion;
  
  cout<<"\n";

  if(opcion == 1){
  float media1 = media(notaparcials);
  cout<<"la media de los parciales es : "<<media1<<"\n";
  float media2 = media(notapracticas);
  cout<<"la media de las practicas es : "<<media2<<"\n";
  float media3 = media(notaparticipacions);
  cout<<"la media de participacion es : "<<media3<<"\n";
  float media4 = media(trabajos);
  cout<<"la media de los trabajos es : "<<media4<<"\n";
  float media5 = media(examens);
  cout<<"la media del examen final es : "<<media5<<"\n";
  float media6 = media(finals);
  cout<<"la media de las finales es : "<<media6<<"\n";

  cout<<"\n";

  float des1 = desviacion_tipica(notaparcials);
  cout<<"la desviacion tipica de los parciales es : "<<des1<<"\n";
  float des2 = desviacion_tipica(notapracticas);
  cout<<"la desviacion tipica de las practicas es : "<<des2<<"\n";
  float des3 = desviacion_tipica(notaparticipacions);
  cout<<"la desviacion tipica de participacion es : "<<des3<<"\n";
  float des4 = desviacion_tipica(trabajos);
  cout<<"la desviacion tipica de los trabajos es : "<<des4<<"\n";
  float des5 = desviacion_tipica(examens);
  cout<<"la desviacion tipica del examen final es : "<<des5<<"\n";
  float des6 = desviacion_tipica(finals);
  cout<<"la desviacion tipica de las finales es : "<<des6<<"\n";
  
  cout<<"\n";

  float med1 = mediana(notaparcials);
  cout << "La mediana de los parciales es: " << med1 << "\n";
  float med2 = mediana(notapracticas);
  cout << "La mediana de los parciales es: " << med2 << "\n";
  float med3 = mediana(notaparticipacions);
  cout << "La mediana de los parciales es: " << med3 << "\n";
  float med4 = mediana(trabajos);
  cout << "La mediana de los parciales es: " << med4 << "\n";
  float med5 = mediana(examens);
  cout << "La mediana de los parciales es: " << med5 << "\n";
  float med6 = mediana(finals);
  cout << "La mediana de los parciales es: " << med6 << "\n";

  cout<<"\n"; 

  cout<<"lista de alumnos con su nota final:\n";
  int contador{0};
  for (int  i = 0; i < nombrescompletos.size(); i++) {
    cout << nombrescompletos.at(i) << " ";
    for(contador=0; contador < finals.size(); contador++){
      cout << finals.at(i) << "\n";
      break;
    }
    contador++;

  }

  cout<<"\n";

  float suspensos = sus(finals);
  cout<<"Han suspendido "<<suspensos<< " alumnos\n";

  float aprobados = apro(finals);
  cout<<"Han aprobado "<<aprobados<< " alumnos\n";

  cout<<"\n";

  float min = minimo(finals);
  cout<< "La nota final minima es : "<<min<<"\n";

  float max = maximo(finals); 
  cout<< "La nota final maxima es : "<<max<<"\n";
  
  cout<<"\n";

  ofstream file;
    
  file.open("C:/Users/arturo/Downloads/notas.txt");

  for(int i=0;i<nombrescompletos.size();i++){
   file << nombrescompletos.at(i) << " ; "<< DNIS.at(i) << " ; "<< correos.at(i)<< " ; "<< notaparcials.at(i)<< " ; "<< notapracticas.at(i) << " ; "<< notaparticipacions.at(i) << " ; " << trabajos.at(i) << " ; " << examens.at(i) << " ; "<< finals.at(i) << ";\n";
  }
  file.close();
  return 0;
  }
}