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

        void menuSeleccionAlumno(bool inAlumno=1);

        //VISUALIZAR DATOS
        void elegirVisualizarDatos(bool seleccion=true);
        //GETS
        string getSeccion();
        string getNombres();
        string getApellidos();
        string getApellidosNombres();
        long long getcodigoEstudiante();

        //LLENAR DATOS
        void llenarTodosDatos();
        //SETS
        void setNombresApellidos(string apellidos, string nombres,char genero='F');
        void setNacimiento(int,int,int);
        void setDocumentos(int dni,int partidaNacimiento=0);
        void setTelefonos(int,int);//la direccion desde la clase
        void setcodigoEstudiante(int codigo);
        void setReligion(string religion);
        void setPagoDeuda(int n);//restar el saldo pendiente en n unidades
        //ASISTENCIAS
        void addAsistencia();

    private:
        expedienteMedico expediente;
        string nombres, apellidos,nombreSeccion;
        int dni, partidaNacimiento;
        int telefonoEmergencia[2];
        long long codigoEstudiante;//codigo otorgado por el siagie
        char genero;//M o F
        fecha nacimiento;
        direccion domicilio;
        string religion;
        Padres nombrePadres[2];//padre/madre/apoderado
        int codigoMatricula,deuda;
        vector <char> asistencias;


        //VER datos por bloque
        void verDatosPersonales();
        void verDatosColegio();
        void verAsistencias(bool tag=1);
        void verContacto();
        void verDocumentos();
        void verMatricula();
        void verOtros();

        void texto(string label,string texto[],int tam,bool prompt=1, bool numeracion=1);
        int contarCaracter(vector <char> asistencias,char caracter);
};

#endif // ALUMNO_H
