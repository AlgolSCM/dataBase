#ifndef NOTAS_H
#define NOTAS_H
#include <string>
using namespace std;
class notas
{
    public:
        notas();
        virtual ~notas();
        notas(string nombreItem,char nota, string comentario);
        bool CantidadCaracteres(string comentario);
        void imprimirnota();
    protected:

    private:

        char nota;
        string comentario,nombreItem;
};

#endif // NOTAS_H
