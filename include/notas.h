#ifndef NOTAS_H
#define NOTAS_H
#include <string>

class notas
{
    public:
        notas();
        virtual ~notas();

    protected:

    private:
        char nombreItem[200];
        char nota, comentario[350];
};

#endif // NOTAS_H
