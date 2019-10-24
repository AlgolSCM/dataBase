#ifndef SECCION_H
#define SECCION_H

#include <string>
#include <vector>

#include "cursos.h"
#include "Alumno.h"

class seccion
{
    public:
        seccion();
        virtual ~seccion();
        void getNinosNinas();
        int ingreseSeleccion();


        void menuSeleccion(bool inSeleccion=1);//mostrara el menu de las opciones
        void imprimirOpcionesSeleccion(bool ver,bool anadir=1,bool eliminar=1,bool modificar=0);

        void verListadoAlumnos();
        void addAlumno();
        void deleteAlumno(int n);//solicita el numero de lista del alumno

        void verAsistencias();
        void tomarAsistencias();

        void verNotas();
        void addNotas();

        void verCursosTalleres();
        void asignarCursosTalleres();

        void verAnecdotario();
        void addAnecdotario();

        void verInventario();
        void addInventario();
        void modificarEstadoInventario(int n);//posicion n del vector inventario
        void deleteInventario();
        /**inventario();
        virtual ~inventario();
        void setEstanteSillaMesa(int sillas,int mesas,int estantes);
        void imprimirInventario();
        void imprimirArrayInventario(string nombre);
        void modificarInventario();
        //Imprime una lista numerada de sillas a manera de tabla y permite modificarla, las primeras opciones de varias a la vez
        //cambiarNumero, cambiarEstado
        //El resto permita selecionar una sola y permita cambiar modelo, estado y demas caracteristicas*/


    protected:

    private:
        //vector <Alumno> Listado;
        vector <cursos> cursillos;

        /**vector <objetoInventario> sillas;//son arrays dinamicos de diferentes objetos
        vector <objetoInventario> estantes;
        vector <objetoInventario> mesas;

        void cambiarNumeroObjeto(int s,int m,int e);//puede ser negativo o positivo
        void cambiarEstadoObjeto(int s,int m,int e,bool anadirS,bool anadirM,bool anadirE);
        //cambia n objetos en el estado del bool*/


};

#endif // SECCION_H
