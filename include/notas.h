#ifndef NOTAS_H
#define NOTAS_H
#include <string>
using namespace std;
class notas
{
    public:
        notas();
        virtual ~notas();
        notas(int trimestre,string nombreItem, string comentario);
        bool CantidadCaracteres(string comentario);
        void imprimirnota();
    protected:
        string comentario,nombreItem;
        int trimestre;
    private:

        

};

#endif // NOTAS_H
