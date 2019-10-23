#ifndef ALUMNO_H
#define ALUMNO_H

#include <string>
#include <vector>

#include "fecha.h"
#include "direccion.h"
#include "notas.h"
#include "cursos.h"
#include "expedienteMedico.h"
#include "Padres.h"
#include "anecdotario.h"

class Alumno
{
    public:
        Alumno();//Matriccula
        virtual ~Alumno();
        Alumno(string apellidos,string nombres);

        void visualizarInformacion();//visualiza la informacion y pregunta si desea modificar algo
        void seleccionarDatoModificar();

        void setNombresApellidos(string apellidos, string nombres,char genero, fecha nacimiento);
        void setDocumentos(int dni,int partidaNacimiento);
        void setTelefonoDireccion(int telefono, direccion domicilio);
        void setcodigoEstudiante(int codigo);
        void setReligion(string religion);
        void setPagoDeuda(int n);//restar el saldo pendiente en n unidades

        void getSeccion();
        void getNombres();
        void getApellidos();
        void getDNI();
        void getPartida();
        void getTelefono();
        void getDireccion();
        void getcodigoEstudiante();
        void getReligion();
        void getNotas();

    private:
        string nombre, apellido;
        int dni, partidaNacimiento, telefonoEmergencia[2];
        long long codigoEstudiante;//codigo otorgado por el siagie
        char genero;//M o F
        fecha nacimiento;
        direccion domicilio;
        string religion;
        cursos listaCursos[10];//cursos y talleres
        Padres nombrePadres[2];//padre/madre/apoderado
        int codigoMatricula,saldoPendiente=150;
        vector <char> asistencias;
};

#endif // ALUMNO_H
