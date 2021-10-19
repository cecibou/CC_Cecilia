//Desenvolva um algoritmo RECURSIVO que dado uma palavra contabilize e verifique se quantidade de //consoantes que ela possui é par.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int consoante(char c){
  int res;
  if ((c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u')
     || (c == 'A') || (c == 'E') || (c == 'I') || (c == 'O') || (c == 'U')){
    res = 0;
     }else {
       res = 1;
  }
  return res;  
}


int consoantepar(int par, char palavra[50]){
  int res, ehCons, i, tam;
  char primcarac;
  char novapalavra[50];
 
  primcarac = palavra[0];
  ehCons = consoante(primcarac);

   // res 1 = impar, 0 par
  if (par == 0) {
    res = ehCons; // seta a nova situacao
  }else{
    if (ehCons == 0){
      res = par; // continua o que estava antes
    }else{
      res = 0; // tinha uma constante e apareceu outra
    }
  }

  tam = strlen(palavra);
  
  if (tam > 1){
     for (i=1;i<49;i++){// var copiar o terminador de string
       novapalavra[i-1] = palavra[i];
     }
      
     res = consoantepar(res,novapalavra); // parte recursiva
  }
 
  return res;
}

int main() {
  char palavra[50];
  int res;

  printf("Informe a palavra: ");
  scanf("%[^\n]s",palavra);
  // palavra = 'cecilia';
  res = consoantepar(0,palavra);
 
   
  if (res == 1){
     printf("Tem quantidade impar de consoante\n");
    }else{
      printf("Tem quantidade par de consoante\n");
    }

    return 0;
}
   