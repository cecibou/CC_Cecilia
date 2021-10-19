/*3. Crie um programa que receba n números e some esses numeros enquanto a soma não for superior
a 100. O programa deverá imprimir o valor somado (antes de atingir o número maior que 100) e
deverá informar quantos números foram somados e qual a média. Refaça seu programa utilizando
as seguintes regras:
a. Utilize os tratamentos de exceção para lidar com a entrada de dados.
b. Quando a soma for superior a 100, o programa deverá gerar uma exceção criada pelo programador (veja transparência da aula pra ver como fazer), com nome ExcecaoAcimaDeCem.
c. Lance essa exceção, com o uso de throws.*/

#include <stdexcept>
#include <stdio.h>
#include <iostream>

using namespace std;

class ExcecaoAcimaDeCem{
};

 


int somar(int soma, int numero, int &qtdeSomados){
    if((soma+numero)>100){
        throw ExcecaoAcimaDeCem();
    }else{
        qtdeSomados+= 1;
        return soma+numero;
    }
}

 

int main()
{
    int n, soma=0, qtdeSomados=0, numero=0;

 

    cout<<"Digite a quantidade de numeros a ser somados: "<<endl;
    cin>>n;
    try{
        for(int i=0; i<n; i++){
            cout<<"Digite o numero a ser somado: "<<endl;
            cin>>numero;
            soma = somar(soma,numero,qtdeSomados);
            cout<<"Soma = "<<soma<<endl;
        }
    }catch(exception &e){
        cout<<"Soma maior que 100"<<endl;
    }
    cout<<"Numeros Somados = "<<qtdeSomados<<endl;
    cout<<"Media = "<<soma/qtdeSomados<<endl;

 

    return 0;
}