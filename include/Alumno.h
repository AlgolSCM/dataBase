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
#include <string>

class Alumno
{
    public:
        Alumno();//Matriccula
        virtual ~Alumno();
        Alumno(string apellidos[40],string nombres[40]);

        void setNombresApellidos(string apellidos[40], string nombres[40],char genero, fecha nacimiento);
        void setDocumentos(int dni,int partidaNacimiento);
        void setTelefonoDireccion(int telefono, direccion domicilio);
        void setcodigoEstudiante(int codigo);
        void setReligion(string religion[30]);

        void getSeccion();
        void getNombres();
        void getApellidos();
        void getDocumentos();
        void getTelefonoDireccion();
        void getcodigoEstudiante();
        void getReligion();
    //protected:

    private:
        string nombres, apellidos;
        int dni, partidaNacimiento, telefonoEmergencia[2];
        long long codigoEstudiante;
        char genero;
        fecha nacimiento;
        direccion domicilio;
        string religion;
        //seccion aula;
        notas items[100];
        cursos listaCursos[10];
        talleres listaTalleres[5];
        Padres nombrePadres[2];

};

#endif // ALUMNO_H
