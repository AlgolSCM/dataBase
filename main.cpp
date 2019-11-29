#include <iostream>
#include "fecha.h"
#include "Alumno.h"
#include "seccion.h"
#include "inventario.h"
#include "Asistencia.h"
#include <string>
#include <vector>
#include <conio.h>
#include <stdio.h>
#include <fstream>

using namespace std;

void modificarValores(string archivoOrigen,string lineaAnterior,string lineaNueva);

bool acceder(string a="",string b=""){
    string usuario="GMariotti",contra="gaspare";
    cout << "Ingrese su nombre de usuario: " << endl;cin>>a;
    cout << "Ingrese su contrasena: " << endl;cin>>b;
    return (a==usuario&&b==contra);
}

void imprimirOpcionesPrincipal(){
    cout<<endl<<"=^..^= =^..^= =^..^= =^..^= =^..^= =^..^= =^..^="<<endl;
    cout << "               MENU        "<< endl;
    cout << "1. Ver listado de alumnos"<< endl;
    cout << "2. Ingresar a seccion"<< endl;
    cout << "3. Busqueda de alumno"<< endl;
    cout << "4. Ver inventario"<< endl;
    cout << "5. Salir"<< endl;
}

void salir(){

cout<<"saliendo de la plataforma"<< endl;
}

void estadoMaterial(){
cout<<" estadoMaterial"<< endl;
}

inventario general;


void busquedaAlumno(string aBuscar,seccion salon[]);
int Alumno::countAlumno=0;
void iniciarInventario(vector <inventario> MAterial);

int main()
{





    seccion clases[]={seccion("5 anios"),seccion("4 anios"),seccion("3 anios"),seccion("2 anios")};

    bool usuarioActivo=true;

    if (!usuarioActivo&&acceder()){
        cout << "Bienvenido a la Plataforma virtual del Jardin Gaspare Mariotti" << endl;
        usuarioActivo=true;
    }
    int n;
    bool archivosYaIniciados[]={0,0,0,0};
    while (usuarioActivo){
        imprimirOpcionesPrincipal();//Imprime las opciones del sistema: ver listado de alumnos, ver inventario y salir
        cin>>n;
        switch (n){
            case 1:{//Ver listado
                seccion clases[]={seccion("5 anios"),seccion("4 anios"),seccion("3 anios"),seccion("2 anios")};
                for (int i=0;i<4;i++) clases[i].verListadoAlumnos();
                break;}
            case 2:{//Ingresar a seccion
                cout<<"   ELIJA LA SECCION "<<endl;
                string secciones[]={"5 anios","4 anios","3 anios","2 anios"};
                for (int i=0;i<4;i++) cout<<i+1<<". "<<secciones[i]<<endl;
                int aux; cin >>aux;
                if (aux>4||aux<1) continue;
                seccion seleccionSeccion(secciones[aux-1]);
                seleccionSeccion.iniciarArchivos();
                seleccionSeccion.menuSeleccion();
                break;}
            case 3:{
                seccion clases[]={seccion("5 anios"),seccion("4 anios"),seccion("3 anios"),seccion("2 anios")};
                string buscar;
                cout<<"Ingrese su busqueda"<<endl;
                cin>>buscar;
                cout<<endl<<"->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->"<<endl;
                cout<<"Resultados de su busqueda: "<<endl;
                busquedaAlumno(buscar,clases);
                cout<<endl<<"->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->"<<endl;
                break;}
            case 4:{
                vector <inventario> MAterial;
                ifstream archivo;
                string linea;
                archivo.open(("archivos/Inventario/Inventario.csv"),ios::in);//Abre el archivo en modo lectura
                if(archivo.fail()){cout<<"Error al cargar la seccion";exit(1);}
                while(getline(archivo,linea)) MAterial.push_back(inventario(linea));
                archivo.close();
                cout<<endl<<"->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->"<<endl;
                cout<<endl<<"       -=-=-=-=-=-=-=-INVENTARIO=-=-=-=-=-=-"<<endl;
                for (int i=0;i<MAterial.size();i++)
                    MAterial[i].imprimirInventario();
                cout<<endl<<"->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->"<<endl;
                break;}
            case 5:
                salir();
                usuarioActivo=false;
                break;

            default:
                cout<<"die"<<endl;
        }
    }

    return 0;
}

void busquedaAlumno(string aBuscar,seccion salon[]){
    for (int i=0;i<4;i++) salon[i].imprimirBusqueda(aBuscar);
}
void iniciarInventario(vector <inventario> MAterial){
    ifstream archivo;
    string linea;
    archivo.open(("archivos/Inventario/Inventario.csv"),ios::in);//Abre el archivo en modo lectura
    if(archivo.fail()){cout<<"Error al cargar la seccion";exit(1);}
    while(getline(archivo,linea)){
        MAterial.push_back(inventario(linea));
    }
    archivo.close();
}
