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
        anecdotario(int implicados,string titulo, string descripcion, string alumnos, string aula, fecha dia);
        //void MostrarAnecdota();
    protected:
    private:
        string descripcion, titulo,alumnos,aula;
        int implicados;
        fecha dia;
};

#endif // ANECDOTARIO_H
