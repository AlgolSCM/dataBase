#ifndef SECCION_H
#define SECCION_H
#include "Alumno.h"
#include <string>
class seccion
{
    public:
        seccion();
        virtual ~seccion();
        void getNinosNinas();

        void abrirMenuSeleccion();//mostrara el menu de las opciones

        void seleccionarAlumno(int n);//abre el menu de opciones alumno segun ubicacion en la lista
        void verListadoAlumnos();
        void addAlumno();
        void deleteAlumno(int n);//solicita el numero de lista del alumno

        void verAsistencias();
        void tomarAsistencias();

        void verNotas();
        void addNotas();
        void modificarNotas(int n);//numero n del vector de notas

        void verCursosTalleres();
        void asignarCursosTalleres();
        
        void verAnecdotario();
        void addAnecdotario();
        void deleteAnecdotario(int n);
        
        void verInventario();
        void addInventario();
        void modificarEstadoInventario(int n);//posicion n del vector inventario
        void deleteInventario();
        
                
    protected:

    private:


};

#endif // SECCION_H
