#include "Assistente.h"
#include <iostream>
using namespace std;


Assistente::Assistente(string nome, int salario):Funcionario(nome,salario)
{
    //ctor
}

Assistente::~Assistente()
{
    //dtor
}

void Assistente::exibeDados()
{
    cout << "Assistente";
}
