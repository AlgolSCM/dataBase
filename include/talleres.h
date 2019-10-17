#ifndef TALLERES_H
#define TALLERES_H
#include "notas.h"

class talleres
{
    public:
        talleres();
        virtual ~talleres();

    protected:

    private:
        char nombreTaller[40];
        char nombreProfesor[40];
        notas notaAlumno;
};

#endif // TALLERES_H
