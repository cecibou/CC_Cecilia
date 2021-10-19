/*4.Crie uma hierarquia de classes de domínio para uma loja que venda livros, CDs e DVDs. Sobrescreva o método toString() para que imprima:

    - Para livros: nome, preço e autor;

    - Para CDs: nome, preço e número de faixas;

    - Para DVDs: nome, preço e duração. 

    Evite ao máximo repetição de código utilizando o construtor da classe principal e no método sobrescrito. Em seguida, crie uma classe Loja com um método principal que adicione 5 produtos diferentes (a sua escolha) a um vetor e, por fim, imprima o conteúdo do vetor.*/


#include "Loja.cpp"
#include "Loja.h"
#include "Produto.cpp"
#include "Produto.h"
#include <string.h>
#include <iostream>
using namespace std;

void menu(){
    system("clls || clear");
    cout<<"1 - Adicione um produto"<<endl;
    cout<<"2 - Mostrar um produto"<<endl;
    cout<<"3 - Sair"<<endl;
    cout<<"Entre com uma opcao: ";
}

int main (){
    Loja *loja= new Loja();
    int opcao;
    menu();
    cin>>opcao; cin.ignore();
    while(opcao !=3){
        switch (opcao){

        case 1:
            if(loja->getcount()<5){
                loja->addproduto();
            }
            break;
        
        case 2:
            loja->showproduto();
            break;

        menu();
        cin>>opcao; cin.ignore();
        }
    }

return 0;    
}    