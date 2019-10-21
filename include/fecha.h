#ifndef FECHA_H
#define FECHA_H
#include <string>

class fecha
{
    public:
        fecha();
        fecha(int a,int b,int c);
        virtual ~fecha();
        int dia, mes, anio;
        /*
        Chicass, duda existencial, fecha no es solo un valor de dias meses y anios que podemos usar para calcular si pasa o no
        osea... no le veo sentido a estas funciones la verdad, cuando nos veamos les explico
        void FechaAlumno(int dia, int mes, int anio);
        void FechaMatricula(int dia, int mes, int anio);
        void FechaInventario(int dia, int mes, int anio);
        void FechaPadre(int dia, int mes, int anio);
        */
        bool setDiaMesAnio(int a=1,int b=1,int c=1);
        bool validarFecha(int a,int b,int c);
        void getTiempoDias(int a,int b,int c);//Ingresar fecha actual
        //cuantos dias transcurrieron desde la fecha sin contar hoy
        void getDMA(bool verAnio=1);// 12/12/12
        void getDMMAA(bool verAnio=1);// 12 setiembre del 2012
        bool getPasa();//ver si el pequeno pasa a 3 anitos

    protected:

    private:


};

#endif // FECHA_H
