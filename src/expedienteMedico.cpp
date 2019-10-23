
#include "expedienteMedico.h"
#include<iostream>
using namespace std;
expedienteMedico::expedienteMedico()
{
    sento=0;paro=0;camino=0;palabra=0;hablo=0;gateo=0;esfinteres=0;fluidez=0;
    controlaEsfinteres="SI";tipoSangre="O+";
    alergias="";vacunas="";enfermedades="";traumas="";

}

expedienteMedico::~expedienteMedico()
{
    //dtor
}

void expedienteMedico :: setDesarrollo(int sento1, int paro1, int camino1, int palabra1,int hablo1,int gateo1,int fluidez1){
    sento=sento1;
    paro=paro1;
    camino=camino1;
    hablo=hablo1;
    gateo=gateo1;
    fluidez=fluidez1;
}
void expedienteMedico::ControlEsfinteres(string controlaEsfinteres1,int esfinteres=0){
  if (controlaEsfinteres1=="SI"){
      cout<<"Ingrese la edad"<<endl;
      cin>>esfinteres;
  }
}
void expedienteMedico::setDatosMedicos(string alergias1,string vacunas1,string enfermedades1,string trauma1){
    alergias=alergias1;
    vacunas=vacunas1;
    enfermedades=enfermedades1;
    traumas=trauma1;
}

void expedienteMedico::TipodeSangre(string tipoSangre1){
     tipoSangre=tipoSangre1;
}
void expedienteMedico::ExpedienteMedico(){
    cout<<"Se sento: "<<sento<<"meses"<<endl;
    cout<<"Se paro: "<<paro<<"meses"<<endl;
    cout<<"Camino: "<<camino<<"meses"<<endl;
    cout<<"Controlo Esfinteres: "<<controlaEsfinteres<<"edad: "<<esfinteres<<endl;
    cout<<"Dijo su primera palabra: "<<palabra<<endl;
    cout<<"Hablo con fluidez: "<<fluidez<<endl;
    cout<<"Gateo: "<<gateo<<endl;
    cout<<"Alergia: "<<alergias<<endl;
    cout<<"Vacunas con las que cuenta: "<<vacunas<<endl;
    cout<<"Experiencias Traumaticas: "<<traumas;
    cout<<"Enfermedades Sufridas: "<<enfermedades<<endl;
    cout<<"Tipo de Sangre: "<<tipoSangre<<endl;

}
