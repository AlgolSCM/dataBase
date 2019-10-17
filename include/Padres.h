#ifndef PADRES_H
#define PADRES_H

#include "fecha.h"
#include "direccion.h"

class Padres
{
    public:
        Padres();
        virtual ~Padres();

//    protected:

    private:
        char nombresApellidos[80], parentesco[11], ocupacion[30], correo[50], religion[30];
        bool viveCon;
        int dni,telefono;
        direccion domicilio;
};

#endif // PADRES_H
