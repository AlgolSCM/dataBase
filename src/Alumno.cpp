#include "Alumno.h"
#include <iostream>
#include <string>
#include "fecha.h"
#include "expedienteMedico.h"
#include "notas.h"
#include "NotasABC.h"
#include <fstream>
#include "Padres.h"
using namespace std;

Alumno::Alumno(){}

int StringToInts(string num);
Alumno::Alumno(string lineaFichero,string nombreSeccion){
    this->nombreSeccion=nombreSeccion;
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
    codigoEstudiante=fields[9];
    religion=fields[10];
    codigoMatricula=StringToInts(fields[11]);
    deuda=stoi(fields[12]);
    this->lineaFichero=lineaFichero;
    //cout<<"alumno "<<nombres<<" creado "<<++countAlumno<<endl;
}

Alumno::~Alumno()
{
    //dtor
}
string datosVisualizables[]={"personales","colegio","asistencias","padres","documentos","matricula","notas","otros"};

void Alumno::texto(string label,string texto[],int tam,bool prompt,bool numeracion){
    cout<<"->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->"<<endl;
    cout<<label<<": "<<endl;
    for (int i=0;i<tam;i++){
        if (numeracion) cout<<i+1<<". ";
        cout<<texto[i]<<endl;}
    if(prompt) cout<<"Ingrese su seleccion: ";
}

//VISUALIZAR DATOS
void Alumno::elegirVisualizarDatos(bool seleccion){
    cout<<"DATOS "<< getApellidosNombres()<<endl;
    //string datosVisualizables[]={"personales","colegio","asistencias","padres","documentos","matricula","notas","otros"};
    int tam=8;
    bool siNo[8];
    if (seleccion)
        for (int i=0;i<tam;i++){
            if (i==2) continue;
            cout<<"Datos "<<datosVisualizables[i]<<"-> Ingrese 1(ver) o 0(no ver): ";
            cin>>siNo[i];
        }
    if (siNo[0]) verDatosPersonales();
    if (siNo[1]) verDatosColegio();
    if (siNo[3]) verContacto();
    if (siNo[4]) verDocumentos();
    if (siNo[5]) verMatricula();
    if (siNo[6]) leernotas();
    if (siNo[7]) verOtros();
}
void Alumno::verDatosPersonales(){
    cout<<endl<<"=-=-=-=-=-=-=-=-=-=-DATOS PERSONALES=-=-=-=-=-=-=-=-=-=-=-="<<endl;
    cout<<"Apellidos y Nombres: "<<getApellidosNombres()<<endl;
    cout<<"Genero: ";
    cout<<((genero=='M')?"Masculino":"Femenino")<<endl;
    cout<<"Fecha de Nacimiento: ";
    nacimiento.coutDMA(1);
}
void Alumno::verDatosColegio(){
    cout<<endl<<"=-=-=-=-=-=-=-=-=-COLEGIO=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
    cout<<"Codigo Estudiante: "<<codigoEstudiante<<endl;
}
void Alumno::verContacto(){
    //cout<<endl<<"=-=-=-=-=-=-=-=-=-=-PADRES=-=-=-=-=-=-=-=-=-=-="<<endl;
    for (int i=0;i<apoderados.size();i++)
        apoderados[i].DatosPadres();
}
void Alumno::verDocumentos(){
    cout<<endl<<"=-=-=-=-=-=-=-=-=-DOCUMENTOS=-=-=-=-=-=-=-=-=-=-="<<endl;
    cout<<"DNI: "<<dni<<endl;
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

string Alumno::askModificarDatos(){
    string separador=": ";
    getline(cin,nombres);//
    cout<<"Nombres"<<separador;getline(cin,nombres);
    cout<<"Apellidos"<<separador;getline(cin,apellidos);
    cout<<"DNI"<<separador;cin>>dni;
    cout<<"Codigo del Siagie"<<separador;cin>>codigoEstudiante;
    cout<<"Codigo del colegio"<<separador;cin>>codigoEnSeccion;

    cout<<"Genero"<<separador;cin>>genero;
        int dia, mes, anio;
        cout<<"Fecha Nacimiento ";
        cout<<"DIA: ";cin>>dia;
        cout<<"MES: ";cin>>mes;
        cout<<"ANIO: ";cin>>anio;
        nacimiento=fecha(dia,mes,anio);
    getline(cin,direccionDomicilio);
    cout<<"Domicilio"<<separador;getline(cin,direccionDomicilio);cout<<direccionDomicilio<<endl;
    cout<<"Religion"<<separador;getline(cin,religion);
    cout<<"Deuda de matricula"<<separador;cin>>deuda;
    string datoAModificar=nombres+","+apellidos+","+genero+","+to_string(dia)+","+to_string(mes)+","+to_string(anio)+",";
    datoAModificar=datoAModificar+direccionDomicilio+","+to_string(dni)+","+" ,"+to_string(codigoEnSeccion)+","+religion+",";
    datoAModificar=datoAModificar+to_string(codigoMatricula)+","+to_string(deuda);
    return datoAModificar;
}

//GETS
string Alumno::getSeccion(){return nombreSeccion;}
string Alumno::getNombres(){return nombres;}
string Alumno::getApellidos(){return apellidos;}
string Alumno::getApellidosNombres(){return apellidos+", "+nombres;}
string Alumno::getcodigoEstudiante(){return codigoEstudiante;}

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
void Alumno::cargarPadre(){
 ifstream archivo;
    string linea;
    archivo.open("archivos/padres/"+nombreSeccion+".csv",ios::in);//Abre el archivo en modo lectura
    if(archivo.fail()){cout<<"Error al cargar los padres";exit(1);}
    getline(archivo,linea);
    for(int i=0;apoderados.size()>i;i++,getline(archivo,linea)){
        Padres tmp(linea);
        if(tmp.matricula==codigoMatricula)
            apoderados.push_back(Padres(linea));
    }
    archivo.close();
}

void Alumno::leernotas(){
    if(nombreSeccion!="2 anios"){
        cout<<endl<<"=-=-=-=-=-=-=-=-=-NOTAS DEL ALUMNO=-=-=-=-=-=-=-=-=-=-="<<endl;
        string linea;
        string nombreArchivo="archivos/n/"+nombreSeccion+"/"+to_string(dni)+".csv";
        ifstream archivo;
        archivo.open(nombreArchivo);
        if (archivo.fail()){
            ofstream archivo(nombreArchivo);//si no existe crea uno
            cout<<"Este alumno no tiene notas"<<endl;
        }
        archivo.close();
        archivo.open(nombreArchivo);
        NotasABC aux;
        if (archivo.fail()){cout<<"Error al cargar el archivo"<<endl;exit(1);}
        while(getline(archivo,linea)){
            aux=NotasABC(linea);
            aux.imprimirnota();
            }
    }
    else{
        cout<<endl<<"=-=-=-=-=-=-=-=-=-NOTAS DEL ALUMNO=-=-=-=-=-=-=-=-=-=-="<<endl;
        string linea;
        string nombreArchivo="archivos/n/"+nombreSeccion+"/"+to_string(dni)+".csv";
        cout<<nombreArchivo;
        ifstream archivo;
        archivo.open(nombreArchivo);
        if (archivo.fail()){
            ofstream archivo(nombreArchivo);//si no existe crea uno
            cout<<"Este alumno no tiene notas"<<endl;
        }
        archivo.close();
        archivo.open(nombreArchivo);
        notas aux;
        if (archivo.fail()){cout<<"Error al cargar el archivo"<<endl;exit(1);}
        while(getline(archivo,linea)){
            aux=notas(linea);
            aux.imprimirnota();
        }
    }
}

void Alumno::addNotas(int trimestre){
    if(nombreSeccion!="2 anios"){
    string nombreArchivo="archivos/n/"+nombreSeccion+"/"+to_string(dni)+".csv";
    string linea;//string auxiliar
    //Archivo por defecto como guia
    ifstream guia;
    guia.open("archivos/n/default/"+nombreSeccion+".csv");
    if (guia.fail()){cout<<"no se pudo abrir por defecto";exit(1);}
    //Archivo de Salida
    ofstream archivo;
    archivo.open(nombreArchivo, ios::app);//solo agrega al final
    if (archivo.fail()) ofstream archivo(nombreArchivo);//si no existe crea uno}
    archivo.close();
    archivo.open(nombreArchivo, ios::app);
    if (archivo.fail()) {cout<<"no se pudo abrir por defecto";exit(1);
    }//Si vuelve a fallar cierra el prorama
    NotasABC aux;
    while(getline(guia,linea)){
        aux=NotasABC(linea,trimestre);
        aux.setNotas();
        archivo<<aux.getString()<<endl;
    }
    archivo.close();
    guia.close();
}
    else{
    string nombreArchivo="archivos/n/"+nombreSeccion+"/"+to_string(dni)+".csv";
    string linea;//string auxiliar
    //Archivo por defecto como guia
    ifstream guia;
    guia.open("archivos/n/default/"+nombreSeccion+".csv");
    if (guia.fail()){cout<<"no se pudo abrir por defecto";exit(1);}
    //Archivo de Salida
    ofstream archivo;
    archivo.open(nombreArchivo, ios::app);//solo agrega al final
    if (archivo.fail()) ofstream archivo(nombreArchivo);//si no existe crea uno}
    archivo.close();
    archivo.open(nombreArchivo, ios::app);
    if (archivo.fail()) {cout<<"no se pudo abrir por defecto";exit(1);
    }//Si vuelve a fallar cierra el prorama
    notas aux;
    while(getline(guia,linea)){
        aux=notas(linea,trimestre);
        aux.setNotas();
        archivo<<aux.getString()<<endl;
    }
    archivo.close();
    guia.close();

}

}
int StringToInts(string num){
    int salida=0;
    int n;
    char a;
    int i=num.length()-1;
    for (int j=1 ;i>=0; i--,j=j*10){
        a=num[i];
        n=static_cast<int>(a)-48;
        salida+=n*j;
    }
    return salida;
}
