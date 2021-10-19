//1-Fazer um método recursivo que recebe 
//um número inteiro e retorna o seu fatorial.

#include <stdio.h>

//protótipo da função fatorial
int Fatorial(int num);
int main(void)
{
  int num, f;
  
    printf("Digite o numero que deseja calcular o fatorial:\t ");
    scanf("%d",&num);
    
    //chamada da função fatorial
    f = Fatorial(num);
    
    printf("Fatorial de %d = %d",num,f);

  return 0;
}
//Função recursiva que calcula o fatorial
//de um numero inteiro n
int Fatorial(int num)
{
  int val_fat;
  
    if ( num <= 1 )
      //Caso base: fatorial de n <= 1 retorna 1
      return (1);
    else{
      //Chamada recursiva
      val_fat = num * Fatorial(num - 1);
      return (val_fat);
    }
}

