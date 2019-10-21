#include "matricula.h"

matricula::matricula()
{
    matricula :: pago=0;
    matricula :: deuda=150;
    
}

matricula::~matricula()
{
    //dtor
}

void matricula :: getDeuda(int pago, int deuda){
 if (pago<150){
    deuda=150-pago;
    cout<<"Su deuda es de "<<deuda<<endl;
}
 else 
   deuda=0;
   cout<<"No tiene deuda"<<endl;
}
