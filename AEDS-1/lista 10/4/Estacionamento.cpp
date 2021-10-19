#include "Estacionamento.h"
#include <iostream>
#include <string.h>
using namespace std;

Estacionamento::Estacionamento( string placa, string modelo, Tempo* entrada, Tempo* saida){

this->placa = placa;
this->modelo = modelo; 
this->entrada = entrada;
this->saida = saida; 

}

Estacionamento::Estacionamento(){
this->placa = "";
this->modelo = ""; 
this->entrada = 0;
this->saida = 0;
}

void Estacionamento:: setplaca(string placa){
    this->placa= placa;
    
}

void Estacionamento:: setmodelo(string modelo){
    this->modelo= modelo;
    

}

void Estacionamento:: setentrada(Tempo *entrada){
    this->entrada= entrada;
    
}

void Estacionamento:: setsaida(Tempo *saida){
    this->saida= saida;
    

}

string Estacionamento::getplaca(){

return placa;

}

string Estacionamento::getmodelo(){

return modelo;

}

Tempo Estacionamento::getentrada(){

return *entrada;

}

Tempo Estacionamento::getsaida(){

return *saida;

}

void Estacionamento::print(){
    cout<<"\n O placa eh: "<< this->placa<<endl;
    cout<<"\n O modelo eh: "<<this->modelo<<endl;    
}

float Estacionamento::calcularTempo(){
    cout<<"\n O entrada eh: "<< entrada->getHora()<<endl;
    cout<<"\n O saida eh \n"<<saida->getHora()<<endl;

    return (saida->getHora() - entrada->getHora())*1.50;
}