//1. Escreva um programa que declare um inteiro, um real e um char, 
//e ponteiros para inteiro, real, e char. Associe as variáveis aos 
//ponteiros (use &). Modifique os valores de cada variável usando os 
//ponteiros. Imprima os valores das variáveis antes e após a modificação.

#include <stdio.h>

int main (){
//associação variavel e ponteiro    
    int a=1, *pointint= &a;
    float b=2.8, *pointfloat= &b;
    char c='d', *pointchar= &c;

        printf("O valor do inteiro antes eh %d \n",a);
        printf("O valor do real antes eh %g \n",b);
        printf("O valor do char antes eh %c \n",c);

//modificação das variaveis usando ponteiros        
        *pointint=5;
        *pointfloat=7.4;
        *pointchar='f';    
        
//o valor das minhas variaveis antes e depois da modificaçao
        printf("O valor do inteiro apos eh %d\n",*pointint);
        printf("O valor do real apos eh %g\n",*pointfloat);
        printf("O valor apos eh %c\n",*pointchar);

    return 0;
}
