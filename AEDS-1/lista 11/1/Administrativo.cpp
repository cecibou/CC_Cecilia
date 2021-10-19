#include "Administrativo.h"
#include <iostream>
#include <string>
using namespace std;

Administrativo::Administrativo(string nome, int salario, int adicionalNoturno, string turno):Assistente(nome,salario)
{
    //ctor
    this->turno = turno;
    string dia = "dia";
    if(turno.compare(dia)==0){
        this->adicionalNoturno = 0;
    }else{
        this->adicionalNoturno = adicionalNoturno;
    }
}

Administrativo::~Administrativo()
{
    //dtor
}

void Administrativo::exibeDados(){
    cout<<"Nome - "<<this->nome<<endl;
    cout<<"Salario - "<<this->salario<<endl;
    cout<<"turno - "<<this->turno<<endl;
    cout<<"Adicional Noturno - "<<this->adicionalNoturno<<endl;
}
