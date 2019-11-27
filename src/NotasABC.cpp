#include "NotasABC.h"
#include<string>
#include<iostream>
#include <stdexcept>
#include<sstream>
#include<vector>
#include "notas.h"
using namespace std;
NotasABC::NotasABC(int trimestre_,string nombreItem_, string comentario_,string curso_,int codigo_,string nota_)
  : notas(trimestre_, nombreItem_, comentario_, curso_,codigo_)
{
    nota=nota_;
}

NotasABC::~NotasABC()
{
    //dtor
}

NotasABC::NotasABC(string lineafile){
  vector <string> file ;
    stringstream ss(lineafile);
    string actual;
    while (getline(ss, actual, ','))
        file.push_back(actual);
    notas(stoi(file[0]),file[3],file[5],file[2],stoi(file[1]));
    nota=file[4];


}
bool NotasABC ::validar(string nota){
 if (nota== "A"||nota== "B"|| nota=="C"){return true;}

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
