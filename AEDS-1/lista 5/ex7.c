//7. Fazer um método recursivo que conte 
//os dígitos de um determinado número.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//protótipo da função countDigitos
int countDigitos(int n, int i);

int main(void){
    int n;
    printf("Entre com o número que deseje ver o número de digitos\n");
    scanf("%d", &n);
    int x = countDigitos(n, 0);
    printf("%d",x);
    return 0;
}
//Função recursiva que recebe numero natural e
//retorna dígitos ele tem
int countDigitos(int n, int i){
    if(n!=0){
        i+=countDigitos(n/10, i);//Divide o número por 10
        i++;
    }
    return i;
}
