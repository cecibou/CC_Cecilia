/*15. Escreva uma função que receba um array de inteiros V e os endereços de duas variáveis inteiras,min e max, e armazene nessas variáveis o valor mínimo e máximo do array. Escreva também uma função main que use essa função.*/

#include <stdio.h>
#include <stdlib.h>

void minmax(int *min, int *max, int vet[], int N);

int main(void){
    int max=0, min=0, N;
    printf("Entre com a quantidade de valores que deseja:\t");
    scanf("%d", &N);

    int vet[N];
    for (int i = 0; i < N; i++){
        printf("Entre com um numero:\n");
        scanf("%d", &vet[i]);
    }
    minmax(&min, &max, vet, N); 
    return 0;
}

void minmax(int *min, int *max, int vet[], int N){
    *min=*max=vet[0];
    int i;
    for(i=0; i < N; i++){
        if(*min > vet[i]){
            *min = vet[i];
        }
        if(*max < vet[i]){
            *max = vet[i];
        }
    }
    printf("O menor eh %d e o maior eh %d", *min, *max);
}