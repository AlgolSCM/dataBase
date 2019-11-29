#include "seccion.h"
#include "Alumno.h"
#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <fstream>


using namespace std;
seccion::seccion() : nombreSeccion("No tiene nombre"){

}
seccion::~seccion(){
    //dtor
}
seccion::seccion(string nombreSeccion){
    ifstream archivo;
    string linea;
    this->nombreArchivo="archivos/alumnos/"+nombreSeccion+".csv";
    archivo.open(nombreArchivo,ios::in);//Abre el archivo en modo lectura
    if(archivo.fail()){cout<<"Error al cargar la seccion";exit(1);}
    while(getline(archivo,linea))
        Listado.push_back(Alumno(linea,nombreSeccion));
    archivo.close();
    this->nombreSeccion=nombreSeccion;
    //cout<<"Seccion Iniciada"<<endl;
}

void seccion::iniciarArchivos(){
    iniciarExpediente();
    iniciarAsistencia();
    //iniciarAnecdotario();
    iniciarPadres();
}

void seccion::setNombreSeccion(string nombre){this->nombreSeccion=nombre;}

void seccion::imprimirBusqueda(string aBuscar){
    size_t foundLast;
    for (int i=0;i<Listado.size();i++){
        foundLast =Listado[i].getApellidosNombres().find(aBuscar);
        if (foundLast<1000){
            cout<< Listado[i].getApellidosNombres();
            cout<<" de la seccion: "<<nombreSeccion<<endl;
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
    //string opcionSeleccion[]={"ALUMNOS","ASISTENCIAS","NOTAS","CURSOS","ANECDOTARIO","INVENTARIO","Salir"};
    string opcionSeleccion[]={"ALUMNOS","ASISTENCIAS","ANECDOTARIO","PADRES","Salir"};
    string opcionCases[]={"Seleccionar Alumno (visualizar datos)","Ordenar","Anadir","modificar","eliminar","Salir"};
    while (inSeccion){
        cout<<endl<<"=^..^= =^..^= =^..^= =^..^= =^..^= =^..^= =^..^="<<endl;
        cout<<"Estas en la seccion: "<<nombreSeccion<<endl;
        char inCaseSelection;bool inSubcase=1;
        texto("Opciones de Seccion",opcionSeleccion,5);
        switch(cin.get()){
            case '1':
                while(inSubcase){
                    verListadoAlumnos();
                    texto("OPCIONES Listado de Alumnos",opcionCases,6);
                    cin>>inCaseSelection;
                    switch (inCaseSelection){
                        case '1':{int n;cout<<"Ingrese alumno";cin>>n;Listado[n-1].elegirVisualizarDatos();break;}
                        case '2':ordenarListado(Listado);break;
                        case '3':addAlumno();break;
                        case '4':{int n;
                            cout<<"Ingrese seleccion: ";
                            cin>>n;
                            modificarAlumno(n-1);
                            break;}
                        case '5':deleteAlumno();break;
                        case '6':inSubcase=false;break;
                    }
                }
                break;

            case '2':
                while(inSubcase){
                    cout<<"OPCIONES Asistencia de la Seccion"<<endl;
                    cout<<"1.- Ver Asistencia"<<endl;
                    cout<<"2.- Agregar Asistencia"<<endl;
                    cin>>inCaseSelection;
                    switch (inCaseSelection){
                        case '1':{verAsistencias();break;}
                        case '2':{addAsistencias();break;}
                        case '6':inSubcase=false;break;
                    }
                }
                break;

            case '3':
                while(inSubcase){
                    cout<<"OPCIONES Anecdotario de la Seccion"<<endl;
                    cout<<"1.- Ver Anecdotrio"<<endl;
                    cout<<"2.- Agregar Anecdotario"<<endl;
                    cin>>inCaseSelection;
                    switch (inCaseSelection){
                        case '1':{
                            addAnecdotario();
                            break;
                        }
                        case '2':{
                            for (int i=0;i<sucesos.size();i++)
                            sucesos[i].imprimirAnecdotario();
                            cout<<"¿que sucede? No lo se :("<<endl;
                            break;
                        }
                        case '6':{
                            inSubcase=false;
                            break;
                        }
                    }
                }
                break;
            case '4':
                while(inSubcase){
                    cout<<"OPCIONES Padres de la Seccion"<<endl;
                    cout<<"1.- Visualizar datos de padre"<<endl;
                    cout<<"2.- Ordenar Listado"<<endl;
                    cin>>inCaseSelection;
                    for (int i=0;i<ppff.size();i++)
                        cout<<i+1<<ppff[i].getApellidos()<<endl;
                    switch (inCaseSelection){
                        int n;cin>>n;
                        case '1':{

                            break;}
                        case '2':{
                            ordenarListado(ppff);
                            break;}
                    }

                }
                break;
            case '5':{
                cout<<"Saliendo de Seccion ... "<<endl;
                inSeccion=false;
                break;
            }
        }
    }
}

void seccion::verListadoAlumnos(){
    cout<<endl<<"->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->"<<endl;
    cout<<endl<<"       ALUMNOS DE LA SECCION "<<nombreSeccion<<": "<<endl;
    for(int i=0;i<Listado.size();i++)
        cout<<"     "<<i+1<<". "<<Listado[i].getApellidosNombres()<<endl;

}

template <class T>
void seccion::ordenarListado(vector <T> Listado){
    for (int h=Listado.size();h>0;h--){
        for (int i=0;i<h-1;i++){
             int actual=static_cast<int> (Listado[i].getApellidos()[0]);
             int siguiente=static_cast<int> (Listado[i+1].getApellidos()[0]);
             if (actual>siguiente){//encuentra el mayor y lo manda al final
                swap(Listado[i],Listado[i+1]);
             }
             if (actual==siguiente){//Si tienen la misma letra
                 int k=0; bool menor=1;
                 while (k<Listado[i].getApellidos().size()&&k <Listado[i+1].getApellidos().size()){
                    int ahora=static_cast<int> (Listado[i].getApellidos()[k]);
                    int futuro=static_cast<int> (Listado[i+1].getApellidos()[k]);
                    if (ahora>futuro){
                        swap(Listado[i],Listado[i+1]);
                        menor=0;
                        break;
                    }
                    k++;
                 }
                 if (Listado[i].getApellidos().size() >Listado[i+1].getApellidos().size()&&menor) swap(Listado[i],Listado[i+1]);
             }
        }
    }
}

void seccion::addAlumno(){
    ofstream archivo;
    archivo.open(nombreArchivo, ios::app);//para agregar y no borrar
    Listado.push_back(Alumno("Jhon,Doe,M,0,0,0,tucasa,0,seccion,0,tahuantinsuyo,0,0",nombreSeccion));
    string aux=Listado[(Listado.size()-1)].askModificarDatos();
    archivo<<endl<<aux;
    archivo.close();
}

void seccion::deleteAlumno(int n){
    verListadoAlumnos();
    cout<<"Ingrese el numero del alumno a eliminar: ";cin>>n;
    ifstream archivo;
    ofstream tmp("tmp.csv");
    string linea;
    archivo.open(nombreArchivo);
    if(tmp.fail()||tmp.fail()){cout<<"Error al cargar la seccion";exit(1);}
    string buscando=Listado[n].lineaFichero;
    while(getline(archivo,linea)){
        if (linea==buscando)continue;
        tmp<<linea<<endl;
    }
    archivo.close();tmp.close();
    remove(nombreArchivo.c_str());
    rename("tmp.csv",nombreArchivo.c_str());
    cout<<"Alumno Eliminado "<<Listado[n-1].getApellidosNombres()<<endl;
    Listado.erase(Listado.begin()+(n-1));
}

void seccion::verAsistencias(){
    cout<<endl<<"+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+"<<endl;
    cout<<endl<<"                   ASISTENCIA DE LA SECCION "<<nombreSeccion<<": "<<endl;
    asistencias[0].coutTablaHeader();
        for(int i=0;i<asistencias.size();i++){
            cout<<i+1<<". ";
            asistencias[i].coutAsistencia();
        }
}


void seccion::addAnecdotario(){
    ofstream archivo;
    archivo.open("archivos/Anecdotario/"+nombreSeccion+".csv", ios::app);//para agregar y no borrar
    sucesos.push_back(anecdotario("28,11,2019,Caida,1,Raphaella se tropezo,4 anios"));
    string aux=sucesos[(sucesos.size()-1)].askModificarAnecdotario();
    archivo<<endl<<aux;
    archivo.close();
}

void seccion::modificarAlumno(int n){
    string nombreArchivo="archivos/alumnos/"+nombreSeccion+".csv";
    string deReemplazo=Listado[n].askModificarDatos();
    modificarLinea(Listado[n].lineaFichero,deReemplazo,nombreArchivo);
}

 void seccion::modificarLinea(string lOriginal,string lReemplazo,string nombreArchivo){
    ifstream archivo;
    ofstream tmp("tmp.csv");
    string linea;
    archivo.open(nombreArchivo);
    if(tmp.fail()||tmp.fail()){cout<<"Error al cargar la seccion";exit(1);}
    while(getline(archivo,linea)){
        if (linea==lOriginal){
            linea=lReemplazo;
            cout<<"Cambios modificados"<<endl;
            }
        tmp<<linea<<endl;
    }
    archivo.close();
    tmp.close();
    remove(nombreArchivo.c_str());
    rename("tmp.csv",nombreArchivo.c_str());
 }

void seccion::iniciarExpediente(){
    ifstream archivo;
    string linea;
    archivo.open("archivos/expediente/"+nombreSeccion+".csv",ios::in);//Abre el archivo en modo lectura
    if(archivo.fail()){cout<<"Error al cargar el expediente medico";exit(1);}
    getline(archivo,linea);
    for(int i=0;Listado.size()>i;i++,getline(archivo,linea)){
        Listado[i].expediente=expedienteMedico(linea);
    }
    archivo.close();
}
void seccion::iniciarAsistencia(){
    ifstream archivo;
    string linea;
    archivo.open(("archivos/asistencias/"+nombreSeccion+".csv"),ios::in);//Abre el archivo en modo lectura
    if(archivo.fail()){cout<<"Error al cargar la seccion";exit(1);}
    while(getline(archivo,linea)){
        asistencias.push_back(Asistencia(linea));
    }
    archivo.close();
}

void seccion::iniciarAnecdotario(){
    ifstream archivo;
    string linea;
    archivo.open(("archivos/Anecdotario"+ nombreSeccion+".csv"),ios::in);//Abre el archivo en modo lectura
    if(archivo.fail()){cout<<"Error al cargar el anecdotario";exit(1);}
    while(getline(archivo,linea)){
        sucesos.push_back(anecdotario(linea));
    }
    archivo.close();
}

void seccion::addAsistencias(){
    ofstream archivo;
    archivo.open("archivos/asistencias/"+nombreSeccion+".csv", ios::app);//para agregar y no borrar
    asistencias.push_back(Asistencia("27,11,2019,1,2,3,4,5"));
    string aux=asistencias[(asistencias.size()-1)].askmodificarAsistencia();
    archivo<<endl<<aux;
    archivo.close();
}

bool seccion::coincidePadreAlumno(int codigoPadre){
    for (int i=0;i<Listado.size();i++) if (Listado[i].codigoMatricula==codigoPadre) return 1;
    return 0;
}
int seccion::buscarCodigoMatricula(int codigoABuscar){
    for (int i=0;i<Listado.size();i++)
        if (Listado[i].codigoMatricula==codigoABuscar) return i;
    return 0;
}
void seccion::iniciarPadres(){
    ifstream archivo;
    string linea;
    archivo.open(("archivos/padres/"+nombreSeccion+".csv"),ios::in);//Abre el archivo en modo lectura
    if(archivo.fail()){cout<<"Error al cargar la seccion";exit(1);}
    int i=0,aux=0;
    while(getline(archivo,linea)){
        ppff.push_back(Padres(linea));
        if (coincidePadreAlumno(ppff[i].matricula)){
            aux=buscarCodigoMatricula(ppff[i].matricula);
            Listado[aux].agregarPadre(ppff[i]);
    }
        i++;
    }
    archivo.close();
}


