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
        Listado.push_back(Alumno(linea));
    archivo.close();
    this->nombreSeccion=nombreSeccion;
    //cout<<"Seccion Iniciada"<<endl;
}

void seccion::iniciarArchivos(){
    iniciarExpediente();
    iniciarAsistencia();
    iniciarAnecdotario();
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
    string opcionSeleccion[]={"ALUMNOS","ASISTENCIAS","ANECDOTARIO","Salir"};
    string opcionCases[]={"Seleccionar Alumno (visualizar datos)","Ordenar","Anadir","modificar","eliminar","Salir"};
    while (inSeccion){
        cout<<endl<<"=^..^= =^..^= =^..^= =^..^= =^..^= =^..^= =^..^="<<endl;
        cout<<"Estas en la seccion: "<<nombreSeccion<<endl;
        char inCaseSelection;bool inSubcase=1;
        texto("Opciones de Seccion",opcionSeleccion,4);
        switch(cin.get()){
            case '1':
                while(inSubcase){
                    verListadoAlumnos();
                    texto("OPCIONES Listado de Alumnos",opcionCases,6);
                    cin>>inCaseSelection;
                    switch (inCaseSelection){
                        case '1':{int n;cout<<"Ingrese alumno";cin>>n;Listado[n-1].elegirVisualizarDatos();break;}
                        case '2':ordenarListadoAlumnos();break;
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
                cout<<"asistencia de Seccion ... "<<endl;
                inSeccion=false;
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
                            cout<<"�que sucede?"<<endl;
                            break;
                        }
                        case '6':{
                            inSubcase=false;
                            break;
                        }
                break;
                }
            }
            case '4':
                cout<<"Saliendo de Seccion ... "<<endl;
                inSeccion=false;
                break;
            /**case '2':
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
                                verNotas();
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
                break;*/
            case '7':
                cout<<"Saliendo de Seccion ... "<<endl;
                inSeccion=false;
                break;
        }
    }
}

void seccion::verListadoAlumnos(){
    cout<<endl<<"ALUMNOS DE LA SECCION "<<nombreSeccion<<": "<<endl;
    for(int i=0;i<Listado.size();i++)
        cout<<i+1<<". "<<Listado[i].getApellidosNombres()<<endl;
}

void seccion::ordenarListadoAlumnos(){
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
    Listado.push_back(Alumno("Jhon,Doe,M,0,0,0,tucasa,0,seccion,0,tahuantinsuyo,0,0"));
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

void seccion::verAsistencias(){}
void seccion::tomarAsistencias(){}

void seccion::verNotas(){


}
void seccion::addNotas(){}

/*void seccion::verCursosTalleres(){
    cout<<"Cursos Asignados"<<endl;
    //for (int i=0;i<cursosTalleres.size();i++)
        //cout << cursosTalleres[i].getNombreCurso()<<endl;
}
void seccion::asignarCursosTalleres(){}
void seccion::verAnecdotario(){}
*/
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
/*
void seccion::iniciarPadres(){
    ifstream archivo;
    string linea;
    archivo.open(("archivos/padres/"+nombreSeccion+".csv"),ios::in);//Abre el archivo en modo lectura
    if(archivo.fail()){cout<<"Error al cargar la seccion";exit(1);}
    int i=0;
    while(getline(archivo,linea)){
        ppff.push_back(Padres(linea));
        cout<<"que la fuerza te acompanie"<<endl;
        cout<<buscarCodigoMatricula(ppff[i].matricula);
        int posVector=buscarCodigoMatricula(ppff[i].matricula);
        Listado[posVector].agregarPadre(ppff[i]);

        i++;
    }
    archivo.close();
}

int seccion::buscarCodigoMatricula(int codigoABuscar){
    for (int i=0;i<Listado.size();i++){
        if (Listado[i].codigoMatricula==codigoABuscar) return i;
        cout<< (Listado[i].codigoMatricula==codigoABuscar);
    }
    return 1111111;
}*/

