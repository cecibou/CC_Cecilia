//6-Crie um programa que contenha uma função que permita 
//passar por parâmetro dois numeros inteiros A e B. A 
//função deverá calcular a soma entre estes dois números e
//armazenar o resultado na variável A. Esta função não deverá
//possuir retorno, mas deverá modificar o valor do primeiro
// parâmetro. Imprima os valores de A e B na função principal.

#include<stdio.h>

//prototipo função Soma
int Soma (int *a, int b);

int main(){
    int num1, num2;

    //entrada das variaveis lidas do teclado
    printf("Informe o primeiro numero\n");
    scanf("%i",&num1);
    printf("Informe o segundo numero\n");
    scanf("%i",&num2);

    //chamada função
    Soma(&num1, num2);

//saída das variaveis     
    printf("Numero 1 = %i\nNumero 2 = %i", num1, num2);
}

int Soma (int *a, int b){
    *a = *a + b;
}