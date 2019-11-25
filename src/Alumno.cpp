#include "Alumno.h"
#include <iostream>
#include <string>
#include "fecha.h"
#include "expedienteMedico.h"
using namespace std;

Alumno::Alumno()
{
    //ctor
}

Alumno :: Alumno(string nombres,string apellidos,string sec){
    this->apellidos=apellidos;
    this->nombres=nombres;
    const string nombreSeccion=sec;
}

Alumno::Alumno(string lineaFichero){
    vector <string> fields;
    stringstream ss(lineaFichero);
    string actual;
    while (getline(ss, actual, ','))
        fields.push_back(actual);
    nombres=fields[0];
    apellidos=fields[1];
    genero=fields[2][0];
    nacimiento=fecha(stoi(fields[3]),stoi(fields[4]),stoi(fields[5]));
    direccionDomicilio=fields[6];
    dni=stoi(fields[7]);
    codigoEstudiante=stoi(fields[9]);
    religion=fields[10];
    codigoMatricula=stoi(fields[11]);
    deuda=stoi(fields[12]);
}

Alumno::~Alumno()
{
    //dtor
}
string datosVisualizables[]={"personales","colegio","asistencias","contactos","documentos","matricula","otros"};



void Alumno::texto(string label,string texto[],int tam,bool prompt,bool numeracion){
    cout<<"->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->"<<endl;
    cout<<label<<": "<<endl;
    for (int i=0;i<tam;i++){
        if (numeracion) cout<<i+1<<". ";
        cout<<texto[i]<<endl;}
    if(prompt) cout<<"Ingrese su seleccion: ";
}

void Alumno::menuSeleccionAlumno(bool inAlumno){
    string opcionesAlumno[]={"Ver Datos completos","Modificar Dato","Salir"};
    int subCase;
    while (inAlumno){
        cout<<endl<<"=^..^= =^..^= =^..^= =^..^= =^..^= =^..^= =^..^="<<endl;
        verDatosPersonales();verDatosColegio();
        texto("Menu seleccion Alumno",opcionesAlumno,3);
        switch(cin.get()){
            case '1':{
                elegirVisualizarDatos();
                break;}
            case '2':{
//                texto("Datos que se pueden modificar",datosModificables,3);
                cin>>subCase;
                switch(subCase){
//                     case '1': visualizarDatos(); break;
                }
                break;}
            case '3':
                inAlumno=false;
                break;
        }
    }
}

//VISUALIZAR DATOS
void Alumno::elegirVisualizarDatos(bool seleccion){
    cout<<"DATOS "<< getApellidosNombres()<<endl;
    int tam=7;
    //string datosVisualizables[]={"personales","colegio","asistencias","contactos","documentos","matricula","otros"};
    bool siNo[]={1,1};
    if (seleccion)
        for (int i=0;i<tam;i++){
            cout<<"Datos "<<datosVisualizables[i]<<"-> Ingrese 1(ver) o 0(no ver): ";
            cin>>siNo[i];
        }
    if (siNo[0]) verDatosPersonales();
    if (siNo[1]) verDatosColegio();
    if (siNo[2]) verAsistencias();
    if (siNo[3]) verContacto();
    if (siNo[4]) verDocumentos();
    if (siNo[5]) verMatricula();
    if (siNo[6]) verOtros();
    cout<<"Puede salir de alumno para visualizar los datos de seccion"<<endl;
}
void Alumno::verDatosPersonales(){
    cout<<endl<<"=-=-=-=-=-=-=-=-=-=-DATOS=-=-=-=-=-=-=-=-=-=-=-="<<endl;
    cout<<"Apellidos y Nombres: "<<getApellidosNombres()<<endl;
    cout<<"Genero: ";
    cout<<((genero=='M')?"Masculino":"Femenino")<<endl;
    cout<<"Fecha de Nacimiento: ";//llamar a fecha de nacimiento
}
void Alumno::verDatosColegio(){
    cout<<endl<<"=-=-=-=-=-=-=-=-=-COLEGIO=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
    cout<<"Codigo Estudiante: "<<codigoEstudiante<<endl;
    cout<<"Seccion: "<<nombreSeccion<<endl;
}
void Alumno::verAsistencias(bool tag){
    if (tag) cout<<endl<<"=-=-=-=-=-=-=-=-=-ASISTENCIAS=-=-=-=-=-=-=-=-=-=-"<<endl;
    cout<<"  FALTAS "<<"Jutificas: "<<contarCaracter(asistencias,'F')<<" Injutificas: "<<contarCaracter(asistencias,'f');
    cout<<"  TARDANZAS "<<"Jutificas: "<<contarCaracter(asistencias,'T')<<" Injutificas: "<<contarCaracter(asistencias,'t');
    cout<<"  ASISTENCIAS "<<contarCaracter(asistencias,'A')<<endl;
}
void Alumno::verContacto(){
    cout<<endl<<"=-=-=-=-=-=-=-=-=-=-CONTACTO=-=-=-=-=-=-=-=-=-=-="<<endl;
    cout<<"Telefonos de Emergencia"<<telefonoEmergencia[0]<<" "<<telefonoEmergencia[1]<<endl;
    //Llamar a direccion Domicilio cout
    //Imprimir nombres de Padres
}
void Alumno::verDocumentos(){
    cout<<endl<<"=-=-=-=-=-=-=-=-=-DOCUMENTOS=-=-=-=-=-=-=-=-=-=-="<<endl;
    cout<<"DNI: "<<dni<<endl;
    cout<<"Nro. Partida Nacimiento: "<<partidaNacimiento<<endl;
}
void Alumno::verMatricula(){
    cout<<endl<<"=-=-=-=-=-=-=-=-=-MATRICULA=-=-=-=-=-=-=-=-=-=-="<<endl;
    cout<<"Codigo matricula: "<<codigoMatricula<<endl;
    cout<<"Saldo pendiente: "<<deuda<<endl;
}
void Alumno::verOtros(){
    cout<<endl<<"=-=-=-=-=-=-=-=-=-=-OTROS=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
    cout<<"Religion: "<<religion<<endl;
    expediente.MostrarExpediente();
}

void Alumno::llenarTodosDatos(){
    string stringLlenar;int intLlenar;char charLlenar;long long long2Llenar;
    cout<<"Nombres"<<": ";cin>>stringLlenar;nombres=stringLlenar;
    cout<<"Apellidos"<<": ";cin>>stringLlenar;apellidos=stringLlenar;
    cout<<"DNI"<<": ";cin>>intLlenar;dni=intLlenar;
    //
    cout<<"No. Partida"<<": ";cin>>intLlenar;partidaNacimiento=intLlenar;
    cout<<"Codigo del Siagie"<<": ";cin>>long2Llenar;codigoEstudiante=long2Llenar;
    cout<<"Genero"<<": ";cin>>charLlenar;genero=charLlenar;
    //cout<<"Fecha Nacimiento"<<": ";cin>>stringLlenar;apellidos=stringLlenar;
    //cout<<"Domicilio"<<": ";cin>>stringLlenar;apellidos=stringLlenar;
    cout<<"Religion"<<": ";cin>>stringLlenar;religion=stringLlenar;
    cout<<"Deuda de matricula"<<": ";cin>>intLlenar;deuda=intLlenar;
    //cout<<"Asistencias"<<": ";cin>>stringLlenar;apellidos=stringLlenar;
    cout<<"Expediente"<<": ";expediente.MenuExpMedico();
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
string Alumno::getSeccion(){return nombreSeccion;}
string Alumno::getNombres(){return nombres;}
string Alumno::getApellidos(){return apellidos;}
string Alumno::getApellidosNombres(){return apellidos+", "+nombres;}
long long Alumno::getcodigoEstudiante(){return codigoEstudiante;}

//CONTAR
int Alumno::contarCaracter(vector <char> lista, char caracter){
    int cuenta=0;
    for (int i=0;i<lista.size();i++)
        if (lista[i]==caracter) cuenta++;
    return cuenta;
}

//ADS
void Alumno::addAsistencia(){
    char n;
    cout<<getApellidosNombres()<<endl;
    cout<<"F(Falta justificada), f(falta injustificada), T(tardanza justificada), t(tardanza injustificada), A(asistencia)"<<endl;
    cout <<"Ingrese Asistencia: "<<endl;
    cin>>n;
    asistencias.push_back(n);
}
