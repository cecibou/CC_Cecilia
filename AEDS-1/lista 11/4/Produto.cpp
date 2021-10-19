#include <string.h>
#include <iostream>
#include "Produto.h"
using namespace std;

Produto::Produto(){
    this->nome="";
    this->preco="";
}

Produto::Produto(string nome, string preço){
this->nome = nome;
this-> preco = preco;
}

string Produto::getnome(){
    return this->nome;
}

string Produto::getpreco(){
    return this->preco;
}

void Produto::setnome( string nome){
    this->nome=nome;
}

void Produto::setpreco( string preco){
    this->preco=preco;
}

Livro::Livro():Produto(){
    this-> autor="";
}

Livro:: Livro(string autor, string nome, string preco):Produto(nome, preco){
this-> autor = autor;
}

string Livro::getautor(){
    return this->autor;
}

void Livro::setautor(string autor){
    this-> autor=autor;
}

string Livro::toString(){
    string resp;
    resp += "nome" + nome + "\t";
    resp += "preco" + preco + "\t";
    resp += "autor" + autor;
    return resp;
}

CD::CD():Produto(){
    this->nfaixa="";
}

CD::CD(string nfaixa, string nome, string preco):Produto(nome, preco){
this-> nfaixa = nfaixa;
}

string CD::getnfaixa(){
    return this->nfaixa;
}

void Livro::setnfaixa(string nfaixa){
    this-> nfaixa=nfaixa;
}

string CD::toString(){
string resp;
    resp += "nome" + nome + "\t";
    resp += "preco" + preco + "\t";
    resp += "no faixas" + nfaixa;
    return resp;
}

DVD::DVD():Produto(){
    this->duração="";
}

DVD::DVD(string duracao, string nome, string preco):Produto(nome, preco){
this-> duracao = duracao;
}

string DVD::getduracao(){
    return this->duracao;
}

void DVD::setduracao(string duracao){
    this-> duracao=duracao;
}

string DVD::toString(){
string resp;
    resp += "nome" + nome + "\t";
    resp += "preco" + preco + "\t";
    resp += "duracao" + duracao;
    return resp;;
}