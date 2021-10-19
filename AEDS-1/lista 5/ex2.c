//2 Fazer um método recursivo que recebe um número inteiro n e retorna o n-ésimo termo da equação
//de recorrência abaixo:
//T(1) = 2
//T(2) = 3
//T(n) = 5 ∗ n + T(n − 1)n


#include <stdio.h>

//protótipo da função Serie
int Serie(int n);
int main(void){
    int n;
        printf("Digite o numero que deseja entrar na equação:\t ");
        scanf("%d",&n);
        
        //chamada da função Serie
        printf("%d", Serie(n));
  return 0;
}
//Função recursiva que recebe um número inteiro n 
//e retorna o n-ésimo termo da equação
int  Serie(int n){
    int  resposta;
    if(n==2){
        //recorrência
        resposta = 3;
    }else{
            //chamada recursiva
            resposta = 5*n + Serie(n-1)*n;
            }
return  resposta;
            }