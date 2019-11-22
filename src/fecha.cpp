#include "fecha.h"
#include <iostream>
#include <string>

using namespace std;

fecha::fecha(){
    fecha::dia=1;
    fecha::mes=1;
    fecha::anio=1;
}
fecha::fecha(int a,int b, int c){
    fecha::setDiaMesAnio(a,b,c);
    }
void fecha :: setDiaMesAnio(int a,int b,int c){
    if (validarFecha(a,b,c)){
        fecha::dia=a;
        fecha::mes=b;
        fecha::anio=c;
        cout<<"Fecha modificada al: ";
        fecha::coutDMMAA(1);
        return;
    }
    cout<<"Fecha no valida"<<endl;
    setDiaMesAnio(1,1,1);
}
bool fecha :: validarFecha(int a,int b,int c){//verifica si la fecha es real, no verifica el anio
    if (b>=1 && b<=12){//ve si el mes es valido
        if (b==2){//verifica el valor del dia febrero se evalua tambien si el anio fue bisiesto
            if (a>=1 && a<=28)
                return 1;
            else if (a==29 && !(c%4))//si el anio fue bisiesto califica el 29
                return 1;
            return 0;
        }
        else if (a<=30 && a>=1)//evalua si el dia es valido
            return 1;
        else if (a==31){//evalua si tiene 31 dias
            if (b<=7 && (b%2))//evalua los meses hasta julio, los impares tienen 31 dias
                return 1;
            else if( !(b%2) )//si es un mes par y tiene 31 dias es valido
                return 1;
        }
    }
    return 0;
}
void fecha::coutDMA(bool verAnio){
    if (dia<10) cout<<0;
    cout<<dia<<"/";
    if (mes<10) cout<<0;
    cout<<mes;
    if (verAnio){
        cout <<"/"<<anio%100;
    }
    cout<<endl;
}
void fecha::coutDMMAA(bool verAnio){
    string meses[]={"enero","febrero","marzo","abril","mayo","junio","julio","agosto","septiembre","octubre","noviembre","diciembre"};
    cout<<dia<<" de "<<meses[(mes-1)];
    if (verAnio){
        cout<<anio;
        }
    cout<<endl;
}
bool fecha::paso2a3(){//calcula si nacio antes de esta fecha
    int a=31,b=3,c=2019-3;
    if (anio<c) return 1;//nacio antes de 2019-3=2016 tiene mas de 3 anios al menos
    else if (anio==c)
        if (mes<=b) return 1;
    return 0;
}
