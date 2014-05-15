#include "Guerrero.h"

Guerrero::Guerrero(int vida, int ataque)
{
    this->vida = vida;
    this->ataque = ataque;
    this->tipo = "Guerrero";
}

void Guerrero ::imprimir(){
    cout<<"Vida: "<<vida<<endl;
    cout<<"Ataque: "<<ataque<<endl;
    cout<<"Tipo: "<<tipo<<endl;

}

void Guerrero ::poderEspecial(){
    this->vida = this->vida/2;
    this->ataque= this->ataque*2;

}

void Guerrero::atacar(Personaje * atacado){
    atacado->vida-=this->ataque;

}

void Guerrero ::guardarDatos(){
ofstream escribir("Personajes",ios::app);
escribir<<this->tipo<<endl;
escribir<<this->vida<<endl;
escribir<<this->ataque<<endl;
escribir.close();
}

Guerrero::~Guerrero()
{
    //dtor
}
