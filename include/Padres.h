#ifndef PADRES_H
#define PADRES_H

#include "fecha.h"
#include "direccion.h"
#include <string>

class Padres
{
    public:
        Padres();
        virtual ~Padres();

//    protected:

    private:
        char nombresApellidos[80], parentesco[11], ocupacion[30], correo[50], religion[30],gradoEstudios[25], centroDeTrabajo[40];
        bool viveCon;
        int dni,telefono;
        direccion domicilio;
        direccion trabajo;
};

#endif // PADRES_H
