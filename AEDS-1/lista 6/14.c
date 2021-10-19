/*14. Implemente uma função que receba como parâmetro um array de números reais de tamanho N e retorne quantos numeros negativos há nesse array. Essa função deve obedecer ao prototipo:int negativos(float *vet, int N);*/

#include <stdio.h>
#include <stdlib.h>

int negativos(float *vet, int N);

int main(void){
    int N;
    printf("Entre com a quantidade de valores que deseja:\t");
    scanf("%d", &N);
    float vet[N];

    for (int i = 0; i < N; i++){

        printf("Entre com um numero:\n");

        scanf("%f", &vet[i]);
    }

    printf("%d numeros negativos",negativos(vet,N));
    
    return 0;
}

int negativos(float *vet, int N){
    int count=0;     
    for(int i = 1; i <= N; i++){         
        if(vet[i] < 0){             
            count++;         
        }     
    }    
 return count;
}