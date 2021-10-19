#include <stdio.h>

int main(void) {
    int limitemax, limitemin, i, soma=0;

        printf("Entre com o limite mínimo\n");
        scanf("%d", &limitemin);
        printf("Entre com o limite máximo\n");
        scanf("%d", &limitemax);

 // intervalo aberto os números nas pontas não entram.
        for(i=limitemin+1; i<limitemax; i++){
            if(i%2!=0){
                printf("%d\t", i);
                soma= soma + i;
            }
        }

        printf("\nA soma é: %d", soma);

return 0;
}