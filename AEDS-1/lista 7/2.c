/*2. Escreva um programa em C para contar a quantidade de palavras de um arquivo texto.*/

#include <stdio.h>
#include <string.h>

int main() {
    //Variáveis de contagem
    int comecouPalavra = 0, numPalavras = 0, numLinhas = 0, numCaracteres = 0;

    //Variável usada como descritor do arquivo em disco
    FILE *descritor;

    //Variável que irá receber a string de onde está o arquivo
    char arquivo[50];

    //Variável que armazena caracter para processamento
    char *caracter;  
      
    printf("Digite o arquivo que deseja abrir: ");
    scanf("%s", arquivo);
    descritor = fopen(arquivo, "r");

    while (!feof(descritor)) {
          fread(caracter, 1, 1, descritor);

          if  ((*caracter!=' ') && (*caracter!='\n') && (!comecouPalavra)) {
             comecouPalavra = 1;
          }

          if  (((*caracter==' ') || (*caracter == '\n')) && (comecouPalavra)) {
             comecouPalavra = 0;
             numPalavras++;
          }

   
   }           
   printf("\n O número de palavras do arquivo eh: %d", numPalavras);
   getchar();
}