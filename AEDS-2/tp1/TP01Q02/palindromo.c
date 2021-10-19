#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

    bool isFim(char s[]) {

        return (strlen(s) == 3 && s[0] == 'F' && s[1] == 'I' && s[2] == 'M');
    }

    int ehpalindromo (char s[]){
      int i, tam, dif = 0;
      //leitura da palavra   
      tam = strlen(s);
      tam--;// último índice válido da string (vetor)
      i = 0; // primeiro índice válido da string (vetor)
      
      while(tam >= i){
      if(s[i] != s[tam]) // conta as letras diferentes
          dif ++;
      i++;
      tam--;
      } 
    return dif;
         
    }

int main() {

  char entrada[1000][100];
  int numEntrada = 0;

  // Leitura da entrada padrao
  do {
      scanf(" %[^\n]s", entrada[numEntrada]);
  } while (isFim(entrada[numEntrada++]) == false);
      numEntrada--; // Desconsiderar ultima linha contendo a palavra FIM

  // Para cada linha de entrada, gerando uma de saida 

  for (int i = 0; i < numEntrada; i++) {
      // se o contador de letras diferentes for 0, então a palavra é palíndroma
      if (ehpalindromo(entrada[i]) == 0)
          printf("SIM\n");

      // e se for diferente de 0, a palavra não é palindroma
      else
          printf("NAO\n");

      
  }

  return 0;
}