/*2. Crie uma classe denominada Elevador para armazenar as informações de um elevador dentro
de um prédio. A classe deve armazenar o andar atual (0=térreo), total de andares no prédio,
excluindo o térreo, capacidade do elevador, e quantas pessoas estão presentes nele.
A classe deve também disponibilizar os seguintes métodos:
 inicializa: que deve receber como parâmetros: a capacidade do elevador e o total de
andares no prédio (os elevadores sempre começam no térreo e vazios);
 entra: para acrescentar uma pessoa no elevador (só deve acrescentar se ainda houver espa
ço);
 sai: para remover uma pessoa do elevador (só deve remover se houver alguém dentro dele);
 sobe: para subir um andar (não deve subir se já estiver no último andar);
 desce: para descer um andar (não deve descer se já estiver no térreo);
 get....: métodos para obter cada um dos os dados armazenados.*/

#include <iostream>
#include "Elevador.cpp"
#include "Elevador.h"

using namespace std;


int main (){

Elevador *e1 = new Elevador(0,0,0,0);
e1-> inicializa(5,10);
e1->desce();
e1->entra();
e1->sai();
e1->sobe();
cout<<e1->getPessoas()<<"\n"<<e1->getAndar();
return 0;    
}