#ifndef ANECDOTARIO_H
#define ANECDOTARIO_H
#include <vector>
#include "fecha.h"
class anecdotario
{
    public:
        anecdotario();
        virtual ~anecdotario();
        void setAnecdota(char descripcion[100],char titulo[40]);

        void getAnecdota();

    protected:

    private:
//        vector <>;
        char descripcion[100], titulo[40];
        fecha dia;

};

#endif // ANECDOTARIO_H
