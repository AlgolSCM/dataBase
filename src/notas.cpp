#include "notas.h"
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

notas::notas()
{
    //ctor
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
    return false;
}


void notas :: NotaporItem(string nombreItem,char nota, string comentario){
if (CantidadCaracteres(comentario)== true){
    cout<< nombreItem<<endl;
    cout<<"Nota"<<setw(10)<<"Conclusion Descriptiva"<<endl;
    cout<<nota<<setw(10)<<comentario<<endl;
}
else
    cout<<"No cumple con la cantidad de caracteres solicitada, vuelva a ingresar"<<endl;
}
