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
        void modificarValores(); //permitirá modificar cualquiera de los valores

    protected:

    private:

        string nombre, color, modelo;
        bool buenEstado;
        string descripcion;
        vector <Alumno> responsable;

};

#endif // INVENTARIO_H
