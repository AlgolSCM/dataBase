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
    cout << "Ingrese su nombre de usuario: " << endl;
    cin>>a;
    cout << "Ingrese su contrasena: " << endl;
    cin>>b;
    return (a==usuario&&b==contra);
}

void imprimirOpcionesPrincipal(){

    cout<<endl<<"=^..^= =^..^= =^..^= =^..^= =^..^= =^..^= =^..^="<<endl;
    cout << "               MENU        "<< endl;
    cout << "1. Ver listado de alumnos"<< endl;
    cout << "2. Ingresar a seccion"<< endl;
    cout << "3. Busqueda de alumno"<< endl;
    cout << "5. Ver inventario"<< endl;
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
int Alumno::countAlumno=0;
void iniciarInventario(vector <inventario> MAterial);

int main()
{
    //Alumno prueba("Raphaella,Alarcon Ortega,F,24,2,2014,Urbanizacion Chapi Chico E-16 -Miraflores,78913627,Cabecitas Constructivas,78913627,Catolica,27,0");
    vector <inventario> MAterial;
    //Iniciar inventario
    ifstream archivo;
    string linea;
    archivo.open(("archivos/Inventario/Inventario.csv"),ios::in);//Abre el archivo en modo lectura
    if(archivo.fail()){cout<<"Error al cargar la seccion";exit(1);}
    while(getline(archivo,linea)){
        MAterial.push_back(inventario(linea));
    }
    archivo.close();



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
            case 1:
                for (int i=0;i<4;i++){
                    clases[i].verListadoAlumnos();
                }
                break;
            case 2:{
                cout<<"   ELIJA LA SECCION "<<endl;
                for (int i=0;i<4;i++)
                    cout<<i<<". "<<clases[i].getNombre()<<endl;
                int aux;
                cin >>aux;
                if (!archivosYaIniciados[aux]){
                    clases[aux].iniciarArchivos();
                    archivosYaIniciados[aux]=1;
                }
                clases[aux].menuSeleccion();
                break;}
            case 3:{
                string buscar;
                cout<<"Ingrese su busqueda"<<endl;
                cin>>buscar;
                cout<<endl<<"->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->"<<endl;
                cout<<"Resultados de su busqueda: "<<endl;
                busquedaAlumno(buscar,clases);
                cout<<endl<<"->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->"<<endl;
            break;}
            case 4:
                salir();
                usuarioActivo=false;
                break;
            case 5:
                cout<<endl<<"->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->"<<endl;
                cout<<endl<<"       -=-=-=-=-=-=-=-INVENTARIO=-=-=-=-=-=-"<<endl;
                for (int i=0;i<MAterial.size();i++)
                    MAterial[i].imprimirInventario();
                cout<<endl<<"->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->"<<endl;
                break;
            default:
                cout<<"die"<<endl;
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
