/*3. Crie uma classe Aluno com atributos que armazenem o nome, a série que cursa e o grau. Crie
um getter e um setter, além de uma variável static que conte a quantidade de objetos criados, a
ser utilizada no construtor e destrutor. Crie um vetor com 15 objetos desta classe e preencha os
dados através do setter.*/

#include "Aluno.h"
#include <iostream>
#include <string.h>
using namespace std;

Aluno::Aluno(){
this->nome = "";
this->serie = serie=0; 
this-> grau = grau=0;
}

Aluno::Aluno( string nome, int serie, int grau){

this->nome = nome;
this->serie = serie; 
this-> grau = grau;

}

void Aluno:: setnome(string nome){
    this->nome = nome;
}

void Aluno:: setserie(int serie){
    this->serie = serie;

}


void Aluno:: setgrau(int grau){
    this-> grau = grau;
}


string Aluno::getnome(){

return nome;

}

int Aluno::getserie(){

return serie;

}

int Aluno::getgrau(){

return grau;

}
