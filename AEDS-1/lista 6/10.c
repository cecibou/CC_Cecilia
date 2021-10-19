//10-Crie um programa que contenha um array contendo 5
//elementos inteiros. Leia esse array do teclado e
//imprima o endereço das posições contendo valores pares.

#include <stdlib.h>

#include <string.h>

#include <stdio.h>

int main(void){

    int vetor[5];

    for (int i = 0; i < 5; i++){

        printf("Entre com um numero:\n");

        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 5; i++){
        if(vetor[i]%2==0){
           printf("Os numeros pares sao: %d\n", vetor[i]); 
        } 
    }

    return 0;
}