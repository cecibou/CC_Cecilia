//9. Crie um programa que contenha um array de 
//inteiros contendo 5 elementos. Utilizando apenas
//aritmetica de ponteiros, leia esse array do 
//teclado e imprima o dobro de cada valor lido

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

#include <stdlib.h>

#include <string.h>

#include <stdio.h>

int main(void){

    float vetor[5];

    for (int i = 0; i < 5; i++){

        printf("Entre com um numero:\n");

        scanf("%f", &vetor[i]);
    }

    for (int i = 0; i < 5; i++){

        vetor[i]=(vetor[i])*2;
        printf("O dobro eh: %g\n", vetor[i]);
    }

    return 0;
}