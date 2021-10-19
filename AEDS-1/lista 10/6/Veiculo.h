#ifndef VEICULO_H_INCLUDED
#define VEICULO_H_INCLUDED
#include <string.h>

class Veiculo{

private:

    float peso;
    float velocidade;
    float preco;


public:

    Veiculo( float peso, float velocidade, float preco);

    Veiculo();

    float getpeso();
    float getvelocidade();
    float getpreco();

    void setpeso(float peso);
    void setvelocidade(float velocidade);
    void setpreco(float preco);
    void print();
     
};

#endif // Veiculo_H_INCLUDED
