
#include "inventario.h"

inventario::inventario()
{
    //ctor
}

inventario::inventario(){
    numeromesas=0; numerosillas=0; numeroestantes=0;
    mesasbuenestado=0;sillasbuenestado=0;estantesbuenestado=0;
    mesasmalestado=0;sillasmalestado=0;estantesmalestado=0;
    nombre=""; color=""; modelo="";
}

inventario::~inventario()
{
    //dtor
}

void inventario:: mesas (int numesas, int buenestadosi, int malestadosi){
     this->numeromesas=numesas;
     cout<< "Ingrese el numero de sillas en buen estado:"<<endl;
     cin>> buenestadosi;
     cout<< "Ingrese el numero de sillas en mal estado: "<<endl;
     cin>> malestadosi;
     while (buenestadosi+malestadosi==numesas){
        if ((buenestadosi==numesas)&& (malestadosi==0)){
            cout<<"Gracias, el inventario de sillas fue completado con exito"<<endl;
        }
        if (malestadosi>0){
            this->mesasmalestado=malestadosi;
            cout<<"Ingrese el nombre del articulo dañado: "<<endl;
            cin>> string articulo;
            this->nombre=articulo;
            cout<<"Ingrese el color del articulo dañado: "<<endl;
            cin>> string articulocolor;
            this->color=articulocolor;
            cout<<"Ingrese el material del articulo dañado: "<<endl;
            cin>>string material;
            this->modelo=material;
        }
     }
}
