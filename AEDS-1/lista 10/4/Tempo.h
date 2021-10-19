#ifndef TEMPO_H_INCLUDED
#define TEMPO_H_INCLUDED
#include <iostream>
#include <string.h>
using namespace std;

class Tempo{

private:

    int hora;

public:

    Tempo(int hora);

    Tempo();

     void setHora(int hora);

     int getHora();

     void print();

};




#endif // ! Tempo_H_INCLUDED
