/*2. Crie uma classe denominada Elevador para armazenar as informações de um elevador dentro
de um prédio. A classe deve armazenar o andar atual (0=térreo), total de andares no prédio,
excluindo o térreo, capacidade do elevador, e quantas pessoas estão presentes nele.
A classe deve também disponibilizar os seguintes métodos:
 inicializa: que deve receber como parâmetros: a capacidade do elevador e o total de
andares no prédio (os elevadores sempre começam no térreo e vazios);
 entra: para acrescentar uma pessoa no elevador (só deve acrescentar se ainda houver espa
ço);
 sai: para remover uma pessoa do elevador (só deve remover se houver alguém dentro dele);
 sobe: para subir um andar (não deve subir se já estiver no último andar);
 desce: para descer um andar (não deve descer se já estiver no térreo);
 get....: métodos para obter cada um dos os dados armazenados.*/

#include "Elevador.h"
#include <iostream>
#include <string.h>
using namespace std;

Elevador::Elevador( int andar, int total, int capacidade, int pessoas){

this->andar = andar;
this->total = total;
this->capacidade = capacidade;
this-> pessoas = pessoas;

}


Elevador::Elevador(){

}


void Elevador:: inicializa(int capacidade, int total){
    this -> capacidade= capacidade;
    this -> total= total; 
}

void Elevador:: sai(){
    if(this->pessoas>0)
        this-> pessoas--;
}

void Elevador:: sobe(){
    if(this->andar<total)
        this-> andar++;

}

void Elevador:: desce(){
    if(this->andar>0)
        this-> andar--;
}

void Elevador:: entra(){
    if(this->pessoas<=capacidade)
        this-> pessoas++;
}


int Elevador::getAndar(){

return andar;

}

int Elevador::getTotal(){

return total;

}

int Elevador::getCapacidade(){

return capacidade;

}

int Elevador::getPessoas(){

return pessoas;

}

