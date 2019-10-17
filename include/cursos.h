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
        notas listita[10];
};

#endif // CURSOS_H
