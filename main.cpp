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

void busquedaAlumno(string aBuscar,seccion salon[]);
void iniciarSecciones(){

}
int Alumno::countAlumno=0;

int main()
{
    seccion clases[]={seccion("archivos/alumnos/Alumnos3.csv",6),seccion("archivos/alumnos/Alumnos4.csv",16),
                            seccion("archivos/alumnos/Alumnos5.csv",12),seccion("archivos/alumnos/Alumnos2.csv",6)};
    clases[0].setNombreSeccion("3anios");
    clases[1].setNombreSeccion("4anios");
    clases[2].setNombreSeccion("5anios");
    clases[3].setNombreSeccion("2anios");


    //cabecitas.menuSeleccion();

    busquedaAlumno("Thi",clases);

    bool usuarioActivo=true;
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

                clases[0].menuSeleccion();
                break;
            case 2:
                verInvent();
                estadoMaterial();
                break;
            case 3:
                salir();
                //usuarioActivo=false;
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
void busquedaAlumno(string aBuscar,seccion salon[]){
    for (int i=0;i<4;i++)
        salon[i].imprimirBusqueda(aBuscar);
}
