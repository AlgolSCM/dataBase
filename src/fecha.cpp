#include "fecha.h"
#include <iostream>

using namespace std;

fecha::fecha(){
    cout<< "Fecha creada por defecto 25/08/11"<<endl;
    fecha::dia=25;
    fecha::mes=8;
    fecha::anio=11;
}
fecha::~fecha(){
    //dtor
}


bool fecha :: setDiaMesAnio(int a,int b,int c){
    if (validarFecha(a,b,c)){
        fecha::dia=a;
        fecha::mes=b;
        fecha::anio=c;
        return 1;
    }
    return 0;//retorna si se modifico la fecha
}


bool fecha :: validarFecha(int a,int b,int c){//verifica si la fecha es real, no verifica el anio
    if (fecha::mes>=1&&fecha::mes<=12){//ve si el mes es valido
        if (fecha::mes==2){//verifica el valor del dia febrero se evalua tambien si el anio fue bisiesto
            if (fecha::dia>=1&&fecha::dia>=28)
                return 1;
            else if (fecha::dia==29&&!(fecha::anio%4))//si el anio fue bisiesto califica el 29
                return 1;
        }
        else if (fecha::dia<=30&&fecha::dia>=1)//evalua si el dia es valido
            return 1;
        else if (fecha::dia==31){//evalua si tiene 31 dias
            if (fecha::mes<=7&&(fecha::mes%2))//evalua los meses hasta julio, los impares tienen 31 dias
                return 1;
            else if(!(fecha::mes%2))//si es un mes par y tiene 31 dias es valido
                return 1;
        }
    }
    return 0;
}

void coutDMA(bool verAnio=1){
    cout<<fecha::dia<<"/"<<fecha::mes;
    if (verAnio)
        cout <<"/"<<fecha::anio;
    cout<<endl;
}
