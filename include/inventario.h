#ifndef INVENTARIO_H
#define INVENTARIO_H

#include <string>
#include <iostream>
#include <vector>
#include <sstream>
#include "Alumno.h"
using namespace std;

class inventario
{
    public:
        inventario();
        virtual~inventario();
        inventario(string lineafile);
        inventario(string nombre,string color, string modelo);
        void mesas();
        void sillas();
        void estantes();
    protected:
        /**int numeromesas, numerosillas, numeroestantes;
        int mesasbuenestado,sillasbuenestado,estantesbuenestado;
        int mesasmalestado,sillasmalestado,estantesmalestado;*/
        string nombre, color, modelo;
    private:
};

#endif // INVENTARIO_H
