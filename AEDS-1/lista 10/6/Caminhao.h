/*6. Crie a classe Caminhao, derivada das classes Motor e Veiculo. Inclua os atributos toneladas,
altura máxima e comprimento. Crie um construtor para esta classe que chame explicitamente
o construtor das classes base, um getter e um setter, além de um método print, que utiliza o
método print da classe base. Crie um driver para testar sua aplicação.*/

#ifndef CAMINHAO_H_INCLUDED
#define CAMINHAO_H_INCLUDED
#include <string.h>
#include <string.h>
#include "Motor.h"
#include "Veiculo.h"
#include "Motor.cpp"
#include "Veiculo.cpp"

class Caminhao: public Motor, public Veiculo{

private:

    float toneladas;
    float altura;
    float comprimento;

public:

    Caminhao( float toneladas, float altura, float comprimento, float peso, float velocidade, float preco,int cilindros, int potencia);

    Caminhao();

    float gettoneladas();
    float getaltura();
    float getcomprimento();


    void settoneladas(float toneladas);
    void setaltura(float altura);
    void setcomprimento(float comprimento);
    void print();
     
};

#endif // CAMINHAO_H_INCLUDED