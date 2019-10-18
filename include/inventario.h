#ifndef INVENTARIO_H
#define INVENTARIO_H


class inventario
{
    public:
        inventario();
        virtual ~inventario();
        void setEstanteSillaMesa(int sillas,int mesas,int estantes);
        //bool EstadoDelMaterial(bool estado);
        void Caracteristicas(char color,char modelo);
    protected:

    private:
        int sillas, estantes, mesas;
        bool estado;
        char color[10], modelo[10];
};

#endif // INVENTARIO_H
