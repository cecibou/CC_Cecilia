

#ifndef MOTOR_H_INCLUDED
#define MOTOR_H_INCLUDED
#include <string.h>

class Motor{

private:

    int cilindros;
    int potencia;

public:

    Motor( int cilindros, int potencia);

    Motor();

    int getcilindros();
    int getpotencia();


    void setcilindros(int cilindros);
    void setpotencia(int potencia);
    void print();
     
};

#endif // Motor_H_INCLUDED
