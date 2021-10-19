#ifndef EMPREGADO_H_INCLUDED
#define EMPREGADO_H_INCLUDED
#include <string.h>

class Empregado{

private:

    char nome[20];
    char sobrenome[20];
    float salario;


public:

    Empregado( char *nome, char *sobrenome, float salario);

    Empregado();

    char getnome();
    char getsobrenome();
    float getsalario();

    void setnome(char *nome);
    void setsobrenome(char *sobrenome);
    void setsalario(float salario);
    void aumento();
     
};

#endif // Empregado_H_INCLUDED
