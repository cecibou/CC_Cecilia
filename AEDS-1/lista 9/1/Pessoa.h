#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED

class Pessoa{

private:

    char nome[50];

    char data[10];

    float altura;

public:

    Pessoa(char* nome, char* data, float altura);

    Pessoa();

     void setAltura(float altura);

     float getAltura();

     void setNome(char* nome);

     char getNome();

     void setData(char* data);

     char getData();

     void printDados();



};




#endif // PESSOA_H_INCLUDED
