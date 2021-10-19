/*4. Escreva um programa em C que solicite ao usuário a digitação do nome de um arquivo texto já existente, e que então gere um outro arquivo, que será uma cópia do primeiro.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *ptrOrigem, *ptrDestino;

    char fileOrigem[20];

    char linha[100];

    printf("Digite o arquivo que deseja abrir: ");

    scanf("%s", fileOrigem);

    ptrOrigem = fopen(fileOrigem, "r");

    if (ptrOrigem == NULL)
    {

        printf("Arquivo nao existe.");

        exit(1);
    }

    ptrDestino = fopen("fileDestino.txt", "w");

    if (ptrDestino == NULL){

        printf("Nao foi possivel criar o arquivo.");

        exit(1);
    }

    while (!feof(ptrOrigem)){
        fgets(linha, 100, ptrOrigem);
        fprintf(ptrDestino, "%s", linha);
    }

    fclose(ptrOrigem);

    fclose(ptrDestino);

    return 0;
}
