/*5. Criar uma estrutura hierárquica que contenha as seguintes classes: Veiculo, Bicicleta e Automóvel. Os métodos da classe Veiculo são todos virtuais puros e possuem a seguinte assinatura:
listarVerificacoes(), ajustar() e limpar(). Estes métodos são implementados nas subclasses Automóvel e Bicicleta. Acrescentar na classe Automóvel o método mudarOleo().*/

#include <iostream>
#include "Veiculo.h"
#include "Veiculo.cpp"
 
void main() {
Veiculo *veiculos[2];
veiculos[0]= new Bicicleta();
veiculos[1]= new Automovel();
 
Automovel carro = (Automovel) veiculo[1];
carro->ajustar();
carro->limpar();
carro->mudarOleo();
veiculos[1]->listarVerificacoes();
}
int main(){
  Veiculo *veiculo[2];
  veiculo[0] = new Bicicleta();
  veiculo[1] = new Automovel();
 
  Automovel carro =(Automovel) veiculo[1];
  veiculos[1]->ajutar();
  veiculos[1]->limpar();
  carro->mudarOleo();
  veiculos[1]->listarVerificacoes();
 
  Automovel bicicleta =(Automovel) veiculo[0];
  veiculos[0]->ajutar();
  veiculos[0]->limpar();
  veiculos[0]->listarVerificacoes();
return 0;
}