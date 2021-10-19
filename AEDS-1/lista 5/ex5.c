//5Fazer um método recursivo que multiplique
//dois números naturais, através de somas sucessivas
// ex.5*3= 5+5+5=15

#include <stdio.h>

//protótipo da função Sucessiva
int Sucessiva(int num1, int num2);
int main(void){
    int num1, num2, resposta;
    printf("Digite o numero que deseja multiplicando:\t ");
    scanf("%d",&num1);
    printf("Digite o numero que deseja multiplicador:\t ");
    scanf("%d",&num2);

    //chamada da função Sucesiva        
    printf("Resultado = %d", Sucessiva(num1,num2));

    return 0;
}
//Função recursiva que recebe dois numeros naturais e
//retorna a multiplicação, através de somas sucessivas
int  Sucessiva(int num1, int num2){
    if ((num1 == 0) || (num2 == 0)) {
      return(0);
    }
    else {
           if (num2 == 1){
              return(num1);
           }
          else {
                  return(num1 + Sucessiva(num1,--num2));
          }
    }
         
}
