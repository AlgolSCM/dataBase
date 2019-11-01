#include "seccion.h"
#include "Alumno.h"
#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>

using namespace std;
seccion::seccion() : nombreSeccion("No tiene nombre"){
    Listado.push_back(Alumno("Camila","Luque"));
    Listado.push_back(Alumno("Sol","Velasquez"));
    Listado.push_back(Alumno("Maria","Cruz"));
}
seccion::~seccion(){
    //dtor
}

void seccion::setNombreSeccion(string nombre){this->nombreSeccion=nombre;}

void seccion::texto(string label,string texto[],int tam,bool prompt,bool numeracion){
    cout<<label<<": "<<endl;
    for (int i=0;i<tam;i++){
        if (numeracion) cout<<i+1<<". ";
        cout<<texto[i]<<endl;}
    if(prompt) cout<<"Ingrese su seleccion: "<<endl;
}

void seccion::menuSeleccion(bool inSeccion){//el bool para mostrar el menu de seccion
    string opcionSeleccion[]={"ALUMNOS","ASISTENCIAS","NOTAS","CURSOS","ANECDOTARIO","INVENTARIO","Salir"};
    string opcionCases[]={"ver","anadir","modificar","eliminar"};
    cout<<"Estas en la seccion: "<<nombreSeccion<<endl;
    while (inSeccion){
        texto("Opciones de Seccion",opcionSeleccion,7);
        switch(cin.get()){
            case '1':
                texto("Alumnos",opcionCases,4);
                switch (cin.get()){
                    case '1':verListadoAlumnos();break;
                    case '2':addAlumno();break;
                    case '3':deleteAlumno();break;//seleccion alumnos
                    case '4':deleteAlumno();break;
                    }
                break;
            case '2':
                texto("Asistencias",opcionCases,2);
                switch (cin.get()){
                    case '1':
                        cout<<"Visualizando Asistencias"<<endl;
                        //for (int i=0;i<sizeof(Listado);i++)
                        //Listado[i].coutAsistencia;
                        break;
                    case '2':
                        cout<<"Llenado de Asistencias"<<endl;
                        //for (int i=0;i<sizeof(Listado);i++)
                        //Listado[i].llenarAsistencia;
                        break;
                }
                break;
            case '3':
                texto("Notas",opcionCases,2);
                switch (cin.get()){
                    case '1':
                        cout<<"Visualizando Notas"<<endl;
                        //verNotas();
                        //for (int i=0;i<sizeof(Listado);i++)
                        //Listado[i].getNotas;
                        break;
                    case '2':
                        cout<<"Llenado de Notas"<<endl;
                        //addNotas();
                        //for (int i=0;i<sizeof(Listado);i++)
                        //Listado[i].llenarNotas;
                        break;
                }
                break;
            case '4':
                texto("Cursos",opcionCases,3);
                switch(cin.get()){
                    case '1':
                        cout<<"Visualizando Cursos";
                        break;
                    case '2':
                        cout<<"Anadir Curso";
                        break;
                    case '3':
                        cout<<"Modificar Cursos";
                        break;
                }
                break;
            case '5'://anecdotario
                switch(cin.get()){
                    case '1':
                        cout<<"1";
                        break;
                    case '2':
                        cout<<"2";
                        break;
                    case '3':
                        cout<<"3";
                        break;
                }
                break;
            case '6'://anecdotario
                switch(cin.get()){
                    case '1':
                        cout<<"1";
                        break;
                    case '2':
                        cout<<"2";
                        break;
                    case '3':
                        cout<<"3";
                        break;
                }
                break;
            default:
                cout<<"Saliendo de Seccion ... "<<endl;
                inSeccion=false;
                break;
        }
    }
}

void seccion::verListadoAlumnos(){
    cout<<"Visualizando listado"<<endl;
    for(int i=0;i<Listado.size();i++)
        cout<<i+1<<". "<<Listado[i].getApellidos()<<", "<<Listado[i].getNombres()<<endl;
}
void seccion::addAlumno(string nombre,string apellido){
    cout<<"Ingrese solo nombres: ";cin>>nombre;
    cout<<"Ingrese solo apellidos: ";cin>>apellido;
    Listado.push_back(Alumno(nombre,apellido));
}
void seccion::deleteAlumno(int n){
    verListadoAlumnos();
    cout<<"Ingrese el numero del alumno a eliminar"<<endl;
    //Listado.erase(vec.begin()+(cin.get()-1));
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
