#include "Alumno.h"

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
