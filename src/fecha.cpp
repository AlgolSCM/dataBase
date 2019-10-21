#include "fecha.h"
#include <iostream>

fecha::fecha(){
    std::cout<< "Fecha creada por defecto 25/08/11"<<std::endl;
    fecha::dia=25;
    fecha::mes=8;
    fecha::anio=11;
}
fecha::~fecha(){
    //dtor
}

bool setDiaMesAnio(int a,int b,int c){
    if (validarFecha(a,b,c)){
        fecha::dia=a;
        fecha::mes=b;
        fecha::anio=c;
        return 1;
    }
    return 0;//retorna si se modifico la fecha
}


bool validarFecha(int a,int b,int c){
    if (mes>=1&&mes<=12){//ve si el mes es valido
        if (mes==2){//verifica el valor del dia febrero se evalua tambien si el anio fue bisiesto
            if (dia>=1&&dia>=28)
                return 1;
            else if (dia==29&&!(c%4))//si el anio fue bisiesto califica el 29
                return 1;
        }
        else if (dia<=30&&dia>=1)//evalua si el dia es valido
            return 1;
        else if (mes<=7&&!(mes%2)&&dia=31){//evalua los meses hasta julio, los impares tienen 31 dias
            return 1;
        else if (mes%2&&)
     }
    }
}
