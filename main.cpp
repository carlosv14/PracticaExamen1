#include <iostream>
#include "Personaje.h"
#include "Mago.h"
#include "arquero.h"
#include "Guerrero.h"
#include <fstream>

using namespace std;

class lista {
public:

Personaje * inicio;

lista(){
inicio = NULL;
}
void agregar(Personaje * n){
if(inicio!=NULL){
Personaje *temp;
for(temp = inicio; temp->sig!=NULL ; temp=temp->sig);

    temp->sig=n;

}else{
    inicio = n;

}

}

void imprimir(){
if(inicio!=NULL){
for(Personaje * temp = inicio; temp!=NULL; temp = temp->sig)
{
    temp->imprimir();
    cout<<"************"<<endl;
}
}
else{
cout<<"Lista Vacia"<<endl;

}
}

void poderes()
{
for(Personaje * temp = inicio; temp!=NULL; temp = temp->sig)
{
temp->poderEspecial();

}

}


void Guardar(){
for(Personaje * temp = inicio; temp!=NULL; temp = temp->sig)
{
    temp->guardarDatos();

}

}
void mostrar(){
string str;
ifstream leer("Personajes");
leer.seekg(0);
while(leer>>str){
cout<<str<<endl;
}

}
};
int main()
{
lista l;
l.agregar(new Mago(200,70));
l.agregar(new arquero(200,50));
l.agregar(new Guerrero(150,60));
l.imprimir();
l.poderes();
cout<<"--------------------PODERES--------------------------"<<endl;
l.imprimir();
l.Guardar();
l.mostrar();
    return 0;
}
