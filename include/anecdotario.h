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
        void suceso(string titulo);
        void describir(string detalles);
        void acontecimiento(fecha acontecimiento);
        void involucrados(int numero, string alumnos);
        void MostrarAnecdota();
    protected:

    private:
//        vector <>;
        string descripcion, titulo,alumnos;
        int implicados;
        //fecha dia;



};

#endif // ANECDOTARIO_H
