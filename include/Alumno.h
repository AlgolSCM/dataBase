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
        Alumno(string nombres,string apellidos);

        void texto(string label,string texto[],int tam,bool prompt=1, bool numeracion=1);
        void menuSeleccionAlumno(bool inAlumno=1);
        void visualizarDatos();//visualiza la informacion y pregunta si desea modificar algo
        //void seleccionarDatoModificar();

        //SETS
        void setNombresApellidos(string apellidos, string nombres,char genero='F');
        void setNacimiento(int,int,int);
        void setDocumentos(int dni,int partidaNacimiento=0);
        void setTelefonos(int,int);//la direccion desde la clase
        void setcodigoEstudiante(int codigo);
        void setReligion(string religion);
        void setPagoDeuda(int n);//restar el saldo pendiente en n unidades

        //GETS
        string getSeccion();
        string getNombres();
        string getApellidos();
        string getApellidosNombres();
        long long getcodigoEstudiante();

    private:
        string nombres, apellidos;
        string seccion;
        int dni, partidaNacimiento;
        int telefonoEmergencia[2];
        long long codigoEstudiante;//codigo otorgado por el siagie
        char genero;//M o F
        fecha nacimiento;
        direccion domicilio;
        string religion;
        cursos listaCursos[10];//cursos y talleres
        Padres nombrePadres[2];//padre/madre/apoderado
        int codigoMatricula,deuda;
        vector <char> asistencias;
};

#endif // ALUMNO_H
