#include <iostream>
#include "fecha.h"
#include "Alumno.h"
#include "seccion.h"
#include "inventario.h"
#include <string>
#include <vector>
#include <conio.h>
using namespace std;

bool acceder(string a="",string b=""){
    string usuario="GMariotti",contra="gaspare";
    cout << "Ingrese su nombre de usuario: " << endl;
    cin>>a;
    cout << "Ingrese su contrasena: " << endl;
    cin>>b;
    return (a==usuario&&b==contra);
}

void imprimirOpcionesPrincipal(){
    cout << "Elija una opcion"<< endl;
    cout << "1. Ver listado de alumnos"<< endl;
    cout << "2. Ver inventario"<< endl;
    cout << "3. Salir"<< endl;
}

void salir(){
cout<<"saliendo de la plataforma"<< endl;
}

void estadoMaterial(){
cout<<" estadoMaterial"<< endl;
}

void verInvent();
inventario general;
seccion cabecitas;

int main()
{
    //cabecitas.menuSeleccion();
    bool usuarioActivo=false;
    if (!usuarioActivo&&acceder()){
        cout << "Bienvenido a la Plataforma virtual del Jardin Gaspare Mariotti" << endl;
        usuarioActivo=true;
    }
    int n;
    while (usuarioActivo){
        imprimirOpcionesPrincipal();//Imprime las opciones del sistema: ver listado de alumnos, ver inventario y salir
        cin>>n;
        switch (n){
            case 1:

                cabecitas.menuSeleccion();
                break;
            case 2:
                verInvent();
                estadoMaterial();
                break;
            case 3:
                salir();
                usuarioActivo=false;
                break;
        }
    }

    return 0;
}
void verInvent(){
    general.mesas(0,0,0);
    general.sillas(0,0,0);
    general.estantes(0,0,0);
}
