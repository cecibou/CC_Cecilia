#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

    bool isFim(char s[]) {

        return (strlen(s) == 3 && s[0] == 'F' && s[1] == 'I' && s[2] == 'M');
    }

    int ehpalindromo (char s[], int tam, int i){
        int dif = 0;

        if(s[i] != s[tam]){
            dif ++;
        }else{
            if(i<=tam){
                i++;
                tam--;
                dif= ehpalindromo(s, tam, i);
            }
            
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
      if (ehpalindromo(entrada[i],strlen(entrada[i])-1, 0) == 0)
          printf("SIM\n");

      // e se for diferente de 0, a palavra não é palindroma
      else
          printf("NAO\n");

      
  }

  return 0;
}