#include "Funcionario.h"
#include <iostream>
using namespace std;

Funcionario::Funcionario(string nome, int salario)
{
    //ctor
    this->nome=nome;
    this->salario=salario;
}

Funcionario::~Funcionario()
{
    //dtor
}

void Funcionario::exibeDados()
{
    cout << "Funcionario";
}
