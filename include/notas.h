#ifndef NOTAS_H
#define NOTAS_H
#include <string>
#include <stdexcept>
#include <fstream>
using namespace std;
class notas
{
    public:
        notas();
        virtual ~notas();
        notas(int trimestre,string nombreItem, string comentario, string curso,int codigo);
        notas(string lineafile);
        notas(string lineafile,int trimestre);
        bool CantidadCaracteres(string comentario);
        virtual void imprimirnota();
        virtual void setNotas();
        virtual string getString();
    protected:
        string comentario,nombreItem,curso;
        int trimestre,codigo;
    private:



};

#endif // NOTAS_H
