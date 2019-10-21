#ifndef NOTAS_H
#define NOTAS_H
#include <string>
using namespace std;
class notas
{
    public:
        notas();
        virtual ~notas();
        void NotaporItem(char nombreItem,char nota, string comentario);
        bool CantidadCaracteres(string comentario);
    protected:

    private:
        char nombreItem[200];
        char nota;
        string comentario;
};

#endif // NOTAS_H
