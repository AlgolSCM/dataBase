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

void Padres :: setNombresApellidos(string nombresApellidos,string parentesco){
this -> nombresApellidos=nombresApellidos;
this -> parentesco=parentesco;
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
cout<<endl<<"°||°||°||°||°||°||°||°||°DATOS DE CONTACTO||°||°||°||°||°||°||°||°||"<<endl;
cout<<"Nombres y Apellidos: "<<nombresApellidos<<endl;
cout<<"Telefono: "<<telefono<<endl;
}

void Padres::DatosPadres(){
    cout<<endl<<"=-=-=-=-=-=-=-=-=-DATOS DE LOS PADRES O APODERADO=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
    cout<<endl<<"°.°.°.°.°.°.°.°.°.DATOS PERSONALES°.°.°.°.°.°.°.°.°.°.°."<<endl;
    cout<<"Nombres y Apellidos: "<<nombresApellidos<<endl;
    cout<<"Parentesco: "<<parentesco<<endl;
    cout<<(viveCon==true?"si":"no")<<endl;
    cout<<"Fecha de Nacimiento: ";fechaNacimiento.coutDMMAA(1);
    cout<<endl<<"°.°.°.°.°.°.°.°.°.DOCUMENTOS°.°.°.°.°.°.°.°.°.°.°."<<endl;
    cout<<"DNI: "<<dni<<endl;
    cout<<endl<<"°.°.°.°.°.°.°.°.°.CONTACTO°.°.°.°.°.°.°.°.°.°.°."<<endl;
    cout<<"Telefono: "<<telefono<<endl;
    //cout<<"Direccion: "<<domicilio<<endl;
    cout<<"Religion: "<<religion<<endl;
    cout<<endl<<"°.°.°.°.°.°.°.°.°.TRABAJO°.°.°.°.°.°.°.°.°.°.°."<<endl;
    cout<<"Ocupacion: "<<ocupacion<<endl;
    cout<<"Grado de Estudios: "<<gradoEstudios<<endl;
    cout<<"Centro de Trabajo: "<<centroDeTrabajo<<endl;
    //cout<<"Direccion de Trabajo: "<<trabajo<<endl;
    cout<<endl<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
}

int Padres::ingresesuSeleccion(){
    int n;
    cout<<"Ingrese su seleccion: ";
    cin>>n;
    cout<<endl;
    return n;
}

void Padres ::MenuDatosPadres(){
    cout<<endl<<"=^..^= =^..^= =^..^= =^..^= =^..^= =^..^= =^..^="<<endl;
    cout<<"Elija una opcion para modificar o visualizar los datos de los padres u apoderados"<<endl;
    cout<<"1 -> Datos Personales"<<endl;
    cout<<"2 -> Mostrar Datos de Contacto"<<endl;
    cout<<"3 -> Mostrar Daatos de los Padres o Apoderado"<<endl;
switch(ingresesuSeleccion()){
case 1:{
    cout<<endl<<"=^..^= =^..^= =^..^= =^..^= =^..^= =^..^= =^..^="<<endl;
    cout<<"Nombres y Apellidos: ";string a;getline(cin,a);
    cout<<"Parentesco: ";string b;getline(cin,b);
    //cout<<"Fecha:(ingrese dia, mes y año) ";int c,d,e;cin>>c,d,e;
    //fechaNacimiento.setDiaMesAnio(c,d,e);
    setNombresApellidos(a,b);
    cout<<"DNI: ";int f;cin>>f;setDocumentos(f);
    cout<<"Telefono: ";int g; cin>>g;
    //cout<<"Dirección: "<<direccion h; cin>>g;
    //setTelefonoDireccion();
    //cout<<"Direcciónde Trabajo: "<<direccion h; cin>>g;
    cout<<"Ocupacion: ";string j; getline(cin,j);
    cout<<"Centro de Trabajo: ";string k;getline(cin,k);
    cout<<"Grado de Estudios: ";string l; getline(cin,l);
    //setTrabajo(,j,k,l);
    cout<<"Religion: ";string m;getline(cin,m);setReligion(m);
    cout<<"Vive con el niño";bool n;cin>>n;setVivecon(n);
    break;
}
case 2:{
    getDatosdeContacto();
    break;
    }
case 3:
    DatosPadres();
    break;
default:
    cout<<"Opción no valida";
    break;
}
}
