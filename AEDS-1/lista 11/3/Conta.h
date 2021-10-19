#ifndef CONTA_H_INCLUDED
#define CONTA_H_INCLUDED
#include <string.h>

class Conta{

protected:

 float saldo;

public:
    Conta(float saldo);
    Conta();

    float sacar();
    float obter();
    float depositar();
     
};

class Especial: public Conta{

public:
    Especial(float saldo);

    float sacar();

};

#endif // Nota_H_INCLUDED
