#include "notas.h"
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

notas::notas()
{
   this ->trimestre=1;
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
    cout<<"Trimestre: "<<trimestre<<endl;
    cout<<"Competencia: "<<nombreItem<<endl;
    cout<<"Conclusion Descriptiva: "<<endl<<comentario<<endl;

}
}
