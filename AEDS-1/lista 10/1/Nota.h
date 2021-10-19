

#ifndef NOTA_H_INCLUDED
#define NOTA_H_INCLUDED
#include <string.h>

class Nota{

private:

    char num[20];
    char peca[20];
    int quant;
    float preco;


public:

    Nota( char *num, char *peca, int quant, float preco);

    Nota();

    char getNum();
    char getPeca();
    int getQuant();
    float getPreco();

    void setNum(char *num);
    void setPeca(char *peca);
    void setQuant(int quant);
    void setPreco(float preco);
     
};

#endif // Nota_H_INCLUDED
