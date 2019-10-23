#ifndef FECHA_H
#define FECHA_H

class fecha
{
    public:
        fecha();
        fecha(int a,int b,int c);//constructor
        void setDiaMesAnio(int a,int b,int c);//cambiar la fecha
        bool validarFecha(int a,int b,int c);//Ve si la fecha existe
        void coutDMA(bool verAnio);//En formato 12/12/12
        void coutDMMAA(bool verAnio);//En formato 12 setiembre del 2012
        bool paso2a3();//ver si el pequeno pasa de 2 a 3 anitos

    protected:

    private:
        int dia, mes, anio;
};

#endif // FECHA_H
