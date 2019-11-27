#ifndef NOTAS_H
#define NOTAS_H
#include <string>
#include <stdexcept>
using namespace std;
class notas
{
    public:
        notas();
        virtual ~notas();
        notas(int trimestre,string nombreItem, string comentario, string curso,int codigo);
        notas(string lineafile);
        bool CantidadCaracteres(string comentario);
        virtual void imprimirnota();
    protected:
        string comentario,nombreItem,curso;
        int trimestre,codigo;
    private:



};

#endif // NOTAS_H
