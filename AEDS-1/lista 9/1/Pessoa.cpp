#include "Pessoa.h"

#include <iostream>
#include <string.h>

using namespace std;



Pessoa::Pessoa(char* nome, char* data, float altura){

strncpy(this->nome,nome,50);

strncpy(this->data,data,10);

this->altura = altura;

}



Pessoa::Pessoa(){

}



void Pessoa::setAltura(float altura){

this->altura = altura;

}



float Pessoa::getAltura(){

return altura;

}



void Pessoa::setNome(char* nome){

strncpy(this->nome,nome,50);


}



char Pessoa::getNome(){

return *nome;

}



void Pessoa::setData(char* data){

strncpy(this->data,data,10);

}



char Pessoa::getData(){

return *data;

}



void Pessoa::printDados(){

//printf("\nNome eh: %s \nA data eh: %s \nA altura eh: %g", *nome, *data, altura);
cout << "\nNome: " << nome << "\nData:" << data << "\nAltura: " << altura;
}
