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
    aula= "";
}
anecdotario::~anecdotario()
{
    //dtor
}
anecdotario::anecdotario(int implicados,string titulo, string descripcion, string aula, fecha dia){
    this->implicados=implicados;
    this->titulo=titulo;
    this->descripcion=descripcion;
    this->aula=aula;
    this->dia=dia;

    cout<<"Fecha:(ingrese dia, mes y anio) ";int c,d,e;cin>>c;cin>>d;cin>>e;
    dia.setDiaMesAnio(c,d,e);
}
anecdotario::anecdotario(string lineafile){
vector <string> fichero;
    stringstream ss(lineafile);
    string actual;
    while (getline(ss, actual, ','))
        fichero.push_back(actual);
    titulo=fichero[0];
    implicados=stoi(fichero[1]);
    descripcion=fichero[2];
    aula=fichero[3];
    dia=fecha(stoi(fichero[4]),stoi(fichero[5]),stoi(fichero[6]));
}
void anecdotario::anecdota(){
    cout<<"Ingrese el titulo del suceso: "<<endl;
    cin>>titulo;
    cout<<"Ingrese el numero de implicados: "<<endl;
    cin>> implicados;
    cout<<"Ingrese la descripcion del suceso, incluyendo el nombre de los implicados: "<<endl;
    cin>> descripcion;
    cout<<"Ingrese el aula en que sucedio: "<<endl;
    cin>> aula;
    cout<<"Fecha:(ingrese dia, mes y año) del suceso: ";int c,d,e;cin>>c;cin>>d;cin>>e;
    dia.setDiaMesAnio(c,d,e);
}

string anecdotario::askModificarAnecdotario(){
    int dias, mes, anio;
    cout<<"Fecha :";
    cout<<"DIA: ";cin>>dias;
    cout<<"MES: ";cin>>mes;
    cout<<"ANIO: ";cin>>anio;
    dia=fecha(dias,mes,anio);
    cout<<"Titulo: ";getline(cin,titulo);
    cout<<"Numero de implicados: ";cin>>implicados;
    cout<<"Descripcion del suceso: ";getline(cin,descripcion);
    cout<<"Aula del suceso: ";getline(cin,aula);
    string anecmodificar=to_string(dias)+","+to_string(mes)+","+to_string(anio)+","+titulo+",";
    anecmodificar=anecmodificar+to_string(implicados)+","+descripcion+",";
    anecmodificar=anecmodificar+aula;
    return anecmodificar;
}

void anecdotario::imprimirAnecdotario(){
    cout<<setw(14)<<implicados<<setw(14)<<titulo<<setw(14)<<descripcion<<setw(14)<<aula<<setw(14);
    dia.coutDMA(1);
}
