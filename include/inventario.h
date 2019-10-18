#ifndef INVENTARIO_H
#define INVENTARIO_H


class inventario
{
    public:
        inventario();
        virtual ~inventario();
        void setEstanteSillaMesa(int sillas,int mesas,int estantes);
        void EstadoDelMaterial(bool estado,char descripcion);
        void Caracteristicas(char color,char modelo);
    protected:

    private:
        int sillas, estantes, mesas;
        char descripcion[40];
        bool estado;
        char color[10], modelo[10];
};

#endif // INVENTARIO_H
