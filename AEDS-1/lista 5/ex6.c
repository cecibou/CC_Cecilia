//6. Fazer um método recursivo que calcule o 
//MDC (máximo divisor comum) de dois inteiros 
//positivos m e n

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//protótipo da função countDigitos
int mdc(int a, int b);

int main(){
  int a,b,i;
  printf("Informe o valor de A \n");
  scanf(" %d", &a);
  printf("Informe o valor de B \n");
  scanf(" %d", &b);
  if(a!=b) //Verifica se os valores são iguais
    i = mdc(a,b);
  else
    i=a;
  printf("MDC: %d\n",i);
 
    return 0;
}

int mdc(int a, int b){
    if(b==0)
        return a;
    else
        return mdc(b,a%b); //Acha o MDC dividindo o a por b recursivamente
}