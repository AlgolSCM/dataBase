#include <iostream>
#include "fecha.h"
#include "Alumno.h"
#include "seccion.h"
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
void imprimirOrdenarListaOpciones(){
    cout<<"Ordenar lista?"<<endl;
    cout << "a. A-Z apellidos"<< endl;
    cout << "b. Z-A apellidos"<< endl;
    cout << "c. Menor a Mayor"<< endl;
}

void imprimirOpcionesPrincipal(){
    cout << "Elija una opcion"<< endl;
    cout << "1. Ver listado de alumnos"<< endl;
    cout << "2. Ver inventario"<< endl;
    cout << "3. Salir"<< endl;
}
void imprimirSeleccionAlumno(){
    cout << "Elija una opcion"<< endl;
    cout << "1. Ver notas"<< endl;
    cout << "2. Ver seccion"<< endl;
    cout << "3. Ver expediente medico"<< endl;
    cout << "4. Ver cursos"<< endl;
    cout << "5. Ver talleres"<< endl;
    cout << "6. Ver anecdotario"<< endl;
}
void seleccionAlumno(){
    imprimirSeleccionAlumno();
    char n;
    cin>> n;
    switch (n){//comentado porque las funciones no estan definidas y bota error
        /**
        case 1:
            VerNotas();
            break;
        case 2:
            VerSeccion();
            break;
        case 3:
            VerExpediente();
            break;
        case 4:
            VerCurso();
            break;
        case 5:
            VerTaller();
            break;
        case 6:
            VerAnecdotario();
            break;*/
        default:
            cout<<"seleccion Alumno"<<endl;
            break;
        }
}
void salir(){
cout<<"saliendo de la plataforma"<< endl;
}
void estadoMaterial(){
cout<<" estadoMaterial"<< endl;
}
void VerNotas(){
cout<<"VerNotas"<< endl;
}
void VerSeccion(){
cout<<"VerSeccion"<< endl;
}
void VerExpediente(){
cout<<"VerExpediente"<< endl;
}
void VerCurso(){
cout<<"VerCurso"<< endl;
}
void VerTaller(){
cout<<"VerTaller"<< endl;
}
void VerAnecdotario(){
cout<<"VerAnecdotario"<< endl;
}
void verInvent(){
cout<<"verInvent"<< endl;
}
void verListado(){
cout<<"verListado"<< endl;
}
void imprimirAlumnos(){
    cout << "Imprimir alumnos"<< endl;

}
void ordenarListaOpciones(char n){
    switch (n){
        case 'a':
            cout<<"ordenar A-Z";
            break;
        case 'b':
            cout<<"ordenar Z-A";
            break;
        case 'c':
            cout<<"ordenar menor a mayor";
            break;
    }
}




int main()
{
    seccion cabecitas;
    //cabecitas.menuSeleccion();
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
                //ordenarListaOpciones(n);
                //imprimirAlumnos();
                cabecitas.menuSeleccion();

                //cuando se visualize la lista de alumnos permitira ordenarlos y seleccionar algun alumno
                seleccionAlumno();//cuando el alumno ya esta seleccionado
                break;
            case 2:
                verInvent();
                estadoMaterial();
                break;
            default:
                salir();
                usuarioActivo=false;
                break;
        }
    }

    return 0;
}
