#ifndef TALLERES_H
#define TALLERES_H
#include "notas.h"
#include <string>

class talleres
{
   public:
        talleres();
        virtual ~talleres();
        void setNombreProfe(char nombreTaller,char nombreProfesor);
        void LlenarListadeMateriales(std :: string materiales);
        void getNombreProfe(char nombreTaller,char nombreProfesor);

    protected:

    private:
        char nombreTaller[40],nombreProfesor[40];
        std :: string materiales[7];
        notas notaAlumno;
};

#endif // TALLERES_H
