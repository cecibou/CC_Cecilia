#ifndef LOJA_H_INCLUDED
#define LOJA_H_INCLUDED
#include <string.h>
#include <iostream>
#include "Produto.h"
#include "Produto.cpp"
using namespace std;

class Loja{

protected:
    Produto *produto[5];
    int count;
public:
    Loja();
    int getcount();
    void addproduto();
    void showproduto();
     
};



#endif // Nota_H_INCLUDED
