#ifndef ASISTENCIA_H
#define ASISTENCIA_H
#include <string>
#include <iostream>
#include <iomanip>
#include "fecha.h"

using namespace std;
class Asistencia
{
    public:
        Asistencia();

        Asistencia(string lineaFichero);
        void coutAsistencia();
        void coutTablaHeader();
        string askmodificarAsistencia();
    protected:

    private:
        int asistencias,faltasJustificadas,faltasInjustificadas;
        int tardanzasJustificadas, tardanzasInjustificadas;
        fecha dia;
};

#endif // ASISTENCIA_H
