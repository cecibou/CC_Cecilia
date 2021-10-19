
#ifndef CARROPASSEIO_H_INCLUDED
#define CARROPASSEIO_H_INCLUDED
#include <string.h>
#include "Motor.h"
#include "Veiculo.h"
#include "Motor.cpp"
#include "Veiculo.cpp"

class CarroPasseio: public Motor, public Veiculo{

private:

    char modelo[20];
    char cor[20];

public:

    CarroPasseio( char* modelo, char* cor, float peso, float velocidade, float preco,int cilindros, int potencia);

    CarroPasseio();

    char getmodelo();
    char getcor();


    void setmodelo(char* modelo);
    void setcor(char* cor);
    void printchar();
};

#endif // CarroPasseio_H_INCLUDED
