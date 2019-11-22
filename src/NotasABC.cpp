#include "NotasABC.h"
#include<string>
#include <stdexcept>
#include "notas.h"
using namespace std;
NotasABC::NotasABC(int trimestre_,string nombreItem_, string comentario_,char nota_)
  : notas(trimestre_, nombreItem_, comentario_)
{
    nota=nota_;
}

NotasABC::~NotasABC()
{
    //dtor
}
bool NotasABC ::validar(char nota){
 if (nota== 'A'||nota== 'B'|| nota== 'C'){return true;}

 else
    throw invalid_argument("Usted no puede ingresar ese caracter");

}
