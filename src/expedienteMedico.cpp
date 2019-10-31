#include "expedienteMedico.h"
#include<iostream>
#include<string>
using namespace std;
expedienteMedico::expedienteMedico()
{
    sento=0;paro=0;camino=0;palabra=0;hablo=0;gateo=0;esfinteres=0;
    controlaEsfinteres=true;partonatural=true;tipoSangre="O+";
    alergias="";vacunas="";enfermedades="";traumas="";partodescripcion="";

}

expedienteMedico::~expedienteMedico()
{
    //dtor
}
void expedienteMedico::ControlEsfinteres(bool controlaEsfinteres,int esfinteres=0){
  if (controlaEsfinteres==true){
      cout<<"Ingrese la edad"<<endl;
      cin>>esfinteres;
  }
}

void expedienteMedico::TipodeParto(bool partonatural,string partodescripcion){
    if (partonatural==false){
      cout<<"Ingrese la complicación"<<endl;
      cin>>partodescripcion;
    }
}
void expedienteMedico :: LlenarSeSento(int sento){
    this -> sento=sento;
}
void expedienteMedico :: LlenarSeParo(int paro){
    this -> paro=paro;
}
void expedienteMedico :: LlenarCamino(int camino){
    this -> camino=camino;
}
void expedienteMedico :: LlenarPrimeraPalabra(int palabra){
    this ->palabra;
}
void expedienteMedico :: LlenarHabloConFluidez(int hablo){
    this -> hablo=hablo;}
void expedienteMedico :: LlenarGateo(int gateo){
    this -> gateo=gateo;
}
void expedienteMedico :: Esfinteres(bool controlaEsfinteres){
    this -> controlaEsfinteres=controlaEsfinteres;
}
void expedienteMedico :: LlenarParto(bool partonatural){
    this -> partonatural=partonatural;
}
void expedienteMedico :: LlenarTipodeSangre(string tipoSangre){
    this -> tipoSangre=tipoSangre;
}
void expedienteMedico :: LlenarAlergias(string alergias){
    this -> alergias=alergias;
}
void expedienteMedico :: LlenarVacunas(string vacunas){
    this -> vacunas=vacunas;
}
void expedienteMedico :: LlenarEnfermedades(string enfermedades){
    this -> enfermedades=enfermedades;
}
void expedienteMedico :: LlenarTraumas(string traumas){
     this -> traumas=traumas;
}

void expedienteMedico::MostrarExpediente(){

    cout<<"Se sento: "<<sento<<"meses"<<endl;
    cout<<"Se paro: "<<paro<<"meses"<<endl;
    cout<<"Camino: "<<camino<<"meses"<<endl;
    if (controlaEsfinteres==true){
        cout<<"Controla Esfinteres: Si "<<"Edad: "<<esfinteres<<endl;
        }
    else{
        cout<<"Controla Esfinteres: No "<<"Edad: --- "<<endl;
        }
    if (partonatural==true){
        cout<<"Parto: Natural "<<"Complicacion:--- "<<endl;
        }
    else{
        cout<<"Parto: Complicado"<<"Complicacion: "<<partodescripcion<<endl;
        }

    cout<<"Dijo su primera palabra: "<<palabra<<endl;
    cout<<"Hablo con fluidez: "<<hablo<<endl;
    cout<<"Gateo: "<<gateo<<endl;
    cout<<"Alergia: "<<alergias<<endl;
    cout<<"Vacunas con las que cuenta: "<<vacunas<<endl;
    cout<<"Experiencias Traumaticas: "<<traumas;
    cout<<"Enfermedades Sufridas: "<<enfermedades<<endl;
    cout<<"Tipo de Sangre: "<<tipoSangre<<endl;

}

int expedienteMedico::ingreseSeleccion(){
    int n;
    cout<<"Ingrese su seleccion: ";
    cin>>n;
    cout<<endl;
    return n;
}


void expedienteMedico::ModificarDatos(){
    cout<<"Elija una opcion para modificar o visualizar los datos medicos del alumno"<<endl;
    cout<<"1 -> Datos de Desarrollo"<<endl;
    cout<<"2 -> Datos del Estado de Salud"<<endl;
    cout<<"3 -> Mostrar Datos Médicos"<<endl;
switch(ingreseSeleccion()){
case 1:{
    cout<<"Los siguientes datos serán ingresados en meses";
    cout<<"Se sentó: ";int a;cin>>a;LlenarSeSento(a);
    cout<<"Se paró: ";int b;cin>>b;LlenarSeParo(b);
    cout<<"Caminó: ";int c;cin>>c;LlenarCamino(c);
    cout<<"Primera Palabra: ";int d; cin>>d;LlenarPrimeraPalabra(d);
    cout<<"Habló con fluidez: ";int e;cin>>e;LlenarHabloConFluidez(e);
    cout<<"Gateó: ";int f;cin>>f;LlenarGateo(f);
    cout<<"Controló Esfinteres: ";bool g;cin>>g;Esfinteres(g);
    cout<<"Parto: ";bool h;cin>>h;LlenarParto(h);
    break;
}
case 2:{
    cout<<"Este campo será llenado con palabras";
    cout<<"Tipo de Sangre: ";string i;getline(cin,i);LlenarTipodeSangre(i);
    cout<<"Alergias: ";string j;getline(cin,j);LlenarAlergias(j);
    cout<<"Vacunas: ";string k;getline(cin,k);LlenarVacunas(k);
    cout<<"Enfermedades Sufridas: ";string l;getline(cin,l);LlenarEnfermedades(l);
    cout<<"Experiencias Traumáticas: ";string m;getline(cin,m);LlenarTraumas(m);
    break;
    }
case 3:
    MostrarExpediente();
    break;
default:
    cout<<"Opcion no valida";
    break;
}


}
