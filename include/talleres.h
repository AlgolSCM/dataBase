#ifndef TALLERES_H
#define TALLERES_H
#include "notas.h"

class talleres
{
    public:
        talleres();
        virtual ~talleres();
        void setNombreProfe(char nombreTaller,char nombreProfesor);

    protected:

    private:
        char nombreTaller[40],nombreProfesor[40];
        //lista de materiales que se necesita para cada taller, vector de char.
        notas notaAlumno;
};

#endif // TALLERES_H
