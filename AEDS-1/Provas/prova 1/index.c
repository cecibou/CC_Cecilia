/*Crie um algoritmo que leia a idade de uma pessoa e informe a sua classe eleitoral:
não eleitor (abaixo de 16 anos);
eleitor obrigatório (entre a faixa de 18 e menor de 65 anos);
eleitor facultativo (de 16 até 18 anos e maior de 65 anos, inclusive).*/

#include <stdio.h>

int main(void) {
    int idade;

        printf("Entre com a idade do eleitor\n");
        scanf("%d", &idade);
        
        if(idade<16){
            printf("Não eleitor\n");
        
        }else if(idade>=18 && idade<65){
            printf("Eleitor obrigatório\n");
        
        }else{
            printf("Eleitor facultativo\n");
        }

        return 0;
        }