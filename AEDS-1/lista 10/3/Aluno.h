#ifndef ALUNO_H_INCLUDED
#define ALUNO_H_INCLUDED
#include <iostream>
#include <string.h>
using namespace std;

class Aluno{

private:

    string nome;
    int serie;
    int grau;


public:

    Aluno( string nome, int serie, int grau);

    Aluno();

    string getnome();
    int getserie();
    int getgrau();

    void setnome(string nome);
    void setserie(int serie);
    void setgrau(int grau);
     
};

#endif // Aluno_H_INCLUDED
