#include "Tempo.h"
#include <iostream>
#include <string.h>

using namespace std;

Tempo::Tempo( int hora){

this-> hora = hora;

}

Tempo::Tempo(){
this-> hora = hora=0;
}

void Tempo:: setHora(int hora){
    this -> hora= hora;

}

int Tempo::getHora(){
    return this -> hora;

}

 void Tempo::print(){
    cout<<"\n O hora eh: "<< this->hora<<endl;

}