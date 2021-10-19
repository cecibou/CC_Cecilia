//1. Crie uma classe para representar uma pessoa, com os atributos privados de nome, idade e altura.

//Crie os métodos públicos necessários para sets e gets e também um métodos para imprimir os

//dados de uma pessoa.



#include <iostream>
#include "Pessoa.cpp"
#include "Pessoa.h"

using namespace std;




int main (){

    char nome[50] = "arthur";

    char data[10] = "2021";

    Pessoa *p1 = new Pessoa(nome,data,1.90);
    p1->printDados();

    p1->setAltura(1.60);
    p1->printDados();

    p1->setAltura(1.80);
    float alturap1 = p1->getAltura();
    cout << alturap1; 
    return 0;

}
