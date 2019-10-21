#ifndef NOTAS_H
#define NOTAS_H
#include <string>
using namespace std;
class notas
{
    public:
        notas();
        virtual ~notas();
        void NotaporItem(string nombreItem,char nota, string comentario);
        bool CantidadCaracteres(string comentario);
    protected:

    private:
        
        char nota;
        string comentario,nombreItem;
};

#endif // NOTAS_H
