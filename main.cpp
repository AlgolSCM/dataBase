#include <iostream>
#include "fecha.h"
#include "Alumno.h"
#include <string>

using namespace std;

bool acceder(string a="",string b=""){
    string usuario="GMariotti",contra="gaspare";
    cout << "Ingrese su nombre de usuario: " << endl;
    cin>>a;
    cout << "Ingrese su contrasena: " << endl;
    cin>>b;
    return (a==usuario&&b==contra);
}
void imprimirOpciones(){
    cout << "Elija una opcion"<< endl;
    cout << "1. Ver listado de alumnos"<< endl;
    cout << "2. Ver inventario"<< endl;
    cout << "3. Salir"<< endl;
}

void seleccionAlumno(){
    cout << "Elija una opcion"<< endl;
    cout << "1. Ver notas"<< endl;
    cout << "2. Ver seccion"<< endl;
    cout << "3. Ver expediente medico"<< endl;
    cout << "4. Ver cursos"<< endl;
    cout << "5. Ver talleres"<< endl;
    cout << "6. Ver anecdotario"<< endl;
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

int main()
{
    bool usuarioActivo=false;
    if (acceder()){
        cout << "Bienvenido a la Plataforma virtual del Jardin Gaspare Mariotti" << endl;
        usuarioActivo=true;
    }
    int n;
    while (usuarioActivo){
        imprimirOpciones();//Imprime las opciones del sistema: ver listado de alumnos, ver inventario y salir
        cin>>n;
        switch (n){
            case 1:
                seleccionAlumno();
                cin>> n;
                switch (n){
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
                        break;
                }
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
