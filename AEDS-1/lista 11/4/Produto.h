#ifndef PRODUTO_H_INCLUDED
#define PRODUTO_H_INCLUDED
#include <string.h>
#include <iostream>
using namespace std;

class Produto{

protected:
    string nome;
    string preco;

public:
    Produto(string nome, string preço);
    Produto();
    string getpreco();
    string getnome();

    void setnome(string nome);
    void setpreco( string preco);
     
    virtual string toString()=0;
};

class Livro: public Produto{
private:

string autor;

public:
    Livro();
    Livro(string autor, string nome, string preco);
    string getautor();
    void setautor(string autor);
    
};

class CD: public Produto{
private:

    string nfaixa;

public:
    CD(string nfaixa, string nome, string preco);
    string getnfaixa();
    void setnfaixa( string nfaixa);
        
};

class DVD: public Produto{

private:
    string duracao;

public:
    DVD(string duracao, string nome, string preco);
    string getduracao();
    void setduracao( string duracao);
        
};

#endif // Nota_H_INCLUDED
