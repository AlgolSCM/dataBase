#include "inventario.h"

inventario::inventario(){
    nombre=""; color=""; modelo="";
}

inventario::~inventario()
{
    //dtor
}

inventario::inventario(string lineafile){
    vector <string> fichero;
    stringstream ss(lineafile);
    string actual;
    while (getline(ss, actual, ','))
        fichero.push_back(actual);
    nombre=fichero[0];
    color=fichero[1];
    modelo=fichero[2];
}

inventario::inventario(string nombre,string color, string modelo){
this->nombre=nombre;
this->color=color;
this->modelo=modelo;
}

void inventario::invent(){
    cout<<"Ingrese el nombre del articulo daniado: "<<endl;
    cin>>nombre;
    cout<<"Ingrese el color del articulo daniado: "<<endl;
    cin>> color;
    cout<<"Ingrese el material del articulo daniado: "<<endl;
    cin>> modelo;
}


void inventario::imprimirInventario(){
    cout<<setw(14)<<nombre<<setw(14)<<color<<setw(14)<<modelo<<endl;

}

