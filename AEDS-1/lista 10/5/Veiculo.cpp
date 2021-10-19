
#include "Veiculo.h"
#include <iostream>
#include <string.h>
using namespace std;

Veiculo::Veiculo( float peso, float velocidade, float preco){

this->peso= peso;
this->velocidade= velocidade;
this-> preco = preco;

}

Veiculo::Veiculo(){
this->peso= 0;
this->velocidade= 0;
this-> preco =0;
}

void Veiculo:: setpeso(float peso){
    this->peso= peso;
    
}

void Veiculo:: setvelocidade(float velocidade){
    this->velocidade= velocidade;
    

}

void Veiculo:: setpreco(float preco){
    this-> preco = preco;
}

float Veiculo::getpeso(){

return peso;

}

float Veiculo::getvelocidade(){

return velocidade;

}

float Veiculo::getpreco(){

return preco;

}

void Veiculo::print(){
    cout<<"\n O peso eh: "<< this->peso<<endl;
    cout<<"\n O velocidade eh "<<this->velocidade<<endl;
    cout<<"\n O peço eh: "<< this->preco<<endl;
    
}