/*4. Denir uma classe que represente um círculo. Esta classe deve possuir métodos
Privados para:
 calcular a área do círculo;
 calcular a distância entre os centros de 2 círculos;
 calcular a circunferência do círculo.
E métodos Públicos para:
 denir o raio do círculo, dado um número real;
 aumentar o raio do círculo, dado um percentual de aumento;
1
 definir o centro do círculo, dada uma posição (X,Y);
 imprimir o valor do raio;
 imprimir o centro do círculo.
 imprimir a área do círculo.
Criar um programa principal para testar a classe.*/

#include <iostream>
#include <string.h> 
#include "Circulo.h"
#include <math.h>


using namespace std;

Circulo::Circulo(){
    this->raio = 0;
    this->centro[0] = 0;//x = 0
    this->centro[1] = 0;//y = 0
}

Circulo::Circulo(float raio, int x, int y){
    this-> raio = raio;
    this-> centro[0] = x;
    this-> centro[1] = y;

}

float Circulo::calcularArea(){
    return (3.14*(raio*raio));
}

float Circulo::calcularCircuferencia(){
     return (2*3.14*(raio));
}

float Circulo::calcularDistancia(int x2, int y2){
    return pow(((centro[0] - x2)*(centro[0] - x2)) + ((centro[1] - y2)*(centro[1] - y2)), 1/2);
}

void Circulo::setRaio(int r){

}
        
void Circulo::aumentarRaio(float p){
    this-> raio = raio*(1+(p/100));
}
        
void Circulo::setCentro(int x, int y){

}

float Circulo::getRaio(){
    return raio;
}

void Circulo::getCentro(int &x, int &y){
    x= centro[0];
    y= centro[1];
}

float Circulo::getArea(){
    return calcularArea();
}

float Circulo::getDistancia(int x2, int y2){
    return calcularDistancia(x2,y2);
}

float Circulo::getCircuferencia(){
    return calcularCircuferencia();
}