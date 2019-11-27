#include "NotasABC.h"
#include<string>
#include<iostream>
#include <stdexcept>
#include "notas.h"
using namespace std;
NotasABC::NotasABC(int trimestre_,string nombreItem_, string comentario_,string curso_,char nota_)
  : notas(trimestre_, nombreItem_, comentario_, curso_)
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

void NotasABC:: imprimirnotas(){
cout<<endl<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
cout<<"Trimestre"<<trimestre<<endl;
cout<<"Competencia: "<<nombreItem<<endl;
cout<<"Nota: "<<nota<<endl;
cout<<"Conclusion Descriptiva: "<<comentario<<endl;




}
