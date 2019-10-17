#ifndef ALUMNO_H
#define ALUMNO_H

#include "fecha.h"
#include "direccion.h"
#include "seccion.h"
#include "notas.h"
#include "cursos.h"
#include "talleres.h"
#include "expedienteMedico.h"
#include "Padres.h"
#include "anecdotario.h"

class Alumno
{
    public:
        Alumno();//Matriccula
        virtual ~Alumno();
        Alumno(char apellidos[40],char nombres[40]);

        void setNombresApellidos(char apellidos[40], char nombres[40],char genero);
        void setDocumentos(int dni,int partidaNacimiento);
        void setTelefonoDireccion(int telefono, direccion domicilio);
        void setcodigoEstudiante(int codigo);
        void setReligion(char religion[30]);

        void getSeccion();
        void getNombres();
        void getApellidos();
        void getDocumentos();
        void getTelefonoDireccion();
        void getcodigoEstudiante();
        void getReligion();
    //protected:

    private:
        char nombres[40], apellidos[40];
        int dni, partidaNacimiento, telefonoEmergencia[2];
        long long codigoEstudiante;
        char genero;
        fecha nacimiento;
        direccion domicilio;
        char religion[30];
        seccion aula;
        notas items[100];
        cursos listaCursos[10];
        talleres listaTalleres[5];
        Padres nombrePadres[2];

};

#endif // ALUMNO_H
