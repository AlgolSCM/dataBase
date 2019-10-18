#ifndef OBJETOINVENTARIO_H
#define OBJETOINVENTARIO_H

#include <string>
#include <vector>
#include "Alumno.h"

using namespace std;

class objetoInventario
{
    public:
        objetoInventario();
        virtual ~objetoInventario();
        void modificarValores();//permitira modificar cualquiera de los valores

    protected:

    private:
        string nombre,color,modelo;
        bool buenEstado;
        string descripcion;
        vector <Alumno> responsable;
};

#endif // OBJETOINVENTARIO_H
