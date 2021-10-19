//3 Fazer um método recursivo que recebe um número
// inteiro e positivo n e calcula o somatório abaixo.
//n + (n − 1) + ... + 1 + 0

#include <stdio.h>

//protótipo da função Somatorio
int Somatorio(int num);
int main(void)
{
  int num, s;
  
    printf("Digite o numero que deseja calcular o somatório:\t ");
    scanf("%d",&num);
    
    //chamada da função Somatorio
    s = Somatorio(num);
    
    printf("O somatório de %d = %d",num,s);

  return 0;
}
//Função recursiva que calcula o somatorio
//de um numero inteiro e positivo n
int Somatorio(int num)
{
  int val_som;
  
  if ( num <= 0 )
    //Caso negativo: não faz a soma
    return 0;
  else{
    //Chamada recursiva
    val_som = num +(Somatorio(num - 1));
    return (val_som);
  }
}

