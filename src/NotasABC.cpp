#include "NotasABC.h"
#include<string>
#include"Alumno.h"
#include<iostream>
#include <stdexcept>
#include<sstream>
#include<vector>
#include "notas.h"
using namespace std;

NotasABC::NotasABC(){}
NotasABC::NotasABC(int trimestre_,string nombreItem_, string comentario_,string curso_,int codigo_,string nota_)
  : notas(trimestre_, nombreItem_, comentario_, curso_,codigo_)
{
    notan=nota_;
}
NotasABC::NotasABC(string lineafile,int trimestre){
    vector <string> file ;
    stringstream ss(lineafile);
    string actual;
    while (getline(ss, actual, ','))
        file.push_back(actual);
    this ->trimestre=trimestre;
    codigo=stoi(file[0]);
    curso=file[1];
    nombreItem=file[2];
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
    this->trimestre=stoi(file[0]);
    this->codigo=stoi(file[1]);
    this->curso=file[2];
    this->nombreItem=file[3];
    this->comentario=file[5];
    this->notan=file[4];
}
bool NotasABC ::validar(string nota){
 if (nota== "A"||nota== "B"|| nota=="C"){return true;}
 else
    cout<<"nota invalida";
    //throw invalid_argument("Usted no puede ingresar ese caracter");
}


void NotasABC:: imprimirnota(){
cout<<endl<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
cout<<"Trimestre: "<<trimestre<<endl;
cout<<"Curso: "<<curso<<endl;
cout<<"Competencia: "<<nombreItem<<endl;
cout<<"Nota: "<<notan<<endl;
cout<<"Conclusion Descriptiva: "<<comentario<<endl;
}

void NotasABC::setNotas(){
    cout<<curso<<" Indicador: "<<nombreItem<<endl;
    cout<<"Ingrese nota (A,B,C): ";
    cin>>notan;
    if (!validar(notan)){
        cout<<"Nota modificada a A";
        notan="A";
    }
    cout<<"Ingrese comentario: ";
    cin>>comentario;
}
string NotasABC::getString(){
    //cout<<"STRING MANDADA";
    return (to_string(trimestre)+","+to_string(codigo)+","+curso+","+nombreItem+","+notan+","+comentario);
}

