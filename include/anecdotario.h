#ifndef ANECDOTARIO_H
#define ANECDOTARIO_H
#include <vector>
#include "fecha.h"
#include <string>
using namespace std;


class anecdotario
{
    public:
        anecdotario();
        virtual ~anecdotario();
        anecdotario(int implicadosnumero,string suceso, string descripcionde, fecha acontecimiento);
        void anecdotario::suceso(string titulo);
        void anecdotario::descripcion(string detalles);
        void anecdotario::acontecimiento(fecha acontecimiento);
        void anecdotario::implicados(int numero, string alumnos);
        void anecdotario::MostrarAnecdota;
    protected:

    private:
//        vector <>;
        string descripcion, titulo;
        int implicados;
        fecha dia;



};

#endif // ANECDOTARIO_H
