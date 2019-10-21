#ifndef TALLERES_H
#define TALLERES_H
#include "notas.h"
#include <string>
using namespace std;
class talleres
{
   public:
        talleres();
        virtual ~talleres();
        void setNombreProfe(string nombreTaller,string nombreProfesor, notas notaAlumno);
        //void LlenarListadeMateriales(string  materiales);
        void getNombreProfe(string nombreTaller,string nombreProfesor);
        //void getLlenarListadeMateriales(string materiales);
   
    protected:

    private:
        stringn nombreTaller,nombreProfesor;
        //string materiales[7];
        notas notaAlumno;
};

#endif // TALLERES_H
