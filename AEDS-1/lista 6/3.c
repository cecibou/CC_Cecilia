//3. Faça um programa que leia 2 valores inteiros
//e chame uma função que receba estas 2 variáveis e
//troque o seu conteúdo, ou seja, esta função é chamada
//passando duas variáveis A e B por exemplo e, após a execução
//da função, A conterá o valor de B e B terá o valor de A.

#include <stdio.h>

//prototipo funço Swap
void Swap(int *pointnum1, int *pointnum2);
int main(void){
        int num1, num2;
        //entrada das variaveis lidas do teclado
        printf("Entre com um valor do inteiro \n");
        scanf("%d", &num1);
        printf("Entre com outro valor do inteiro \n");
        scanf("%d", &num2);

        //chamada função Swap
        Swap(&num1, &num2);

        //saída das variaveis
        printf("Agora o valor do primeiro eh %d e do segundo eh %d\n", num1, num2);
        return 0;
}

void Swap(int *pointnum1, int *pointnum2){
        int temp;
        //troca dos valores das variaveis usando ponteiros
        temp = *pointnum1;
        *pointnum1 = *pointnum2;
        *pointnum2 = temp;
}