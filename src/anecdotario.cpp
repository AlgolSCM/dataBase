#include "anecdotario.h"
#include <iostream>
#include "fecha.h"
#include <string>
using namespace std;

anecdotario::anecdotario()
{
    titulo = "";
    descripcion = "";
    //fecha ();
    implicados = 0;
    alumnos= "";
}
anecdotario::~anecdotario()
{
    //dtor
}

void anecdotario::suceso(string titulo){
    this->titulo=titulo;
}
void anecdotario::describir(string descripcion){
    this->descripcion=descripcion;
}
/**void anecdotario::acontecimiento(fecha){
    this->fecha= fecha;
}*/
void anecdotario::involucrados(int implicados, string alumnos){
    this->implicados=implicados;
    this->alumnos=alumnos;
}
void anecdotario::MostrarAnecdota(){
    cout<<endl<<"=-=-=-=-=-=-=-=-=-ANECDOTARIO=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
}

