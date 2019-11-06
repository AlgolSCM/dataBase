
#include "inventario.h"

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

void inventario:: mesas (int numeromesas, int buenestadome, int mesasmalestado){
     this->numeromesas=numeromesas;
     cout<< "Ingrese el numero de mesas en buen estado:"<<endl;
     cin>> buenestadome;
     cout<< "Ingrese el numero de mesas en mal estado: "<<endl;
     this->mesasmalestado=mesasmalestado;
     cin>> mesasmalestado;
        if ((buenestadome==numeromesas)&& (mesasmalestado==0)){
            cout<<"Gracias, el inventario de mesas fue completado con exito"<<endl;
        }
        if (mesasmalestado>0){
            cout<<"Ingrese el nombre del articulo dañado: "<<endl;
            string articulo;
            cin>> articulo;
            this->nombre=articulo;
            cout<<"Ingrese el color del articulo dañado: "<<endl;
            string articulocolor;
            cin>> articulocolor;
            this->color=articulocolor;
            cout<<"Ingrese el material del articulo dañado: "<<endl;
            string material;
            cin>> material;
            this->modelo=material;
        }
     
}

void inventario:: sillas (int numerosillas, int buenestadosi, int sillasmalestado){
     this->numerosillas=numerosillas;
     cout<< "Ingrese el numero de sillas en buen estado:"<<endl;
     cin>> buenestadosi;
     cout<< "Ingrese el numero de sillas en mal estado: "<<endl;
     this->sillasmalestado=sillasmalestado;
     cin>> sillasmalestado;
        if ((buenestadosi==numerosillas)&& (sillasmalestado==0)){
            cout<<"Gracias, el inventario de sillas fue completado con exito"<<endl;
        }
        if (sillasmalestado>0){
            cout<<"Ingrese el nombre del articulo dañado: "<<endl;
            string articulo;
            cin>> articulo;
            this->nombre=articulo;
            cout<<"Ingrese el color del articulo dañado: "<<endl;
            string articulocolor;
            cin>> articulocolor;
            this->color=articulocolor;
            cout<<"Ingrese el material del articulo dañado: "<<endl;
            string material;
            cin>> material;
            this->modelo=material;
        }
     
}

void inventario:: estantes (int numeroestantes, int buenestadoes, int estantesmalestado){
     this->numeroestantes=numeroestantes;
     cout<< "Ingrese el numero de estantes en buen estado:"<<endl;
     cin>> buenestadoes;
     cout<< "Ingrese el numero de estantes en mal estado: "<<endl;
     this->estantesmalestado=estantesmalestado;
     cin>> estantesmalestado;
        if ((buenestadoes==numeroestantes)&& (estantesmalestado==0)){
            cout<<"Gracias, el inventario de estantes fue completado con exito"<<endl;
        }
        if (estantesmalestado>0){
            cout<<"Ingrese el nombre del articulo dañado: "<<endl;
            string articulo;
            cin>> articulo;
            this->nombre=articulo;
            cout<<"Ingrese el color del articulo dañado: "<<endl;
            string articulocolor;
            cin>> articulocolor;
            this->color=articulocolor;
            cout<<"Ingrese el material del articulo dañado: "<<endl;
            string material;
            cin>> material;
            this->modelo=material;
        }
     
}

