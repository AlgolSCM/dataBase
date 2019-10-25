#include "seccion.h"
#include "Alumno.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;
seccion::seccion(){
    //ctor
}
seccion::~seccion(){
    //dtor
}

int seccion::ingreseSeleccion(){
    int n;
    cout<<"Ingrese su seleccion: ";
    cin>>n;
    cout<<endl;
    return n;
}
void seccion::imprimirOpcionesSeleccion(bool ver,bool anadir,bool eliminar,bool modificar){
    string opcion[]={"ver","anadir","eliminar","modificar"};
    if (ver) cout<<"1. "<<opcion[0]<<endl;
    if (anadir) cout<<"2. "<<opcion[1]<<endl;
    if (eliminar) cout<<"3. "<<opcion[2]<<endl;
    if (modificar) cout<<"4. "<<opcion[3]<<endl;
}
void seccion::menuSeleccion(bool inSeccion){//el bool para mostrar el menu de seccion
    string opcion[]={"ALUMNO (Visualizar, Seleccionar, anadir, eliminar)",//funciones propias de alumno
        "ASISTENCIAS (Ver y anadir)",//funciones propias de seccion
        "NOTAS",//Sol
        "CURSOS",//Sol
        "ANECDOTARIO",//Camila
        "INVENTARIO",//Camila
        "Salir"};
    while (inSeccion){
        for (int i=0;i<6;i++)
            cout<<i+1<<". "<<opcion[i]<<endl;
        switch(ingreseSeleccion()){
            int actualSeleccion;
            case 1://Alumno
                menuAlumnos();
                break;
            case 2://Asistencias
                imprimirOpcionesSeleccion(1,1,0);
                actualSeleccion=ingreseSeleccion();
                if (actualSeleccion==1){//Visualizar asistencia
                    cout<<"Visualizando Asistencias"<<endl;
                    //for (int i=0;i<sizeof(Listado);i++)
                    //    Listado[i].coutAsistencia;
                }
                else if (actualSeleccion==2){//Llenado de Asistencias
                    cout<<"Llenado de Asistencias"<<endl;
                    //for (int i=0;i<sizeof(Listado);i++)
                    //    Listado[i].llenarAsistencia;
                }
                break;
            case 3://Ver notas y anadir
                imprimirOpcionesSeleccion(1,0,1);
                actualSeleccion=ingreseSeleccion();
                if (actualSeleccion==1){
                    cout<<"Visualizando Notas"<<endl;
                    //verNotas();
                    //for (int i=0;i<sizeof(Listado);i++)
                    //    Listado[i].getNotas;
                }
                else if (actualSeleccion==3){
                    cout<<"Llenado de Notas"<<endl;
                    //addNotas();
                    //for (int i=0;i<sizeof(Listado);i++)
                    //    Listado[i].llenarNotas;
                }
                break;
            case 4://cursos
                imprimirOpcionesSeleccion(1,0,0,1);
                actualSeleccion=ingreseSeleccion();
                if (actualSeleccion==1){
                    cout<<"Visualizando Cursos"<<endl;
                    //verCursosTalleres();
                }
                else if (actualSeleccion==4){
                    cout<<"Modificar cursos"<<endl;
                    //asignarCursosTalleres();
                }
                break;
            case 5://anecdotario
                break;
            case 6://anecdotario
                break;
            default:
                cout<<"Saliendo de Seccion ... "<<endl;
                inSeccion=false;
                break;
        }
    }
}

void seccion::menuAlumnos(bool in){
    while (in){
        imprimirOpcionesSeleccion(1,1,1,1);
        switch (ingreseSeleccion()){//ver,anadir,eliminar,modificar
            case 1:
                verListadoAlumnos();
                break;
            case 2:
                addAlumno();
                break;
            case 3:
                deleteAlumno();
                break;
            case 4:
                verListadoAlumnos();
                int index=ingreseSeleccion()-1;
                //Listado[index].menuSeleccionAlumno;
                break;
        }
    }
}
void seccion::verListadoAlumnos(){
    cout<<"Visualizando listado"<<endl;
    int j=0;
    for(int i=0;i<Listado.size();i++)
        cout<<i+1<<". "<<Listado[i].getApellidos()<<", "<<Listado[i].getNombres()<<endl;
}
void seccion::addAlumno(string nombre,string apellido){
    cout<<"Ingrese solo nombres: ";
    cin>>nombre;
    cout<<"Ingrese solo apellidos: ";
    cin>>apellido;
    Listado.push_back(Alumno(nombre,apellido));
}
void seccion::deleteAlumno(int n){
    verListadoAlumnos();
    cout<<"Ingrese el numero del alumno a eliminar"<<endl;
    //Listado.erase(vec.begin()+(ingreseSeleccion()-1));
}

void seccion::verAsistencias(){}
void seccion::tomarAsistencias(){}

void seccion::verNotas(){}
void seccion::addNotas(){}

void seccion::verCursosTalleres(){
    cout<<"Cursos Asignados"<<endl;
    //for (int i=0;i<cursosTalleres.size();i++)
        //cout << cursosTalleres[i].getNombreCurso()<<endl;
}
void seccion::asignarCursosTalleres(){}

void seccion::verAnecdotario(){}
void seccion::addAnecdotario(){}

void seccion::verInventario(){}
void seccion::addInventario(){}
void seccion::modificarEstadoInventario(int n){//posicion n del vector inventario
}
void seccion::deleteInventario(){}
