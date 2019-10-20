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

    protected:

    private:
        int sento, paro, camino, palabra, hablo, gateo, esfinteres;
        char tipoSangre[4];
        bool controlaEsfinteres;
        string alergias, vacunas], enfermedades, traumas;
};

#endif // EXPEDIENTEMEDICO_H
