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
    cout << "1. Ver listado de alumnos";
    cout << "2. Ver inventario";
    cout << "3. Salir";
}

void verListado();
void seleccionAlumno(){
    cout << "1. Ver notas";
    cout << "2. Ver seccion";
    cout << "3. Ver expediente medico";
    cout << "4. Ver cursos";
    cout << "5. Ver talleres";
    cout << "6. Ver anecdotario";
}
void salir();
void estadoMaterial();
void VerNotas();
void VerSeccion();
void VerExpediente();
void VerCurso();
void VerTaller();
void VerAnecdotario();

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
                seleccionAlumno(){
                    case '1':
                        VerNotas();
                    case '2':
                        VerSeccion();
                    case '3':
                        VerExpediente();
                    case '4':
                        VerCurso();
                    case '5':
                        VerTaller();
                    case '6':
                        VerAnecdotario();
                }
                break;
            case '2':
                verInventario();
                estadoMaterial();
                break;
            case default:
                salir();
        }
    }

*/
    return 0;
}
