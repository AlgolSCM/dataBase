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
        notas(int trimestre,string nombreItem, string comentario);
        bool CantidadCaracteres(string comentario);
        virtual void imprimirnota();
    protected:
        string comentario,nombreItem;
        int trimestre;
    private:



};

#endif // NOTAS_H
