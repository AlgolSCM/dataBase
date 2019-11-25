#include "seccion.h"
#include "Alumno.h"
#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <fstream>


using namespace std;
seccion::seccion() : nombreSeccion("No tiene nombre"){
    Listado.push_back(Alumno("Camila","Luque"));
    Listado.push_back(Alumno("Sol","Velasquez"));
    Listado.push_back(Alumno("Maria","Cruz"));
}
seccion::~seccion(){
    //dtor
}
seccion::seccion(char nombreArchivo[],int cantidadAlumnos){
    ifstream archivo;
    string linea;
    archivo.open(nombreArchivo,ios::in);//Abre el archivo en modo lectura
    if(archivo.fail()){cout<<"Error al cargar la seccion";exit(1);}
    for (int i=cantidadAlumnos;i>0;i--){
        getline(archivo,linea);
        Listado.push_back(Alumno(linea));
        cantidadAlumnos++;
    }
    archivo.close();
    this->nombreSeccion=nombreArchivo;

}

void seccion::setNombreSeccion(string nombre){this->nombreSeccion=nombre;}

void seccion::imprimirBusqueda(string aBuscar){
    size_t foundFirst,foundLast;
    for (int i=0;i<Listado.size();i++){
        foundLast =Listado[i].getApellidos().find(aBuscar);
        foundFirst=Listado[i].getNombres().find(aBuscar);
        if (foundLast<1000||foundFirst<1000){
            cout<< Listado[i].getApellidosNombres();
            cout<<"de la seccion: "<<nombreSeccion<<endl;
        }
    }

}

void seccion::texto(string label,string texto[],int tam,bool prompt,bool numeracion){
    cout<<endl<<"->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->"<<endl;
    cout<<label<<": "<<endl;
    for (int i=0;i<tam;i++){
        if (numeracion) cout<<i+1<<". ";
        cout<<texto[i]<<endl;}
    if(prompt) cout<<"Ingrese su seleccion: ";
}

void seccion::menuSeleccion(bool inSeccion){//el bool para mostrar el menu de seccion
    string opcionSeleccion[]={"ALUMNOS","ASISTENCIAS","NOTAS","CURSOS","ANECDOTARIO","INVENTARIO","Salir"};
    string opcionCases[]={"ver/ordenar","anadir","modificar","eliminar","Salir"};
    while (inSeccion){
        cout<<endl<<"=^..^= =^..^= =^..^= =^..^= =^..^= =^..^= =^..^="<<endl;
        cout<<"Estas en la seccion: "<<nombreSeccion<<endl;
        char inCaseSelection;bool inSubcase=1;
        texto("Opciones de Seccion",opcionSeleccion,7);
        switch(cin.get()){
            case '1':
                while(inSubcase){
                    verListadoAlumnos();
                    texto("OPCIONES Listado de Alumnos",opcionCases,5);
                    cin>>inCaseSelection;
                    switch (inCaseSelection){
                        case '1':ordenarListadoAlumnos();break;
                        case '2':addAlumno();break;
                        case '3':seleccionAlumno();break;
                        case '4':deleteAlumno();break;
                        case '5':inSubcase=false;break;
                    }
                }
                break;
            case '2':
                texto("Asistencias",opcionCases,2);
                cin>>inCaseSelection;
                switch (inCaseSelection){
                    case '1':
                        cout<<"Visualizando Asistencias"<<endl;
                        for (int i=0;i<Listado.size();i++) Listado[i].verAsistencias(0);
                        break;
                    case '2':
                        cout<<"Llenado de Asistencias"<<endl;
                        for (int i=0;i<Listado.size();i++) Listado[i].addAsistencia();
                        break;
                }
                break;
            case '3'://Ask Sol
                texto("Notas",opcionCases,2);
                cin>>inCaseSelection;
                switch (inCaseSelection){
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
                cin>>inCaseSelection;
                switch(inCaseSelection){
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
                cin>>inCaseSelection;
                switch(inCaseSelection){
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
                cin>>inCaseSelection;
                switch(inCaseSelection){
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
            case '7':
                cout<<"Saliendo de Seccion ... "<<endl;
                inSeccion=false;
                break;
        }
    }
}

void seccion::verListadoAlumnos(){
    cout<<endl<<"=-=-=-=-=-=-=-LISTADO DE ALUMNOS-=-=-=-=-=-=-=-=-="<<endl;
    for(int i=0;i<Listado.size();i++)
        cout<<i+1<<". "<<Listado[i].getApellidosNombres()<<endl;
}
void seccion::ordenarListadoAlumnos(char n){
    if (n==' '){
        string opcionesOrdenar[]={"Apellidos A-Z","Apellidos Z-A"};
        texto("Opciones de Ordenamiento",opcionesOrdenar,2);
        cin>>n;
    }
    switch (n){
        case '1':cout<<"ordenar";break;
    }
}
void seccion::addAlumno(string nombre,string apellido){
    cout<<"Ingrese solo nombres: ";cin>>nombre;
    cout<<"Ingrese solo apellidos: ";cin>>apellido;
    Listado.push_back(Alumno(nombre,apellido));
}
void seccion::deleteAlumno(int n){
    verListadoAlumnos();
    cout<<"Ingrese el numero del alumno a eliminar: ";cin>>n;
    cout<<"Alumno Eliminado "<<Listado[n-1].getApellidosNombres()<<endl;
    Listado.erase(Listado.begin()+(n-1));
}
void seccion::seleccionAlumno(){
    verListadoAlumnos();
    cout<<"Ingrese el numero del alumno a seleccionar: ";
    int n;cin>>n;
    Listado[n-1].menuSeleccionAlumno();
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
