#ifndef FECHA_H
#define FECHA_H
#include <string>

class fecha
{
    public:
        fecha();
        virtual ~fecha();
       void FechaAlumno(int dia, int mes, int anio);
       void FechaMatricula(int dia, int mes, int anio);
       void FechaInventario(int dia, int mes, int anio);
       void FechaPadre(int dia, int mes, int anio);

    protected:

    private:
        int dia, mes, anio;
};

#endif // FECHA_H
