#ifndef EXPEDIENTEMEDICO_H
#define EXPEDIENTEMEDICO_H
#include <string>
using namespace std;
class expedienteMedico
{
    public:
        expedienteMedico();
        virtual ~expedienteMedico();
        void setDesarrollo(int sento1, int paro1, int camino1, int palabra1,int hablo1,int gateo1,int fluidez);
        void ControlEsfinteres(string controlaEsfinteres1,int esfinteres1);
        void setDatosMedicos(string alergias1, string vacunas1, string enfermedades1, string trauma1);
        void TipodeSangre(string tipoSangre1);

        void ExpedienteMedico();


    protected:

    private:
        int sento, paro, camino, palabra, hablo, gateo, esfinteres,fluidez;
        string tipoSangre;
        string controlaEsfinteres;
        string alergias, vacunas, enfermedades, traumas;
};

#endif // EXPEDIENTEMEDICO_H

