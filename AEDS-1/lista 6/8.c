//8. Crie um programa que contenha um array
//de float contendo 10 elementos. Imprima
//o endereço de cada posição desse array.

#include <stdlib.h>

#include <string.h>

#include <stdio.h>

int main(void){

    float vetor[10];

    for (int i = 0; i < 10; i++){

        printf("Entre com um numero:\n");

        scanf("%f", &vetor[i]);
    }

    for (int i = 0; i < 10; i++){

        printf(" Endereco de memoria: %p\n", &vetor[i]);
    }

    return 0;
}
