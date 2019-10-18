#include <iostream>
#include "fecha.h"
#include "Alumno.h"
#include <string>

using namespace std;

bool acceder(string a="",string b=""){
    string usuario="GMariotti",contra="cuarteto";
    cout << "Ingrese su nombre de usuario: " << endl;
    cin>>a;
    cout << "Ingrese su contrasena: " << endl;
    cin>>b;
    return (a==usuario&&b==contra);
}
void imprimirOpciones(){
    cout << "1. Ver listado de alumnos";


}

void verListado();
void verNotas();
void seleccionAlumno();
void salir();
void estadoMaterial();

int main()
{
    bool usuarioActivo=false;
    if (acceder()){
        cout << "Bienvenido a la Plataforma virtual del Jardin Gaspare Mariotti" << endl;
        usuarioActivo=true;
    }
    /**while (usuarioActivo){
        switch (getline){
            case '1':
                verListado();
                seleccionAlumno();
                break;
            case '2':
                verNotas();
                break;
            case '3':
                estadoMaterial();
                break;
            case default:
                salir();
        }
    }
    */


    return 0;
}
