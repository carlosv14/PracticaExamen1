#ifndef PERSONAJE_H
#define PERSONAJE_H
#include <iostream>

using namespace std;

class Personaje
{
    public:
        int vida;
        int ataque;
        Personaje * sig;
        string tipo;
        Personaje();
        virtual void guardarDatos()=0;
        virtual void imprimir();
        virtual void poderEspecial()=0;


        virtual ~Personaje();
    protected:
    private:
};

#endif // PERSONAJE_H
