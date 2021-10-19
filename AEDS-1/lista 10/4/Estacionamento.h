#ifndef ESTACIONAMENTO_H_INCLUDED
#define ESTACIONAMENTO_H_INCLUDED
#include <iostream>
#include <string.h>
#include "Tempo.h"
using namespace std;

class Estacionamento{

private:

    string placa;
    string modelo;
    Tempo* entrada;
    Tempo* saida;

public:

    Estacionamento( string placa, string modelo, Tempo *entrada, Tempo *saida);

    Estacionamento();

    string getplaca();
    string getmodelo();
    Tempo getentrada();
    Tempo getsaida();    
    float calcularTempo();

    void setentrada(Tempo *entrada);
    void setsaida(Tempo *saida);
    void setplaca(string placa);
    void setmodelo(string modelo);    
    void print();
     
};

#endif // Estacionamento_H_INCLUDED
