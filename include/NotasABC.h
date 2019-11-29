#ifndef NOTASABC_H
#define NOTASABC_H
#include<notas.h>
#include <stdexcept>

class NotasABC: public notas
{
    public:
        NotasABC();
        NotasABC(int trimestre_,string nombreItem_, string comentario_,string curso,int codigo_,string nota_);
        NotasABC(string lineafile);
        NotasABC(string lineafile,int trimestre);
        bool validar(string nota);
        virtual ~NotasABC();
        void imprimirnotas();
        void setNotas();
        string getString();
    protected:

    private:
        string notan;
};

#endif // NOTASABC_H
