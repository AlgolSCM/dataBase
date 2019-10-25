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

void Alumno::menuSeleccionAlumno(){
    cout<<"Menu seleccion alumno "<<getNombres()<<" "<<getApellidos()<<endl;

}






string Alumno::getNombres(){return nombre;}
string Alumno::getApellidos(){return apellido;}
