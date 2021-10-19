//4. Faça um programa que leia dois valores 
//inteiros e chame uma função que receba estes 
//2 valores de entrada e retorne o maior valor 
//na primeira variável e o menor valor na segunda 
//variável. Escreva o conteúdo das 2 variáveis na tela.

#include <stdio.h>

//prototipo função Val
void Val (int *pointnum1,int *pointnum2);
int main (void){
    int num1, num2;

//entrada das variaveis lidas do teclado
        printf("Entre com um valor do inteiro \n");
        scanf("%d", &num1);
        printf("Entre com outro valor do inteiro \n");
        scanf("%d", &num2);

//chamada função Val
        Val (&num1,&num2);
//saída das variaveis        
        printf ("O maior valor eh %d \n",num1);
        printf ("O menor valor eh %d \n",num2);
    return 0;
}
void Val (int *pointnum1,int *pointnum2){
    int num1, num2, temp;       
        *pointnum1= &num1;
        *pointnum2= &num2;

    if(*pointnum2>pointnum1){
        temp=*pointnum1;
        *pointnum1=*pointnum2;
        *pointnum2=temp;  
    }
}