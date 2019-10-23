#ifndef EXPEDIENTEMEDICO_H
#define EXPEDIENTEMEDICO_H
#include "fecha.h"
#include <string>
using namespace std;
class expedienteMedico
{
    public:
        expedienteMedico();
        virtual ~expedienteMedico();
        void setDesarrollo(int sento, int paro, int camino, int palabra,int hablo,int gateo);
        void Esfinteres(char controlaEsfinteres);
        void setDatosMedicos(string alergias, string vacunas, string enfermedades, string trauma);
        void TipodeSangre(char tipoSangre);

        void getDesarrollo();
        void getDatosMedicos();
        void getTipodeSangre();
        void getEsfinteres();


    protected:

    private:
        int sento, paro, camino, palabra, hablo, gateo, esfinteres;
        char tipoSangre[4];
        char controlaEsfinteres[3];
        string alergias, vacunas, enfermedades, traumas;
};

#endif // EXPEDIENTEMEDICO_H
