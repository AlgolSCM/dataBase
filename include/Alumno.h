#ifndef ALUMNO_H
#define ALUMNO_H

#include <string>
#include <vector>
#include <sstream>

#include "fecha.h"
#include "notas.h"
#include "cursos.h"
#include "expedienteMedico.h"
#include "Padres.h"
#include "anecdotario.h"
#include "notas.h"
#include"NotasABC.h"

class Alumno
{
    public:
        static int countAlumno;
        Alumno();//Matriccula
        virtual ~Alumno();
        Alumno(string nombres,string apellidos,string sec="ninguna asignada");
        Alumno(string lineaFichero);
        string lineaFichero;

        void texto(string label,string texto[],int tam,bool prompt=1, bool numeracion=1);
        void menuSeleccionAlumno(bool inAlumno=1);
        void elegirVisualizarDatos(bool seleccion=1);//visualiza la informacion y pregunta si desea modificar algo
        //void seleccionarDatoModificar();

        //VISUALIZAR
        void verDatos();
        void verAsistencias(bool tag=1);

        //SETS
        string askModificarDatos();
        void setNombresApellidos(string apellidos, string nombres,char genero='F');
        void setNacimiento(int,int,int);
        void setDocumentos(int dni,int partidaNacimiento=0);
        void setTelefonos(int,int);//la direccion desde la clase
        void setcodigoEstudiante(int codigo);
        void setReligion(string religion);
        void setPagoDeuda(int n);//restar el saldo pendiente en n unidades
        void setExpediente(expedienteMedico a){expediente=a;}
        //GETS
        string getSeccion();
        string getNombres();
        string getApellidos();
        string getApellidosNombres();

        void leernotas(int dni);
        string getcodigoEstudiante();


        //ADS
        void addAsistencia();

    private:
        string nombres, apellidos;
        string nombreSeccion;
        int dni, partidaNacimiento;
        int telefonoEmergencia[2];
        string codigoEstudiante;//codigo otorgado por el siagie
        int codigoEnSeccion;
        char genero;//M o F
        fecha nacimiento;
        string direccionDomicilio;
        string religion;
        int codigoMatricula,deuda;
        vector <char> asistencias;
        vector<NotasABC> notitas;
        expedienteMedico expediente;
        //VER
        void verDatosPersonales();
        void verDatosColegio();
        void verContacto();// telefono y direccion
        void verDocumentos();
        void verMatricula();
        void verOtros();
        void versusNotas();
        //COUNT
        int contarCaracter(vector <char> lista, char caracter);
        //LLENAR DATOS
};

#endif // ALUMNO_H
