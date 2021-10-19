/*2. Crie uma classe Empregado que inclua os atributos nome (string), sobrenome (string) e salário
mensal (número real). A classe deve incluir construtores para cada um dos atributos para evitar
lixo e também getters e setters. Crie um programa que teste a classe, criando dois objetos,
calculando o salário anual de cada, dando um aumento de 10% e calcule o salário anual novamente.*/

#include "Empregado.h"
#include <iostream>
#include <string.h>
using namespace std;

Empregado::Empregado( char *nome, char *sobrenome, float salario){

strncpy(this->nome, nome, 20);//this->nome = nome;
strncpy(this->sobrenome, sobrenome, 20);//this->sobrenome = sobrenome; 
this-> salario = salario;

}

Empregado::Empregado(){

}

void Empregado:: setnome(char *nome){
    strncpy(this->nome, nome, 20);
    cout<<"\n O nome eh: "<< this->nome<<endl;

;
}

void Empregado:: setsobrenome(char *sobrenome){
    strncpy(this->sobrenome, sobrenome, 20);
    cout<<"\n O sobrenome eh "<<this->sobrenome<<endl;

}


void Empregado:: setsalario(float salario){
    this-> salario = salario;
}


char Empregado::getnome(){

return *nome;

}

char Empregado::getsobrenome(){

return *sobrenome;

}

float Empregado::getsalario(){

return salario;

}

void Empregado::aumento(){
    this-> salario = salario*1.1;
}