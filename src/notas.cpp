#include "notas.h"
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

notas::notas()
{
   this ->nota='A';
   this ->comentario="Demostraste un buen desempenio";
   this ->nombreItem="Construye su identidad";
}

notas::~notas()
{
    //dtor
}
bool notas :: CantidadCaracteres(string comentario){
unsigned int tam=comentario.length();
if( tam>=10 && tam<=350)
    return true;
else
    throw invalid_argument("Usted no cumple con la cantidad de caracteres que se necesita");
}



void notas ::imprimirnota(){
if (CantidadCaracteres(comentario)== true){
    cout<<endl<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
    cout<<"Competencia: "<<nombreItem<<endl;
    cout<<"Nota: "<<nota<<endl;
    cout<<"Conclusion Descriptiva: "<<cout<<endl<<comentario<<endl;

}
}
