#include "arquero.h"

arquero::arquero(int vida, int ataque)
{
        this->vida = vida;
        this->ataque = ataque;
        this->tipo = "Arquero";
        this->super_flechas = 2;
}

void arquero:: poderEspecial(){
    super_flechas ++;

}

void arquero:: imprimir(){
    cout<<"Vida: "<< vida<<endl;
     cout<<"Ataque: "<< ataque<<endl;
      cout<<"Tipo: "<< tipo<<endl;
       cout<<"Super Flechas: "<< super_flechas<<endl;


}

void arquero::atacar(Personaje* atacado){
    atacado->vida -= this->ataque*this->super_flechas;

}

void arquero ::guardarDatos(){
ofstream escribir("Personajes",ios::app);
escribir<<this->tipo<<endl;
escribir<<this->vida<<endl;
escribir<<this->ataque<<endl;
escribir<<this->super_flechas<<endl;
escribir.close();
}

arquero::~arquero()
{
    //dtor
}
