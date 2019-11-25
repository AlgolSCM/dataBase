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

class Alumno
{
    public:
        static int countAlumno;
        Alumno();//Matriccula
        virtual ~Alumno();
        Alumno(string nombres,string apellidos,string sec="ninguna asignada");
        Alumno(string lineaFichero);

        void texto(string label,string texto[],int tam,bool prompt=1, bool numeracion=1);
        void menuSeleccionAlumno(bool inAlumno=1);
        void elegirVisualizarDatos(bool seleccion=1);//visualiza la informacion y pregunta si desea modificar algo
        //void seleccionarDatoModificar();

        //VISUALIZAR
        void verDatos();
        void verAsistencias(bool tag=1);

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

        //ADS
        void addAsistencia();

    private:
        string nombres, apellidos;
        string nombreSeccion;
        int dni, partidaNacimiento;
        int telefonoEmergencia[2];
        long long codigoEstudiante;//codigo otorgado por el siagie
        char genero;//M o F
        fecha nacimiento;
        string direccionDomicilio;
        string religion;
        int codigoMatricula,deuda;
        vector <char> asistencias;
        expedienteMedico expediente;
        //VER
        void verDatosPersonales();
        void verDatosColegio();
        void verContacto();// telefono y direccion
        void verDocumentos();
        void verMatricula();
        void verOtros();
        //COUNT
        int contarCaracter(vector <char> lista, char caracter);
        //LLENAR DATOS
        void llenarTodosDatos();
};

#endif // ALUMNO_H
