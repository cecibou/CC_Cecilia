#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <iostream>
using namespace std;

class Funcionario
{
    public:
        Funcionario(string nome,int salario);
        virtual ~Funcionario();
        virtual void exibeDados();

    protected:
        string nome;
        int salario;

    private:
};

#endif // FUNCIONARIO_H
