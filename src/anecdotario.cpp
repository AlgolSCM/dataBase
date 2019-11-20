#include "anecdotario.h"
#include <iostream>
#include "fecha.h"
#include <string>
using namespace std;

anecdotario::anecdotario()
{
    titulo = "";
    descripcion = "";
    implicados = 0;
    alumnos= "";
}
anecdotario::~anecdotario()
{
    //dtor
}
anecdotario::anecdotario(int implicados,string titulo, string descripcion, string alumnos, fecha dia){
    this->implicados=implicados;
    this->titulo=titulo;
    this->descripcion=descripcion;
    this->alumnos=alumnos;
    this->dia=dia;
    cout<<"Fecha:(ingrese dia, mes y año) ";int c,d,e;cin>>c;cin>>d;cin>>e;
    dia.setDiaMesAnio(c,d,e);
}
/**void anecdotario::MostrarAnecdota(){
    cout<<endl<<"=-=-=-=-=-=-=-=-=-ANECDOTARIO=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
    cout<<titulo<<endl;
    cout<<descripcion<<endl;
    cout<<implicados<<endl;
}

*/
