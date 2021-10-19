#include "Caminhao.h"
#include <iostream>
#include <string.h>
using namespace std;

Caminhao::Caminhao( float toneladas, float altura, float comprimento, float peso, float velocidade, float preco,int cilindros, int potencia):
              Veiculo(peso, velocidade, preco),
              Motor(cilindros,potencia){

this->toneladas = toneladas;
this->altura = altura;
this->comprimento = comprimento; 

}

Caminhao::Caminhao(){
this->toneladas = 0;
this->altura = 0; 
this->comprimento = comprimento; 
}

void Caminhao:: settoneladas(float toneladas){
    this->toneladas= toneladas;
    
}

void Caminhao:: setaltura(float altura){
    this->altura= altura;

}

void Caminhao:: setcomprimento(float comprimento){
    this->comprimento= comprimento;

}

float Caminhao::gettoneladas(){

return toneladas;

}

float Caminhao::getaltura(){

return altura;

}

float Caminhao::getcomprimento(){

return comprimento;

}

void Caminhao::print(){
    Veiculo::print();
    Motor::print();
    cout<<"\n O toneladas eh: "<< this->toneladas<<endl;
    cout<<"\n O altura eh "<<this->altura<<endl;
    
}