#include "Mago.h"
#include <iostream>
#include<fstream>

using namespace std;

Mago::Mago(int vida, int ataque)
{
    this->vida = vida;
    this->ataque=ataque;
    this->tipo = "Mago";
    this->super_Rayo = false;
}

void Mago ::imprimir(){
    cout<<"vida: "<< this->vida<<endl;
    cout<<"ataque: "<< this->ataque<<endl;
    cout<<"tipo: "<< this->tipo<<endl;
    cout<<"super rayo"<<this->super_Rayo<<endl;
}

void Mago::poderEspecial(){
    super_Rayo =true;

}

void Mago ::atacar(Personaje * atacado){
if(super_Rayo==true){
        atacado->vida -= this->ataque*2;
    super_Rayo= false;
}else{
    atacado->vida-= this->ataque;

}

}

void Mago ::guardarDatos(){
ofstream escribir("Personajes",ios::app);
escribir<<this->tipo<<endl;
escribir<<this->vida<<endl;
escribir<<this->ataque<<endl;
escribir<<this->super_Rayo<<endl;
escribir.close();
}


Mago::~Mago()
{
    //dtor
}
