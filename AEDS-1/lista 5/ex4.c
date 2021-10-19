//4 Fazer um método recursivo que imprima 
//de um número natural em base binária

#include <stdio.h>

//protótipo da função Base binária
int Bbinaria(int num);
int main(void){
  int num, b;
  
    printf("Digite o numero que deseja passar para a base binária:\t ");
    scanf("%d",&num);
    
    //chamada da função Base binária
      b=Bbinaria(num);

  return 0;
}
//Função recursiva que pega um numero inteiro n
// passa para a base binária 
int Bbinaria(int num){
  
  
  if ( num/2!=0){
    //Caso divisão não exata -> retorna 1
    Bbinaria(num/2);
    printf("%d",num%2);
}else{
    //Chamada recursiva
    printf("%d",num%2);
  }
}