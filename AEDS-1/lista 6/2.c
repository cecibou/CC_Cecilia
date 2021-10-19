//2. Escreva um programa que contenha duas variáveis inteiras. 
//Leia essas variáveis do teclado. Em seguida, compare 
//seus endereços e exiba o conteúdo do maior endereço.


#include <stdio.h>

int main (){
//associação variavel e ponteiro    
    int num1, num2;
    int *pointnum1=&num1, *pointnum2=&num2;

//entrada das variaveis lidas do teclado
        printf("Entre com um valor do inteiro \n");
        scanf("%d", &num1);
        printf("Entre com outro valor do inteiro \n");
        scanf("%d", &num2);

//saída das variaveis
        printf("O endereco de %d eh %d \n", num1, &num1);
        printf("O endereco de %d eh %d \n", num2, &num2);
        
//estrutura condicional
        if(*pointnum1>*pointnum2){
            printf("O %d eh o de maior endereco que eh %d \n", num1, &num1);
        }else{
            printf("O %d eh o de maior endereco que eh %d \n", num2, &num2);
        }
    return 0;
}
