#ifndef CURSOS_H
#define CURSOS_H
#include "notas.h"
#include <string>
using namespace std;
class cursos : public notas
{
    public:
        cursos();
        virtual ~cursos();
        void setCursoProfeComp(string nombreCurso,string nombreProfesor,char competencias);

        void getCursoProfeComp();
    protected:

    private:
        string  nombreCurso,nombreProfesor;
        char competencias[50][200];//50 competencias de 200 caracteres cada una
        notas Alumno[50];
};

#endif // CURSOS_H
