/*6. Crie a classe Caminhao, derivada das classes Motor e Veiculo. Inclua os atributos toneladas,
altura máxima e comprimento. Crie um construtor para esta classe que chame explicitamente
o construtor das classes base, um getter e um setter, além de um método print, que utiliza o
método print da classe base. Crie um driver para testar sua aplicação.*/

#include <iostream>
#include "Caminhao.cpp"
#include "Caminhao.h"
#include <string.h>

using namespace std;


int  main(){

Caminhao rest(10,3.5,15.8,10000,90,150000,5,2);
rest.print();

return  0;
}
