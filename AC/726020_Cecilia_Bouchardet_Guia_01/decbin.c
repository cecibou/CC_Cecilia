#include <stdio.h>
#define MAX 50

int main()
{
	
	int num = 0;
	int vet_bin[MAX];
	int i = 0, j;
	int aux_num = num;

//Entrada do numero decimal

    printf("Entre com um numero na base decimal(inteiro):\t");
    scanf("%d", &num);


	while(num > 0)
	{
		
		vet_bin[i] = num % 2;
		i++;
		num = num / 2;
	}

//Saída já em binário

	printf("Binario: %d", aux_num);

// percorre o vetor para mostrar o número em binário
	
	for(j = i - 1; j >= 0; j--)
		printf("%d", vet_bin[j]);
	printf("\n");

	return 0;
}