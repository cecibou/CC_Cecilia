//5. Elaborar um programa que leia dois valores inteiros (A e B). 
//Em seguida faça uma função que retorne a soma do dobro dos  
//dois numeros lidos. A função deverá armazenar o dobro de A
//na propria variável A e o dobro de B na própria variável B

#include <stdio.h>

//prototipo função Sdobro
void Sdobro (int *A,int *B);
int main (void){
	int A, B;

//entrada das variaveis lidas do teclado
        printf("Entre com um valor do inteiro A \n");
        scanf("%d", &A);
        printf("Entre com outro valor do inteiro B \n");
        scanf("%d", &B);

//chamada função Val
        Sdobro (&A,&B);

//saída das variaveis        
        printf ("O a soma do dobro A eh %d \n",A);
        printf ("O a soma do dobro B eh %d \n",B);
    return 0;
}

void Sdobro (int *A,int *B){
    *A*=4;
    *B*=4;
} 
    