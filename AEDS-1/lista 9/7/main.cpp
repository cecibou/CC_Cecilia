/*7. Implemente um carro. O tanque de combustível do carro armazena no máximo 50 litros de gasolina.
O carro consome 15 km/litro. Deve ser possível:
 Abastecer o carro com uma certa quantidade de gasolina;
 Mover o carro em uma determinada distância (medida em km);
 Retornar a quantidade de combustível e a distância total percorrida.
 No programa principal, crie 2 carros. Abasteça 20 litros no primeiro e 30 litros no segundo.
Desloque o primeiro em 200 km e o segundo em 400 km. Exiba na tela a distância percorrida
e o total de combustível restante para cada um.*/

#include <iostream>
#include "Carro.cpp"
#include "Carro.h"

using namespace std;


int main (){

Carro *c1 = new Carro(0,0);
c1->abastecer(20);
c1->mover(200);
cout<<"O carro andou "<<c1->getDistancia()<<" km"<<endl;
cout<<"Sobrou "<<c1->getLitros()<<" litros\n"<<endl;


Carro *c2 = new Carro(0,0);
c2->abastecer(30);
c2->mover(400);
cout<<"O carro andou "<<c2->getDistancia()<<" km"<<endl;
cout<<"Sobrou "<<c2->getLitros()<<" litros"<<endl;


return 0;    
}