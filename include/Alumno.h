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
        Alumno(string apellidos,string nombres);

        void setNombresApellidos(string apellidos, string nombres,char genero, fecha nacimiento);
        void setDocumentos(int dni,int partidaNacimiento);
        void setTelefonoDireccion(int telefono, direccion domicilio);
        void setcodigoEstudiante(int codigo);
        void setReligion(string religion);

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
    //protected:

    private:
        string nombre, apellido;
        int dni, partidaNacimiento, telefonoEmergencia[2];
        long long codigoEstudiante;
        char genero;
        fecha nacimiento;
        direccion domicilio;
        string religion;
        notas items[100];
        cursos listaCursos[10];
        talleres listaTalleres[5];
        Padres nombrePadres[2];
        vector <notas> calificaciones(0);
        matricula::matricula()
        {
            matricula :: pago=0;
            matricula :: deuda=150;

        }

        matricula::~matricula()
        {
            //dtor
        }

        void matricula :: getDeuda(int pago, int deuda){
        if (pago<150){
            deuda=150-pago;
            cout<<"Su deuda es de "<<deuda<<endl;
        }
        else
        deuda=0;
        cout<<"No tiene deuda"<<endl;
        }


};

#endif // ALUMNO_H
