#ifndef EXPEDIENTEMEDICO_H
#define EXPEDIENTEMEDICO_H
#include "fecha.h"
#include <string>

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
        char alergias[150], vacunas[100], enfermedades[150], traumas[100];
};

#endif // EXPEDIENTEMEDICO_H
