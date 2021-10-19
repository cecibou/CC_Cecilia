/*5. Crie a classe Veiculo, contendo o peso, a velocidade máxima, e o preço. Inclua um construtor sem argumentos e um com argumentos para inicialização dos atributos. Crie métodos que funcionem
como getter e setter e print.
Crie a classe Motor, contendo o número de cilindros e a potência. Inclua um construtor sem
argumentos e um com argumentos para inicialização dos atributos. Crie métodos que funcionem
como getter e setter e print.
Crie a classe CarroPasseio, derivada das classes Veiculo e Motor. Inclua atributos como modelo e
cor. Crie um construtor para esta classe que chame explicitamente o construtor das classes base,
um getter e um setter, além de um método print, que utiliza o método print da classe base. Crie
um driver para testar sua aplicação*/

#include <iostream>
#include "CarroPasseio.cpp"
#include "CarroPasseio.h"
#include <string.h>

using namespace std;


int  main(){

CarroPasseio  rest("xxxxx", "azul", 1276, 250, 20000, 3, 10);
rest.printchar ();

return  0;
}
