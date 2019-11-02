#include "anecdotario.h"
#include <iostream>
#include "fecha.h"
using namespace std;


anecdotario::anecdotario()
{
    //ctor
}

anecdotario::anecdotario(int implicadosnumero,string suceso, string descripcionde, fecha acontecimiento)
{
    titulo = suceso;
    descripcion = descripcionde;
    fecha dia = acontecimiento;
    implicados = implicadosnumero;
}
anecdotario::~anecdotario()
{
    //dtor
}

void anecdotario::suceso(string titulo){
    this->titulo=titulo;
}
void anecdotario::descripcion(string detalles){
    this->detalles=detalles;
}
void anecdotario::acontecimiento(fecha acontecimiento){
    this->fecha acontecimiento= fecha acontecimiento;
}
void anecdotario::implicados(int numero, string alumnos){
    this->numero=numero;
    this->alumnos=alumnos;
}
void anecdotario::MostrarAnecdota()
    cout<<endl<<"=-=-=-=-=-=-=-=-=-ANECDOTARIO=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;


