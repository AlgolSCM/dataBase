#ifndef ANECDOTARIO_H
#define ANECDOTARIO_H
#include <vector>
#include "fecha.h"
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;


class anecdotario
{
    public:
        anecdotario();
        virtual ~anecdotario();
        anecdotario(int implicados,string titulo, string descripcion, string aula, fecha dia);
        anecdotario(string lineafile);
        void anecdota();
        string askModificarAnecdotario();
        void imprimirAnecdotario();
        //void MostrarAnecdota();
    protected:
    private:
        string descripcion, titulo, aula;
        int implicados;
        fecha dia;
};

#endif // ANECDOTARIO_H
