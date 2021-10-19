/*5. Considere um arquivo texto que armazene números em ponto
flutuante em cada uma de suas linhas. Escreva um programa em C
que determine o valor máximo, o valor mínimo e a média desses
valores armazenados no arquivo. Imprima esses valores na tela.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    FILE *ptrFilenum;
    char Filenum[100];
    float count;
    float num, min, max, soma, media;

    printf("Digite o arquivo que deseja abrir: ");
    scanf("%s", Filenum);

    ptrFilenum = fopen(Filenum, "r");
    if (ptrFilenum == NULL){
        printf("Arquivo nao existe.");
        exit(1);
    }

    fscanf(ptrFilenum, "%f", &num);
    min = num;

    max = num;

    soma += num;

    count++;

    while (!feof(ptrFilenum))
    {

        fscanf(ptrFilenum, "%f", &num);

        if (num < min){

            min = num;
        }

        if (num > max){

            max = num;
        }

        soma += num;

        count++;
    }
    media=(soma/count);
    printf("O minimo eh %g\n", min);
    printf("O maximo eh %g\n", max);
    printf("A media eh %g\n", media);
    fclose(ptrFilenum);

    return 0;
}