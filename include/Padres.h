#ifndef PADRES_H
#define PADRES_H

#include "fecha.h"
#include <string>
using namespace std;
class Padres
{
    public:
        Padres();
        Padres(string lineFichero);
        virtual ~Padres();
        void setNombresApellidos(string nombresApellidos,string parentesco);
        void setDocumentos(int dni);
        void setTelefonoDireccion(int telefono, string direccionDomicilio,string correo);
        void setTrabajo(string direccionTrabajo,string ocupacion,string centroDeTrabajo, string gradoEstudios);
        void setReligion(string religion);
        void setVivecon(bool viveCon);

        int ingresesuSeleccion();
        void getDatosdeContacto();
        void MenuDatosPadres();
        void DatosPadres();

//    protected:

    private:
        string nombresApellidos, parentesco, ocupacion, correo, religion,gradoEstudios, centroDeTrabajo;
        bool viveCon;
        int dni,telefono;
        string direccionDomicilio;
        string direccionTrabajo;
        fecha fechaNacimiento;
};

#endif // PADRES_H
