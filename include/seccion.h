#ifndef SECCION_H
#define SECCION_H
#include "Alumno.h"

class seccion
{
    public:
        seccion();
        virtual ~seccion();
        void getNinosNinas();
    protected:

    private:
        char exploradoras[20], creativas[20],reflexivas[20];


};

#endif // SECCION_H
