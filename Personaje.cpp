#include "Personaje.h"

Personaje::Personaje()
{
      this->sig =NULL;
}

Personaje::~Personaje()
{
    //dtor
}

void Personaje :: imprimir(){
cout<<"Vida: "<< this->vida<<endl;
cout<<"Ataque: "<< this->ataque<<endl;
cout<<"Tipo: "<< this->tipo<<endl;
}
