#ifndef NOTASABC_H
#define NOTASABC_H
#include<notas.h>


class NotasABC: public notas
{
    public:
        NotasABC();
        NotasABC(int trimestre_,string nombreItem_, string comentario_,char nota_);
        bool validar(char nota);
        virtual ~NotasABC();

    protected:

    private:
        char nota;
};

#endif // NOTASABC_H
