#ifndef EXPEDIENTEMEDICO_H
#define EXPEDIENTEMEDICO_H
#include <string>
using namespace std;
class expedienteMedico
{
    public:
        expedienteMedico();
        virtual ~expedienteMedico();
        void setDesarrollo(int sento1, int paro1, int camino1, int palabra1,int hablo1,int gateo1,int fluidez, bool controlaEsfinteres,bool parto,string tipoSangre);
        void ControlEsfinteres(bool controlaEsfinteres1,int esfinteres1);
        void Parto(bool partonatural, string partodescripcion);
        void setDatosMedicos(string alergias1, string vacunas1, string enfermedades1, string trauma1);


        void Mostrar();


    protected:

    private:
        int sento, paro, camino, palabra, hablo, gateo, esfinteres,fluidez;
        string tipoSangre;
        bool controlaEsfinteres,partonatural;
        string alergias, vacunas, enfermedades, traumas,partodescripcion;
};

#endif // EXPEDIENTEMEDICO_H

