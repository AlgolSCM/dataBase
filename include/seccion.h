#ifndef SECCION_H
#define SECCION_H

#include <string>
#include <vector>
#include "anecdotario.h"
#include "cursos.h"
#include "Alumno.h"

class seccion
{
    public:
        seccion();
        seccion(char nombreArchivo[],int cantidadAlumnos);

        virtual ~seccion();
        void setNombreSeccion(string);

        void menuSeleccion(bool inSeleccion=1);//mostrara el menu de las opciones

        void imprimirBusqueda(string aBuscar);
        void verListadoAlumnos();
        void ordenarListadoAlumnos();
        void addAlumno(string nombre="",string apellido="");
        void deleteAlumno(int n=0);//solicita el numero de lista del alumno
        void seleccionAlumno();

        void verAsistencias();
        void tomarAsistencias();

        void verNotas();
        void addNotas();

        void verCursosTalleres();
        void asignarCursosTalleres();

        void verAnecdotario();
        void addAnecdotario(anecdotario anecdota);

        void modificarLinea(string lActual,string lReemplazo,string archivo);

    protected:

    private:
        string nombreSeccion;
        vector <Alumno> Listado;
        vector <cursos> cursosTalleres;
        vector <anecdotario> sucesos;

        void texto(string label,string texto[],int tam,bool prompt=1, bool numeracion=1);

};

#endif // SECCION_H
//https://www.taringa.net/+hazlo_tu_mismo/separadores-ascii-para-tus-posts_12wm4j
