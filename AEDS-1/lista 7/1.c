/*1. Suponha que temos dois arquivos cujo as linhas são 
ordenadas lexigraficamente. Por exemplo,estes arquivos podem
conter nomes de pessoas, linha a linha, em ordem alfabética. a 
Escreva um programa que receba, por linha de comando, os nomes destes 
dois arquivos e de um terceiro. Crie este terceiro arquivo contendo 
todas as linhas destes dois arquivos ordenadas lexicograficamente. 
Arquivo 1:Antonio Berenice Diana Solange Sonia Zuleica                    
Arquivo 2:Carlos Celia Fabio Henrique                                                         Arquivo resultante:Antonio Berenice Carlos Celia Diana 
Fabio Henrique Solange Sonia Zuleica*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printFile(char filename[]){
    FILE *fp= fopen (filename, "r");
    char linha[100];
    fgets(linha, 100, fp);
    while(!feof(fp)){
        char *temp = strtok(linha, "\r\n");
        puts(temp);
        fgets(linha, 100, fp);
    }
    fclose(fp);
}

int main(){

    char Arquivo1[50], Arquivo2[50];
    int linha1[100], linha2[100];

    printf("Digite o arquivo que deseja abrir: ");
    scanf("%s", Arquivo1);
    printf("Digite o arquivo que deseja abrir: ");
    scanf("%s", Arquivo2);

    FILE *fp1= fopen(Arquivo1, "r");
    FILE *fp2= fopen(Arquivo2, "r");
    FILE *out= fopen("arqresult.txt", "w");

    if(fp1 == NULL || fp2 == NULL){
        printf("Arquivo nao existe.");
        exit(1);
    }

    fgets(linha1, 100, fp1);
    fgets(linha2, 100, fp2);
    while(!feof(fp1) && !feof(fp2)){
        if(strcmp(linha1, linha2)< 0){
            fputs(linha1, out);
            fgets(linha1, 100, fp1);

        }else{
            fputs(linha2, out);
            fgets(linha2, 100, fp2);
        }
    }

    if(feof(fp2)){
        while(!feof(fp1)){
            fputs(linha1, out);
            fgets(linha1, 100, fp1);
        }
    }

    if(feof(fp1)){
        while(!feof(fp2)){
            fputs(linha2, out);
            fgets(linha2, 100, fp2);
        }
    }

    fclose(fp1);
    fclose(fp2);
    fclose(out);
    
    printFile("arqresult.txt");

    return 0;
} 