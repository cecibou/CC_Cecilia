/*7. Implemente um carro. O litros de combustível do carro armazena no máximo 50 litros de gasolina.
O carro consome 15 km/litro. Deve ser possível:
 Abastecer o carro com uma certa quantidade de gasolina;
 Mover o carro em uma determinada distância (medida em km);
 Retornar a quantidade de combustível e a distância total percorrida.
 No programa principal, crie 2 carros. Abasteça 20 litros no primeiro e 30 litros no segundo.
Desloque o primeiro em 200 km e o segundo em 400 km. Exiba na tela a distância percorrida
e o total de combustível restante para cada um.*/

#include "Carro.h"
#include <iostream>
#include <string.h>
using namespace std;

Carro::Carro( float litros, float distancia){

this->litros = litros;
this->distancia = distancia;

}

Carro::Carro(){

}

float Carro::getLitros(){

return litros;

}

float Carro::getDistancia(){

return distancia;

}

void Carro::setDistancia(float distancia){
    this->distancia=distancia;
}

void Carro::setLitros(float litros){
    this->litros=litros;
}

void Carro::abastecer(float litros){
    if(this->litros + litros<50)
    this->litros= litros;

}

void Carro::mover(float distancia){
    this -> distancia = distancia;
    float litrosGastos = distancia/15;
    this->litros -= litrosGastos;   
}