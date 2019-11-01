#include "Padres.h"
#include<iostream>
#include<string>
using namespace std;
Padres::Padres()
{
    nombresApellidos=""; parentesco=""; ocupacion=""; correo=""; religion=""; gradoEstudios=""; centroDeTrabajo="";
    viveCon=true;dni=00000000;telefono=999999999; fechaNacimiento;

}

Padres::~Padres()
{
    //dtor
}

void Padres :: setNombresApellidos(string nombresApellidos,string parentesco,fecha fechaNacimiento){
this -> nombresApellidos=nombresApellidos;
this -> parentesco=parentesco;
this -> fechaNacimiento=fechaNacimiento;
}

void Padres::setDocumentos(int dni){
this->dni=dni;
}
void Padres::setTelefonoDireccion(int telefono, direccion domicilio){
this->telefono=telefono;
this->domicilio=domicilio;
}

void Padres :: setTrabajo(direccion trabajo,string ocupacion,string centroDeTrabajo, string gradoEstudios){
this ->centroDeTrabajo=centroDeTrabajo;
this ->ocupacion=ocupacion;
this-> gradoEstudios=gradoEstudios;
this ->trabajo=trabajo;
}

void Padres :: setReligion(string religion){
this ->religion=religion;
}
void Padres :: setVivecon(bool viveCon){
this->viveCon=viveCon;
}
void Padres::getDatosdeContacto(){
cout<<"Nombres y Apellidos: "<<nombresApellidos<<endl;
cout<<"Telefono: "<<telefono<<endl;
}

void Padres::DatosPadres(){
    cout<<"Nombres y Apellidos: "<<nombresApellidos<<endl;
    cout<<"Parentesco: "<<parentesco<<endl;
    cout<<(viveCon==true?"si":"no")<<endl;
    cout<<"Fecha de Nacimiento: ";fechaNacimiento.coutDMMAA(1);
    cout<<"DNI: "<<dni<<cout<<endl;
    cout<<"Telefono: "<<telefono<<endl;
    //cout<<"Direccion: "<<domicilio<<endl;
    cout<<"Religion: "<<religion<<endl;
    cout<<"*************Trabajo*************"<<endl;
    cout<<"Ocupacion: "<<ocupacion<<endl;
    cout<<"Grado de Estudios: "<<gradoEstudios<<endl;
    cout<<"Centro de Trabajo: "<<centroDeTrabajo<<endl;
    //cout<<"Direccion de Trabajo: "<<trabajo<<endl;
}
