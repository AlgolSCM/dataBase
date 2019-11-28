#include "expedienteMedico.h"
#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
expedienteMedico::expedienteMedico()
{
    sento=0;paro=0;camino=0;palabra=0;hablo=0;gateo=0;esfinteres=0;
    controlaEsfinteres=true;partonatural=true;tipoSangre="O+";
    alergias="";vacunas="";enfermedades="";traumas="";partodescripcion="";

}

expedienteMedico ::expedienteMedico(string lineFichero){
    int x=0;
    vector <string> files ;
    stringstream ss(lineFichero);
    string actual;
    while (getline(ss, actual, ','))
        files.push_back(actual);
    LlenarSeSento(stoi(files[1]));
    LlenarSeParo(stoi(files[2]));
    LlenarCamino(stoi(files[3]));
    LlenarPrimeraPalabra(stoi(files[4]));
    LlenarGateo(stoi(files[5]));
    Esfinteres(stoi(files[6]));
    LlenarEsfin(stoi(files[7]));
    LlenarHabloConFluidez(stoi(files[8]));
    LlenarTipodeSangre(files[9]);
    LlenarAlergias(files[10]);
    LlenarVacunas(files[11]);
    LlenarEnfermedades(files[12]);
    LlenarTraumas(files[13]);
    LlenarParto(stoi(files[14]));
    LlenarPartoN(files[15]);
    //cout<<"Expediente completo"<<endl;
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
      this ->partodescripcion=partodescripcion;
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
    this ->palabra=palabra;
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
 void expedienteMedico:: LlenarEsfin(int esfinteres){
    this -> esfinteres=esfinteres;
 }

 void expedienteMedico:: LlenarPartoN(string partodescripcion){
    this -> partodescripcion=partodescripcion;
 }
void expedienteMedico::MostrarExpediente(){
    cout<<endl<<"=-=-=-=-=-=-=-=-=-EXPEDIENTE MEDICO=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
    cout<<endl<<"°.°.°.°.°.°.°.°.°.DATOS DE DESARROLLO°.°.°.°.°.°.°.°.°.°.°."<<endl;
    cout<<"Se sento: "<<sento<<" meses"<<endl;
    cout<<"Se paro: "<<paro<<" meses"<<endl;
    cout<<"Camino: "<<camino<<" meses"<<endl;
    cout<<"Gateo: "<<gateo<<endl;
    cout<<"Dijo su primera palabra: "<<palabra<<" meses"<<endl;
    cout<<"Hablo con fluidez: "<<hablo<<" meses"<<endl;
    if (controlaEsfinteres==true){
        cout<<"Controla Esfinteres: Si "<<"Edad: "<<esfinteres<<" meses"<<endl;
        }
    else{
        cout<<"Controla Esfinteres: No "<<"Edad: --- "<<endl;
        }
    if (partonatural==true){
        cout<<"Parto: Natural "<<"Complicacion:--- "<<endl;
        }
    else{
        cout<<"Parto: Complicado"<<" Complicacion: "<<partodescripcion<<endl;
        }
    cout<<endl<<"°.°.°.°.°.°.°.°.°.ESTADO DE SALUD°.°.°.°.°.°.°.°.°.°.°."<<endl;
    cout<<"Alergia: "<<alergias<<endl;
    cout<<"Vacunas con las que cuenta: "<<vacunas<<endl;
    cout<<"Experiencias Traumaticas: "<<traumas<<endl;
    cout<<"Enfermedades Sufridas: "<<enfermedades<<endl;
    cout<<"Tipo de Sangre: "<<tipoSangre<<endl;
    cout<<endl<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
}

int expedienteMedico::ingreseSeleccion(){
    int n;
    cout<<"Ingrese su seleccion: ";
    cin>>n;
    cout<<endl;
    return n;
}


void expedienteMedico::MenuExpMedico(){
    cout<<endl<<"=^..^= =^..^= =^..^= =^..^= =^..^= =^..^= =^..^="<<endl;
    cout<<"Elija una opcion para modificar o visualizar los datos medicos del alumno"<<endl;
    cout<<"1 -> Datos de Desarrollo"<<endl;
    cout<<"2 -> Datos del Estado de Salud"<<endl;
    cout<<"3 -> Mostrar Datos Médicos"<<endl;
switch(ingreseSeleccion()){
case 1:{
    cout<<endl<<"=^..^= =^..^= =^..^= =^..^= =^..^= =^..^= =^..^="<<endl;
    cout<<"Los siguientes datos seran ingresados en meses";
    cout<<"Se sento: ";int a;cin>>a;LlenarSeSento(a);
    cout<<"Se paro: ";cin>>a;LlenarSeParo(a);
    cout<<"Camino: ";cin>>a;LlenarCamino(a);
    cout<<"Primera Palabra: ";cin>>a;LlenarPrimeraPalabra(a);
    cout<<"Hablo con fluidez: ";cin>>a;LlenarHabloConFluidez(a);
    cout<<"Gateo: ";cin>>a;LlenarGateo(a);
    cout<<"Controlo Esfinteres: ";bool g;cin>>g;Esfinteres(g);
    cout<<"Parto: ";cin>>g;LlenarParto(g);
    cout<<endl<<"=^..^= =^..^= =^..^= =^..^= =^..^= =^..^= =^..^="<<endl;
    break;
}
case 2:{
    cout<<endl<<"=^..^= =^..^= =^..^= =^..^= =^..^= =^..^= =^..^="<<endl;
    cout<<"Este campo sera llenado con palabras"<<endl;string i;getline(cin,i);cout<<endl;
    cout<<"Tipo de Sangre: ";getline(cin,i);LlenarTipodeSangre(i);cout<<endl;
    cout<<"Alergias: ";getline(cin,i);LlenarAlergias(i);
    cout<<"Vacunas: ";getline(cin,i);LlenarVacunas(i);
    cout<<"Enfermedades Sufridas: ";getline(cin,i);LlenarEnfermedades(i);
    cout<<"Experiencias Traumaticas: ";getline(cin,i);LlenarTraumas(i);
    cout<<endl<<"=^..^= =^..^= =^..^= =^..^= =^..^= =^..^= =^..^="<<endl;
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
