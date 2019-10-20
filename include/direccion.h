#ifndef DIRECCION_H
#define DIRECCION_H
#include <string>
using namespace std;
class direccion
{
    public:
        direccion();
        virtual ~direccion();
        void setNombreLugar(string nombre,string lugar);
        void setNumero(int numero);
        //void escogerVivienda
        void getNombreLugar();
        void getNumero();
    protected:

    private:
        string nombre,lugar;
        int numero;
};

#endif // DIRECCION_H
