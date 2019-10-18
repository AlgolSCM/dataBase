#include "objetoInventario.h"

objetoInventario::objetoInventario()
{
    //ctor
}

objetoInventario::~objetoInventario()
{
    //dtor
}

void setEstanteSillaMesa(int s,int m,int e){
    sillas.clear();
    mesas.clear();
    sillas.clear();
    for (int i=0;i<(s+m+e);i++)
        sillas.push_back(objetoInventario);
}
