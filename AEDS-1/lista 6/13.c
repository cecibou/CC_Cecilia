/*13. Crie uma função que receba como parâmetro um array e o imprima. Não utilize índices para percorrer o array, apenas aritmética de ponteiros.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int N;
    printf("Entre com a quantidade de valores que deseja:\t");
    scanf("%d", &N);
    float vet[N], *point=vet;

    for (int i = 0; i < N; i++){

        printf("Entre com um numero:\n");

        scanf("%f", &vet[i]);
    }
    
    for (int i = 0; i < N; i++){
        printf("\n%g", *point);
        point++;
    }

    return 0;
}
