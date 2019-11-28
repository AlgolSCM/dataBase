#include <iostream>
#include "fecha.h"
#include "Alumno.h"
#include "seccion.h"
#include "inventario.h"
#include "Asistencia.h"
#include <string>
#include <vector>
#include <conio.h>


using namespace std;

void modificarValores(string archivoOrigen,string lineaAnterior,string lineaNueva);

bool acceder(string a="",string b=""){
    string usuario="GMariotti",contra="gaspare";
    cout << "Ingrese su nombre de usuario: " << endl;
    cin>>a;
    cout << "Ingrese su contrasena: " << endl;
    cin>>b;
    return (a==usuario&&b==contra);
}

void imprimirOpcionesPrincipal(){
    /**cout << "Elija una opcion"<< endl;
    cout << "1. Ver listado de alumnos"<< endl;
    cout << "2. Ver inventario"<< endl;
    cout << "3. Ver anecdotario"<< endl;
    cout << "4. Ver asistencias"<< endl;
    cout << "5. Ver notas"<< endl;
    cout << "6. Salir"<< endl;*/
    cout << "Elija una opcion"<< endl;
    cout << "1. Ver listado de alumnos"<< endl;
    cout << "2. Ingresar a seccion"<< endl;
    cout << "3. Busqueda de alumno"<< endl;
    //cout << "4. Ver asistencias"<< endl;
    //cout << "5. Ver notas"<< endl;
    cout << "4. Salir"<< endl;
}

void salir(){
cout<<"saliendo de la plataforma"<< endl;
}

void estadoMaterial(){
cout<<" estadoMaterial"<< endl;
}

inventario general;


void busquedaAlumno(string aBuscar,seccion salon[]);
void iniciarSecciones(){

}
int Alumno::countAlumno=0;
int main()
{

    vector <inventario> MAterial;
    seccion clases[]={seccion("5 anios"),seccion("4 anios"),seccion("3 anios"),seccion("2 anios")};
    for (int i=0;i<4;i++)
        clases[i].iniciarArchivos();
    bool usuarioActivo=true;

    busquedaAlumno("Jhoset",clases);

    if (!usuarioActivo&&acceder()){
        cout << "Bienvenido a la Plataforma virtual del Jardin Gaspare Mariotti" << endl;
        usuarioActivo=true;
    }
    int n;
    while (usuarioActivo){
        imprimirOpcionesPrincipal();//Imprime las opciones del sistema: ver listado de alumnos, ver inventario y salir
        cin>>n;
        /**switch (n){
            case 1:
                for (int i=0;i<4;i++){
                    clases[i].verListadoAlumnos();
                }
                break;
            case 2:
                estadoMaterial();
                break;
            case 3:
                salir();
                usuarioActivo=false;
                break;
        }*/
        switch (n){
            case 1:
                for (int i=0;i<4;i++){
                    clases[i].verListadoAlumnos();
                }
                break;
            case 2:{
                cout<<"ELIJA LA SECCION "<<endl;
                for (int i=0;i<4;i++)
                    cout<<i<<". "<<clases[i].getNombre()<<endl;
                int aux;
                cin >>aux;
                clases[aux].menuSeleccion();
                break;}
            case 3:{
                string buscar;
                cin>>buscar;
                busquedaAlumno(buscar,clases);
            break;}
            case 4:
                salir();
                usuarioActivo=false;
                break;
        }
    }

    return 0;
}
/**

*/

void busquedaAlumno(string aBuscar,seccion salon[]){
    for (int i=0;i<4;i++)
        salon[i].imprimirBusqueda(aBuscar);
}

