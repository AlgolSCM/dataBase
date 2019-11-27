#ifndef NOTASABC_H
#define NOTASABC_H
#include<notas.h>
#include <stdexcept>

class NotasABC: public notas
{
    public:
        //NotasABC();
        NotasABC(int trimestre_,string nombreItem_, string comentario_,string curso,int codigo_,string nota_);
        NotasABC(string lineafile);
        bool validar(string nota);
        virtual ~NotasABC();
        void imprimirnotas();

    protected:

    private:
        string nota;
};

#endif // NOTASABC_H
