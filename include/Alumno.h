#ifndef ALUMNO_H
#define ALUMNO_H
#include <iostream>
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
using namespace std;
class Alumno
{
    public:
        static int countAlumno;
        Alumno();//Matriccula
        virtual ~Alumno();
        int codigoMatricula;
        Alumno(string lineaFichero,string nombreSeccion);
        string lineaFichero;
        expedienteMedico expediente;
        void texto(string label,string texto[],int tam,bool prompt=1, bool numeracion=1);
        void elegirVisualizarDatos(bool seleccion=1);//visualiza la informacion y pregunta si desea modificar algo
        void agregarPadre(Padres d){apoderados.push_back(d);}

        //VISUALIZAR
        void verDatos();
        void verAsistencias(bool tag=1);
        void versusNotas();

        //SETS
        string askModificarDatos();
        void setNombreSeccion(string a){nombreSeccion=a;}
        //void setExpediente(expedienteMedico a){cout<<"seteo expediente"<<endl;expediente=a;}

        //GETS
        string getSeccion();
        string getNombres();
        string getApellidos();
        string getApellidosNombres();

        void leernotas();
        string getcodigoEstudiante();


        //ADS
        void addAsistencia();
        //ToPrivate
        void addNotas(int cantidadNotas=0);

    private:
        string nombres, apellidos;
        string nombreSeccion;
        int dni;
        string codigoEstudiante;//codigo otorgado por el siagie
        int codigoEnSeccion;
        char genero;//M o F
        fecha nacimiento;
        string direccionDomicilio;
        string religion;
        int deuda;
        vector <char> asistencias;
        vector<NotasABC> notitas;
        vector<notas> notita;
        vector<Padres> apoderados;
        //VER
        void verDatosPersonales();
        void verDatosColegio();
        void verContacto();// telefono y direccion
        void verDocumentos();
        void verMatricula();
        void verOtros();
        //void versusNotas();
        //COUNT
        int contarCaracter(vector <char> lista, char caracter);
        void cargarPadre();
        //LLENAR DATOS
};

#endif // ALUMNO_H
