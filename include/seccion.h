#ifndef SECCION_H
#define SECCION_H
#include "Alumno.h"
#include <string>
class seccion
{
    public:
        seccion();
        virtual ~seccion();
        void asignarSeccion(fecha fechaNacimiento);
        void llenarExploradoras(char *exploradoras2);
        void llenaCreativas(char *creativas3);
        void llenarConstructivas(char *constructivas4);
        void llenarReflexivas(char *reflexivas5);
        void getNinosNinas();
    protected:

    private:
        char exploradoras2[20],creativas3[20],constructivas4[20],reflexivas5[20];


};

#endif // SECCION_H
