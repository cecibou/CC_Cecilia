
#include "CarroPasseio.h"
#include <iostream>
#include <string.h>
using namespace std;

CarroPasseio::CarroPasseio( char* modelo, char* cor, float peso, float velocidade, float preco,int cilindros, int potencia):
              Veiculo(peso, velocidade, preco),
              Motor(cilindros,potencia){

//CarroPasseio::CarroPasseio( char* modelo, char* cor){
strncpy(this->modelo, modelo, 20);//this->modelo = modelo;
strncpy(this->cor, cor, 20);//this->cor = cor;

}

void CarroPasseio:: setmodelo(char *modelo){
    strncpy(this->modelo, modelo, 20);

}

void CarroPasseio:: setcor(char *cor){
    strncpy(this->cor, cor, 20);

}

char CarroPasseio::getmodelo(){

return *modelo;

}

char CarroPasseio::getcor(){

return *cor;

}

void CarroPasseio:: printchar(){
    Veiculo::print();
    Motor::print();
    cout<<"\n O modelo eh: "<< this->modelo<<endl;
    cout<<"\n O cor eh "<<this->cor<<endl;

}
