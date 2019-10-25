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
