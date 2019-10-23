
#include "expedienteMedico.h"
#include<iostream>
using namespace std;
expedienteMedico::expedienteMedico()
{
    sento=0;paro=0;camino=0;palabra=0;hablo=0;gateo=0;esfinteres=0;fluidez=0;
    controlaEsfinteres=true;partonatural=true;tipoSangre="O+";
    alergias="";vacunas="";enfermedades="";traumas="";partodescripcion="";

}

expedienteMedico::~expedienteMedico()
{
    //dtor
}

void expedienteMedico :: setDesarrollo(int sento, int paro, int camino, int palabra,int hablo,int gateo,int fluidez, bool controlaEsfinteres,bool partonatural,string tipoSangre){
    this -> sento=sento;
    this -> paro=paro;
    this -> camino=camino;
    this -> hablo=hablo;
    this -> gateo=gateo;
    this -> fluidez=fluidez;
    this -> controlaEsfinteres=controlaEsfinteres;
    this -> partonatural=partonatural;
    this -> tipoSangre=tipoSangre;
}
void expedienteMedico::ControlEsfinteres(bool controlaEsfinteres,int esfinteres=0){
  if (controlaEsfinteres==true){
      cout<<"Ingrese la edad"<<endl;
      cin>>esfinteres;
  }
}
void expedienteMedico::setDatosMedicos(string alergias,string vacunas,string enfermedades,string trauma){
    this -> alergias=alergias;
    this -> vacunas=vacunas;
    this -> enfermedades=enfermedades;
    this -> traumas=traumas;
}

void expedienteMedico::Parto(bool parto,string partodescripcion){
    if (parto==false){
      cout<<"Ingrese la complicación"<<endl;
      cin>>partodescripcion;
    }
}
void expedienteMedico::Mostrar(){

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
    cout<<"Hablo con fluidez: "<<fluidez<<endl;
    cout<<"Gateo: "<<gateo<<endl;
    cout<<"Alergia: "<<alergias<<endl;
    cout<<"Vacunas con las que cuenta: "<<vacunas<<endl;
    cout<<"Experiencias Traumaticas: "<<traumas;
    cout<<"Enfermedades Sufridas: "<<enfermedades<<endl;
    cout<<"Tipo de Sangre: "<<tipoSangre<<endl;

}
