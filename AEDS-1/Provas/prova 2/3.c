//Faça um programa que receba do usuário o nome de um arquivo binário contendo n inteiros. Abra,  //leia os valores e imprima na tela apenas aqueles que forem múltiplos de 5.

#include<stdio.h>
#include<stdlib.h>

int main(){
    // variáveis
    char arquivo[50];
    int num;

    FILE *fp;

    printf("Digite o arquivo que deseja abrir: "); //usuário escolhe o arquivo
    scanf("%s", arquivo);
    fp = fopen(arquivo, "rb");//fecha o arquivo tipo binário
    if (fp == NULL){ // confere se o arquivo existe
        printf("Arquivo nao existe.");
        exit(1);
    }

    while (!feof(fp)){ // enquento o arquivo não acabar...
        fread(&num,sizeof(int),1,fp);
        if(num % 5 == 0){ // multiplos de 5
            puts(num); // imprime na tela o número         
        }
    }

    fclose(fp); //fecha o arquivo

    return 0;

}