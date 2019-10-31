#ifndef EXPEDIENTEMEDICO_H
#define EXPEDIENTEMEDICO_H
#include <string>
using namespace std;
class expedienteMedico
{
    public:
        expedienteMedico();
        virtual ~expedienteMedico();
        int  ingreseSeleccion();
        void ModificarDatos();

        void LlenarSeSento(int sento);
        void LlenarSeParo(int paro);
        void LlenarCamino(int camino);
        void LlenarPrimeraPalabra(int palabra);
        void LlenarHabloConFluidez(int hablo);
        void LlenarGateo(int gateo);
        void Esfinteres(bool controlaEsfinteres);
        void LlenarParto(bool partonatural);
        void LlenarTipodeSangre(string tipoSangre);
        void LlenarAlergias(string alergias);
        void LlenarVacunas(string vacunas);
        void LlenarEnfermedades(string enfermedades);
        void LlenarTraumas(string traumas);

        void ControlEsfinteres(bool controlaEsfinteres1,int esfinteres1);
        void TipodeParto(bool partonatural, string partodescripcion);

        void MostrarExpediente();


    protected:

    private:
        int sento, paro, camino, palabra, hablo, gateo, esfinteres,fluidez;
        string tipoSangre;
        bool controlaEsfinteres,partonatural;
        string alergias, vacunas, enfermedades, traumas,partodescripcion;
};

#endif // EXPEDIENTEMEDICO_H

