/*Escreva um algoritmo que leia 20 números positivos ou negativos. Ao final de seu algoritmo você deve imprimir a soma dos positivos e o total de números negativos.*/

#include <stdio.h>

int main(void) {
    int somapos=0, totalneg=0, i, num;

        for(i=1; i<=20; i++){
            printf("Próximo número %d/20:", i);
            scanf("%d", &num);
// o zero não altera a soma dos positivos, mas é necessário entrar para nao alterar a quantidade dos negativos.           
            if(num>=0){
                somapos= somapos + num;
            }else{
                totalneg++;
            }

        }

        printf("\nA soma dos positivos é: %d", somapos);
        printf("\nA quantidade de negativos é: %d", totalneg);

return 0;
}