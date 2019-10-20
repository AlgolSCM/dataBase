#ifndef PADRES_H
#define PADRES_H

#include "fecha.h"
#include "direccion.h"
#include <string>
using namespace std;
class Padres
{
    public:
        Padres();
        virtual ~Padres();
        void setNombresApellidos(string nombresApellidos,string parentesco, fecha fechaNacimiento);
        void setDocumentos(int dni);
        void setTelefonoDireccion(int telefono, direccion domicilio, direccion trabajo);
        void setTrabsjo(string ocupacion,string centroDeTrabajo, string gradoEstudios);
        void setReligion(string religion[30]);


//    protected:

    private:
        string nombresApellidos[80], parentesco[11], ocupacion[30], correo[50], religion[30],gradoEstudios[25], centroDeTrabajo[40];
        bool viveCon;
        int dni,telefono;
        direccion domicilio;
        direccion trabajo;
        fecha fechaNacimiento;
};

#endif // PADRES_H
