#ifndef MATRICULA_H
#define MATRICULA_H
#include "fecha.h"

class matricula
{
    public:
        matricula();
        virtual ~matricula();
        void getDeuda();
    protected:

    private:
        int codigo, pago, deuda;
        fecha dia;
};

#endif // MATRICULA_H
