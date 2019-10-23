#include "Alumno.h"
#include <iostream>

using namespace std;

Alumno::Alumno()
{
    //ctor
}

Alumno :: Alumno(string apellidos,string nombres){
    Alumno::apellido=apellidos;
    Alumno::nombre=nombres;
}

Alumno::~Alumno()
{
    //dtor
}

void Alumno::menuSeleccion(){
    cout<<"Menu seleccion alumno";

}
