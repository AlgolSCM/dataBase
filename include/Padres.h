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
        void setReligion(string religion);
        void setVivecon(bool viveCon);
        
        void getDatosImportantes();
        void getDocumentos();
        void getTelefonoDireccion();
        void getTrabajo();
        void getReligion();
        void getVivecon();

//    protected:

    private:
        string nombresApellidos, parentesco, ocupacion, correo, religion,gradoEstudios, centroDeTrabajo;
        bool viveCon;
        int dni,telefono;
        direccion domicilio;
        direccion trabajo;
        fecha fechaNacimiento;
};

#endif // PADRES_H
