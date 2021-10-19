//7-Faça um programa que modifique as vogais de uma frase.
//O programa deve ler uma frase (max.100 caracteres) e
//armazeá-la num vetor. Imprimir a frase lida trocando as
//vogais, isto é, trocar ’a’ pelo ’u’, ’e’ pelo ’o’, ’i’
//pelo ’u’, ’o’ pelo ’a’ e o ’u’ pelo ’e’. Usar uma função
//void (procedimento) para realizar a troca e uma função para
//realizar a impressao da frase trocada. A função deve ter
//como parâmetro um ponteiro char referente ao vetor

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void procedimento(char *frase);
void impressao(char *frase);

int main(){
    char frase[100];
    printf("Entre com sua frase\n");
    fflush(stdin);
    gets(frase);
    procedimento(frase);
    impressao(frase);

    return 0;
}

void procedimento(char *frase){
    int x = 0;
    while (x < strlen(frase)){
        if (frase[x] == 'a'){
            frase[x] = 'u';
        }
        else if (frase[x] == 'e'){
            frase[x] = 'o';
        }
        else if (frase[x] == 'i'){
            frase[x] = 'u';
        }
        else if (frase[x] == 'o'){
            frase[x] = 'a';
        }
        else if (frase[x] == 'u'){
            frase[x] = 'e';
        }

        x++;
    }
}

void impressao(char *frase){
    printf("Sua frase trocada eh: %s", frase);
}