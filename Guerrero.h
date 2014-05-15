#ifndef GUERRERO_H
#define GUERRERO_H
#include <iostream>
#include "Personaje.h"
#include <fstream>
using namespace std;

class Guerrero : public Personaje
{
    public:
        int vida;
        int ataque;
        string tipo;
        void guardarDatos();
        void imprimir();
        void poderEspecial();
        void atacar(Personaje * atacado);
        Guerrero(int vida, int ataque);
        virtual ~Guerrero();
    protected:
    private:
};

#endif // GUERRERO_H
