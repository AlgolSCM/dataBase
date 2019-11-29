#ifndef SECCION_H
#define SECCION_H

#include <string>
#include <vector>
#include "anecdotario.h"
#include "cursos.h"
#include "Alumno.h"
#include "NotasABC.h"
#include "Asistencia.h"
#include "Padres.h"
class seccion
{
    public:
        seccion();
        seccion(string nombreArchivo);

        virtual ~seccion();
        void setNombreSeccion(string);

        void menuSeleccion(bool inSeleccion=1);//mostrara el menu de las opciones

        void imprimirBusqueda(string aBuscar);
        void verListadoAlumnos();
        void ordenarListadoAlumnos();
        void addAlumno();
        void deleteAlumno(int n=0);//solicita el numero de lista del alumno
        void seleccionAlumno();
        void modificarAlumno(int n);
        string getNombre(){return nombreSeccion;}
        void verAsistencias();
        void addAsistencias();

        void verNotas();
        void addNotas();

        void iniciarArchivos();


        void verAnecdotario();
        void addAnecdotario(anecdotario anecdota);

        void modificarLinea(string lActual,string lReemplazo,string archivo);

    protected:

    private:
        string nombreSeccion,nombreArchivo;
        vector <Alumno> Listado;
        vector <Asistencia> asistencias;
        vector <notas> cursos2;
        vector<NotasABC>cursos345;
        vector <anecdotario> sucesos;
        vector <Padres> ppff;
        void texto(string label,string texto[],int tam,bool prompt=1, bool numeracion=1);
        void iniciarExpediente();
        void iniciarAsistencia();
        void iniciarPadres();
        int buscarCodigoMatricula(int j);
};

#endif // SECCION_H
//https://www.taringa.net/+hazlo_tu_mismo/separadores-ascii-para-tus-posts_12wm4j
