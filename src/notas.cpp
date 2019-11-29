#include "notas.h"
#include<iostream>
#include<iomanip>
#include <stdexcept>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
notas::notas(){
this ->trimestre=1;
   this ->comentario="Demostraste un buen desempenio";
   this ->nombreItem="Construye su identidad";
   this->curso="Matematica";
}


notas::notas(int trimestre,string nombreItem, string comentario, string curso,int codigo){
    this ->trimestre=trimestre;
    this ->nombreItem=nombreItem;
    this ->comentario=comentario;
    this ->curso=curso;
    this ->codigo=codigo;
}
notas ::notas(string lineafile){
    vector <string> file ;
    stringstream ss(lineafile);
    string actual;
    while (getline(ss, actual, ','))
        file.push_back(actual);
    trimestre=stoi(file[0]);
    codigo=stoi(file[1]);
    curso=file[2];
    nombreItem=file[3];
    comentario=file[4];
}
notas::notas(string lineafile,int trimestre){
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
notas::~notas()
{
    //dtor
}
bool notas :: CantidadCaracteres(string comentario){
    unsigned int tam=comentario.length();
    if( tam>=10 && tam<=350)
        return true;
    else
      throw invalid_argument("Usted no cumple con la cantidad de caracteres que se necesita");
}


void notas ::imprimirnota(){
    if (CantidadCaracteres(comentario)== true){
        cout<<endl<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
        cout<<"Trimestre: "<<trimestre<<endl;
        cout<<"Competencia: "<<nombreItem<<endl;
        cout<<"Conclusion Descriptiva: "<<endl<<comentario<<endl;
    }
}
void notas::setNotas(){
    cout<<"Ingrese comentario: ";
    cin>>comentario;
}
string notas::getString(){
    return (to_string(trimestre)+","+to_string(codigo)+","+curso+","+comentario);}
