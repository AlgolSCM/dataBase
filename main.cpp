#include <iostream>
#include "fecha.h"
#include "Alumno.h"
#include <string>

using namespace std;

bool acceder(string a="",string b=""){
    string usuario="GMariotti",contra="cuarteto";
    cout << "Ingrese su nombre de usuario: " << endl;
    cin>>a;
    cout << "Ingrese su contrasena: " << endl;
    cin>>b;
    return (a==usuario&&b==contra);
}


int main()
{
    if (acceder())
        cout << "Bienvenido al Sistema del jardin Gaspare Mariotti" << endl;

    return 0;
}
