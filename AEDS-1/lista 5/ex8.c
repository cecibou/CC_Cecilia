//8Fazer um método recursivo que determine 
//se um número é ou não primo.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool Primo(int n, int i);

//protótipo da função countDigitos
int main(void){
    int n, i;
    printf("Entre com o número que deseja conferir se é primo\n");
    scanf("%d", &n);
    //chamada da função Primo
    if (Primo(n, 2))
      printf("Sim\n");
    else
      printf("Nao\n");
    return 0;
}

//Função recursiva que recebe numero natural e
//retorna dígitos ele tem

bool Primo(int n, int i){
  //Casos:
  if (n <= 2)
    return (n == 2) ? true : false;
  if (n % i == 0)
    return false;
  if (i * i > n)
    return true;
 
  //Procura divisores
  return Primo(n, i + 1);
}
 

