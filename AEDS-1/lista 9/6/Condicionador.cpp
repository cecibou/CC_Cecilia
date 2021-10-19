/*6. Implemente um condicionador de ar. O condicionador possui 10 potências diferentes. Cada
unidade da potência do condicionador diminui a temperatura do ambiente em 1.8ºC. A variação
que o condicionador consegue causar está no intervalo [0ºC - 18ºC], ou seja, zero graus de variação quando desligado e dezoito graus de variação quando ligado na potência máxima.
Através de um sensor, o condicionador é informado da temperatura externa. Dada essa temperatura
e a potência selecionada, o condicionador calcula e retorna a temperatura do ambiente.
No programa principal, crie dois condicionadores. Informe duas temperaturas externas diferentes
para cada um (ex: 25ºC e 31ºC), ajuste o segundo em potência máxima (10) e o primeiro em
potência média (5). Finalmente, exiba a temperatura resultante de cada ambiente.*/

#include "Condicionador.h"
#include <iostream>
#include <string.h>
using namespace std;

Condicionador::Condicionador( int potencia, float temperatura){

this->potencia = potencia;
this->temperatura = temperatura;

}

Condicionador::Condicionador(){

}

float Condicionador:: tempResultante(){
    return temperatura - potencia*1.8;
}

int Condicionador::getPotencia(){

return potencia;

}

float Condicionador::getTemperatura(){

return temperatura;

}

void Condicionador::setTemperatura(float temperatura){
    this->temperatura=temperatura;
}

void Condicionador::setPotencia(int potencia){
    this->potencia=potencia;
}