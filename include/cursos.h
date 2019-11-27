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

};

#endif // CURSOS_H
