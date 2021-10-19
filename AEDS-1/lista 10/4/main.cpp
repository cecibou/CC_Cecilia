/*4. Crie uma classe Estacionamento para armazenar dados de um estacionamento. Os atributos
devem representar a placa e modelo do carro além da hora de entrada e saída do estacionamento.
Utilize dois objetos da classe Tempo criada no exercício anterior. Crie métodos para:
a. Funcionar como getter e setter;
b. Inicializar os dados com vazio ou zero;
c. Imprimir os dados de um carro estacionado;
d. Calcular e retornar o valor a ser pago pelo carro estacionado. Considere o preço de R$1,50
por hora. Utilize o método da classe Tempo.
Crie um vetor de 5 posições e preencha-o para testar sua classe.*/

#include <iostream>
#include "Tempo.cpp"
#include "Tempo.h"
#include "Estacionamento.cpp"
#include "Estacionamento.h"
#include <string.h>

using namespace std;


int  main(){
Tempo *tentrada = new Tempo(0); 
Tempo *tsaida = new Tempo(0);   
Estacionamento *e1 = new Estacionamento("ABC-1234 ","Sport",tentrada,tentrada);

e1->print();
tsaida->setHora(3);
e1->setsaida(tsaida);
cout<<"Valor a pagar: "<<e1->calcularTempo()<<endl;



return  0;
}