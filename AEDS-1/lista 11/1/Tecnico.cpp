#include "Tecnico.h"

Tecnico::Tecnico(string nome,int salario, int bonusSalario):Assistente(nome,salario)
{
    //ctor
    this->bonusSalario = bonusSalario;
}

Tecnico::~Tecnico()
{
    //dtor
}

void Tecnico::exibeDados(){
    cout<<"Nome - "<<this->nome<<endl;
    cout<<"Salario - "<<this->salario<<endl;
    cout<<"Bonus Salario - "<<this->bonusSalario<<endl;
}
