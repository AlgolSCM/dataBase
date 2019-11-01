#include "Alumno.h"
#include <iostream>
#include <string>
#include "fecha.h"
using namespace std;

Alumno::Alumno()
{
    //ctor
}

Alumno :: Alumno(string nombres,string apellidos){
    this->apellidos=apellidos;
    this->nombres=nombres;
}

Alumno::~Alumno()
{
    //dtor
}

void Alumno::texto(string label,string texto[],int tam,bool prompt,bool numeracion){
    cout<<"->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->"<<endl;
    cout<<label<<": "<<endl;
    for (int i=0;i<tam;i++){
        if (numeracion) cout<<i+1<<". ";
        cout<<texto[i]<<endl;}
    if(prompt) cout<<"Ingrese su seleccion: ";
}

void Alumno::menuSeleccionAlumno(bool inAlumno){
    cout<<endl<<"=^..^= =^..^= =^..^= =^..^= =^..^= =^..^= =^..^="<<endl;
    string opcionesAlumno[]={"Visualizar datos","Seleccionar Dato","Modificar Dato","Salir"};
    int subCase;
    while (inAlumno){
        cout<<"Menu seleccion de alumno "<<getNombres()<<" "<<getApellidos()<<endl;
        texto("Opciones",opcionesAlumno,3);
        switch(cin.get()){
            case '1':{
                visualizarDatos();
                break;}
            case '2':{
                string datosSeleccionables[]={};
                texto("Datos que se pueden seleccionar",datosSeleccionables,3);
                cin>>subCase;
                switch(subCase){
                     case '1': visualizarDatos(); break;
                }
                break;}
            case '3':{
                string datosModificables[]={};
                texto("Datos que se pueden modificar",datosModificables,3);
                cin>>subCase;
                switch(subCase){
                     case '1': visualizarDatos(); break;
                }
                break;}
            case '4':
                inAlumno=false;
                break;
        }
    }
}




void Alumno::visualizarDatos(){
    cout<<"DATOS"<<endl;
    cout<<endl<<"=-=-=-=-=-=-=-=-=-PERSONALES=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
    cout<<"Apellidos y Nombres: "<<getApellidosNombres()<<endl;
    cout<<"Genero: ";
    cout<<((genero=='M')?"Masculino":"Femenino")<<endl;
    cout<<"Fecha de Nacimiento: ";//llamar a fecha de nacimiento
    cout<<endl<<"=-=-=-=-=-=-=-=-=-COLEGIO=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
    cout<<"Codigo Estudiante: "<<codigoEstudiante<<endl;
    cout<<"Seccion: "<<seccion<<endl;
    //imprimir cursos
    cout<<"ASISTENCIAS: "<<endl;
    //imprimir asistencias
    cout<<endl<<"=-=-=-=-=-=-=-=-=-MATRICULA=-=-=-=-=-=-=-=-=-=-="<<endl;
    cout<<"Codigo matricula: "<<codigoMatricula<<endl;
    cout<<"Saldo pendiente: "<<deuda<<endl;
    cout<<endl<<"=-=-=-=-=-=-=-=-=-DOCUMENTOS=-=-=-=-=-=-=-=-=-=-="<<endl;
    cout<<"DNI: "<<dni<<endl;
    cout<<"Nro. Partida Nacimiento: "<<partidaNacimiento<<endl;
    cout<<endl<<"=-=-=-=-=-=-=-=-=-=-CONTACTO=-=-=-=-=-=-=-=-=-=-="<<endl;
    cout<<"Telefonos de Emergencia"<<telefonoEmergencia[0]<<" "<<telefonoEmergencia[1]<<endl;
    //Llamar a direccion Domicilio cout
    //Imprimir nombres de Padres
    cout<<endl<<"=-=-=-=-=-=-=-=-=-=-OTROS=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
    cout<<"Religion: "<<religion<<endl;
}




//SETS
void Alumno::setNombresApellidos(string apellidos,string nombres,char genero) {
    this->apellidos=apellidos;
    this->nombres=nombres;
    this->genero=genero;
}
void Alumno::setNacimiento(int a,int b,int c){this->nacimiento=fecha(a,b,c);}
void Alumno::setDocumentos(int dni,int partida){this->dni=dni;partidaNacimiento=partida;}
void Alumno::setTelefonos(int telefono1,int telefono2){telefonoEmergencia[0]=telefono1;telefonoEmergencia[1]=telefono2;}
void Alumno::setcodigoEstudiante(int codigo){codigoEstudiante=codigo;}
void Alumno::setReligion(string religion){this->religion=religion;}
void Alumno::setPagoDeuda(int n){deuda-=n;}

//GETS
string Alumno::getSeccion(){return seccion;}
string Alumno::getNombres(){return nombres;}
string Alumno::getApellidos(){return apellidos;}
string Alumno::getApellidosNombres(){return apellidos+", "+nombres;}
long long Alumno::getcodigoEstudiante(){return codigoEstudiante;}
