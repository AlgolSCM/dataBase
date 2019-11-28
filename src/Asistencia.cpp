#include "Asistencia.h"
#include <vector>
#include <sstream>

using namespace std;
Asistencia::Asistencia()
{
    //ctor
}
Asistencia::Asistencia(string lineaFichero){
    vector <int> fields;
    stringstream ss(lineaFichero);
    for (int i; ss >> i;) {
        fields.push_back(i);
        if (ss.peek() == ',')ss.ignore();
    }
    dia=fecha(fields[0],fields[1],fields[2]);
    asistencias=fields[3];
    tardanzasJustificadas=fields[4];
    tardanzasInjustificadas=fields[5];
    faltasJustificadas=fields[6];
    faltasInjustificadas=fields[7];
}
void Asistencia::coutAsistencia(){
    dia.coutDMA(1);
    cout<<setw(0)<<""<<setw(14)<<asistencias<<setw(14)<<tardanzasJustificadas<<setw(14);
    cout<<tardanzasInjustificadas<<setw(14)<<faltasJustificadas<<setw(14)<<faltasInjustificadas<<endl;
}

void Asistencia::coutTablaHeader(){
    cout<<setw(8)<<""<<setw(14)<<"ASISTENCIAS"<<setw(14)<<internal <<"TARDANZAS"<<setw(14)<<" "<<setw(14)<<"FALTAS"<<setw(14)<<" "<<endl;
    cout<<setw(8)<<left<<"Fecha"<<right<<setw(14)<<""<<setw(14)<<"Justificada"<<setw(14)<<"Injutificada"<<setw(14)<<"Justificada"<<setw(14)<<"Injutificada"<<endl;
}
