/* 1. Crie uma classe chamada NotaFiscal que um hardware utilize para representar uma nota scal
em uma loja de peças. Uma nota fiscal deve incluir quatro dados como atributos:
a. Número da peça (string);
b. Descrição da peça (string);
c. Quantidade comprada (inteiro);
d. Preço (número real).
A classe deve incluir ainda getters e setters para cada um dos atributos. Ainda, deve haver um
método getTotalNota que calcule e retorne o total de um vetor de objetos. Escreva um programa
que teste cada um dos métodos da classe.

*/

#include "Nota.h"
#include <iostream>
#include <string.h>
using namespace std;

Nota::Nota( char *num, char *peca, int quant, float preco){

strncpy(this->num, num, 20);//this->num = num;
strncpy(this->peca, peca, 20);//this->peca = peca; 
this->quant = quant;
this-> preco = preco;

}

Nota::Nota(){

}

void Nota:: setNum(char *num){
    strncpy(this->num, num, 20);
    cout<<" Número da peça eh: "<< this->num<<endl;

;
}

void Nota:: setPeca(char *peca){
    strncpy(this->peca, peca, 20);
    cout<<"\nDescrição da peça eh "<<this->peca<<endl;

}

void Nota:: setQuant(int quant){
    this->quant = quant;
}

void Nota:: setPreco(float preco){
    this-> preco = preco;
}

int Nota::getQuant(){

return quant;

}

char Nota::getNum(){

return *num;

}

char Nota::getPeca(){

return *peca;

}

float Nota::getPreco(){

return preco;

}

