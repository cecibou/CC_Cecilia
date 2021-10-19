#include <string.h>
#include <iostream>
#include "Produto.h"
#include "Produto.cpp"
#include <string.h>
using namespace std;

Loja()::Loja{
        this->count=0;
    }

int Loja::getcount(){
    return this->count;
}

void Loja::addproduto(Produto produto){
    int opcao;
    system("cls||clear")
    count<<"Qual produto será adicionado? (1)Livro, (2)CD e (3)DVD"<<endl;
    cin>>opcao; cin.ignore;
    String nome;
    float preco;
    if(opcao == 1){
        string autor;
        cout<<"Entre com o nome do livro: "; 
        getline(cin,nome);
        cout<<"Entre com o preco do livro: "; 
        getline(cin,preco);
        cout<<"Entre com o autor do livro: "; 
        getline(cin,autor);
        this-> produto[count]=new Livro(nome, preco, autor);

    }else if(opcao == 2){
        string nfaixas;
        cout<<"Entre com o nome do CD "; 
        getline(cin,nome);
        cout<<"Entre com o preco do CD "; 
        getline(cin,preco);
        cout<<"Entre com o numero de faixas do CD "; 
        getline(cin,autor);
        this-> produto[count]=new CD(nome, preco, nfaixas);

    }else if(opcao == 3){
        string duracao;
        cout<<"Entre com o nome do DVD "; 
        getline(cin,nome);
        cout<<"Entre com o preco do DVD "; 
        getline(cin,preco);
        cout<<"Entre com a duracao do DVD "; 
        getline(cin,autor);
        this-> produto[count]=new DVD(nome, preco, duracao);
    }

    this-> count++
}


void Loja::showproduto(){
    for(int i=0; i<count; i++){
        cout<< produto[i]->toString()<<endl;
    }
}