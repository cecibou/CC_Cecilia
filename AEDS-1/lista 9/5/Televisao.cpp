#include <iostream>
#include <string.h> 
#include "Televisao.h"

using namespace std;

Televisao::Televisao(){
    this->volume = 0;
    this->canal = 0;
}

Televisao::Televisao(int canal, int volume){
    this-> canal = canal;
    this-> volume = volume;
}

void Televisao::aumentarVolume(){
    this->volume ++;
}

void Televisao::diminuirVolume(){
    if(this->volume >0)
        this->volume--;
}

void Televisao::aumentarCanal(){
    this->canal ++;
}

void Televisao::diminuirCanal(){
    if(this->canal>0)
        this->canal--;
}