#ifndef INVENTARIO_H
#define INVENTARIO_H

#include <string>
#include <iostream>
#include <vector>
#include "Alumno.h"
using namespace std;

class inventario
{
    public:
        inventario();
        virtual~inventario();
        void mesas(int numesas, int buenestadosi, int mesasmalestado);
        void sillas(int numsillas, int buenestadome);
        void estantes(int numestantes, int buenestadoes);

    protected:

    private:
        int numeromesas, numerosillas, numeroestantes;
        int mesasbuenestado,sillasbuenestado,estantesbuenestado;
        int mesasmalestado,sillasmalestado,estantesmalestado;
        string nombre, color, modelo;



};

#endif // INVENTARIO_H
