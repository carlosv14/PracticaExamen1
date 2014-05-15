#ifndef ARQUERO_H
#define ARQUERO_H
#include <iostream>
#include "Personaje.h"
#include<fstream>
using namespace std;

class arquero : public Personaje
{
    public:
        int vida;
        int ataque;
        string tipo;
        int super_flechas;
        void guardarDatos();
        void imprimir();
        void poderEspecial();
        void atacar(Personaje * atacado);
        arquero(int vida, int ataque);
        virtual ~arquero();
    protected:
    private:
};

#endif // ARQUERO_H
