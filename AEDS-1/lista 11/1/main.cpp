/*1. Implemente a classe Funcionario e a classe Gerente.
a. crie a classe Assistente, que também é um funcionário, e que possui um número de matrícula
(faça o método GET). Sobrescreva o método exibeDados().
b. sabendo que os Assistentes Técnicos possuem um bônus salarial e que os Assistentes Administrativos
possuem um turno (dia ou noite) e um adicional noturno, crie as classes Tecnico e
Administrativo.*/

#include <iostream>
#include "Funcionario.h"
#include "Assistente.h"
#include "Gerente.h"
#include "Administrativo.h"
#include "Tecnico.h"
#include "Funcionario.cpp"
#include "Assistente.cpp"
#include "Gerente.cpp"
#include "Administrativo.cpp"
#include "Tecnico.cpp"


using namespace std;

int main()
{
    //Assistente* a1 = new Assistente();
    //a1->exibeDados();
    //Funcionario* a2 = new Assistente();
    //a2->exibeDados(); 
    Funcionario* tecnico1 = new Tecnico("nomeTec1",1000.0,200.0);
    Funcionario* administrativo1 = new Administrativo("nomeAdr1",3000.0,"dia",300.0);
    Funcionario* administrativo2 = new Administrativo("nomeAdr2",3000.0,"noite",300.0);
    tecnico1->exibeDados();
    administrativo1->exibeDados();
    administrativo2->exibeDados();
    return 0;
}
