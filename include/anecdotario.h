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
        void setAnecdota(string descripcion,string titulo);

        void getAnecdota();

    protected:

    private:
//        vector <>;
        string descripcion, titulo;
        fecha dia;

};

#endif // ANECDOTARIO_H
