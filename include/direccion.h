#ifndef DIRECCION_H
#define DIRECCION_H
#include <string>

class direccion
{
    public:
        direccion();
        virtual ~direccion();
        void setNombreLugar(char nombre[25],char lugar[25]);
        void setNumero(int numero);
        //void escogerVivienda
        void getNombreLugar();
        void getNumero();
    protected:

    private:
        char nombre[25],lugar[25];
        int numero;
};

#endif // DIRECCION_H
