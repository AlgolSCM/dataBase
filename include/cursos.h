#ifndef CURSOS_H
#define CURSOS_H
#include "notas.h"

class cursos : public notas
{
    public:
        cursos();
        virtual ~cursos();

    protected:

    private:
        char nombreCurso[40];
        char nombreProfesor[40];
        char competencias[50][200];//50 competencias de 200 caracteres cada una
        notas Alumno[50];
};

#endif // CURSOS_H
