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
        void setAnecdota(string descripcion,string titulo);
        void getAnecdota();

    protected:

    private:
//        vector <>;
        string descripcion, titulo;
        int implicados;
        fecha dia;



};

#endif // ANECDOTARIO_H
