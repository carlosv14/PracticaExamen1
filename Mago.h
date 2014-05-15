#ifndef MAGO_H
#define MAGO_H
#include "Personaje.h"
#include <iostream>

using namespace std;
class Mago : public Personaje
{
    public:
        int vida;
        int ataque;
        string tipo;
        bool super_Rayo;
        Mago(int vida, int ataque);
        void guardarDatos();
        void imprimir();
        void poderEspecial();
        void atacar(Personaje * atacado);

        virtual ~Mago();
    protected:
    private:
};

#endif // MAGO_H
