#ifndef MATRICULA_H
#define MATRICULA_H
#include "fecha.h"
#include <string>

class matricula
{
    public:
        matricula();
        virtual ~matricula();
        void getDeuda(int pago,int deuda);
    protected:

    private:
        int  pago, deuda;
        fecha dia;
};

#endif // MATRICULA_H
