/*11. Faça um programa que leia três valores inteiros e chame uma função que receba estes 3 valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variável, o segundo menor valor na variável do meio, e o maior valor na última variável. A função deve retornar o valor 1 se os três valores forem iguais e 0 se existirem valores diferentes. Exibir os valores ordenados na tela.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int *x,int *y);

int main(void){

    int a, b, c;

    printf("Entre com um numero:\n");
    scanf("%d", &a);
    printf("Entre com um numero:\n");
    scanf("%d", &b);
    printf("Entre com um numero:\n");
    scanf("%d", &c);

    if (Menor(a,b)==b) {
          swap(&a,&b);}
    if (Menor(b,c)==c) {
        swap(&b,&c);}
    if (Menor(a,b)==b) {
        swap(&a,&b);}
    if (Menor(b,c)==c) {
        swap(&b,&c);}

    printf("a b c = %d %d %d", a,b,c);
  
    if ((a==b) && (a==c)){
      return 1;
    }else {return 0;}  
}

void swap(int *x,int *y)
{
    int t;
    t   = *x;
    *x   = *y;
    *y   =  t;
}

int Menor(int x, int y){
  int r;
  if (x < y){
    r = x;
  } else {r = y;}
  return r;
}