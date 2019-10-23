#include "seccion.h"
#include "Alumno.h"
#include <iostream>
#include <string>

using namespace std;
seccion::seccion()
{
    //ctor
}

seccion::~seccion()
{
    //dtor
}

int seccion::ingreseSeleccion(){
    int n;
    cout<<"Ingrese su seleccion: ";
    cin>>n;
    cout<<endl;
    return n;
}
void imprimirOpcionesSeleccion(bool ver,bool anadir,bool eliminar,bool modificar){
    string opcion[]=
    {"ver",
    "anadir",
    "eliminar",
    "modificar",
   };
}

void seccion::menuSeleccion(){
    string opcion[]=
    {"ALUMNO (Seleccionar, anadir, eliminar)",
    "ASISTENCIAS (Ver y anadir)",
    "NOTAS",//Sol
    "CURSOS",//Sol
    "ANECDOTARIO",//Camila
    "INVENTARIO"//Camila
    };
    for (int i=0;i<6;i++)
        cout<<i+1<<". "<<opcion[i]<<endl;
    switch(ingreseSeleccion()){
        case 1:
            //Alumno::menuSeleccion();
            break;
        default:
            cout<<"Comida"<<endl;
            break;
    }
}
