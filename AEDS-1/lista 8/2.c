/*2- Crie uma struct para controlar ações de uma bolsa de valores com as seuigntes informações:
 Nome da compania
 Área de atuação da compania
 Valor atual da ação (em reais)
 Valor anterior
 Variação da ação em porcentagem (double), ou seja, quanto a ação cresceu ou caiu desde a
abertura da bolsa no dia*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<time.h>
#define TAM 2

typedef struct BolsaVal {
   char nome[50];
   char area[50];
   double valAtual;
   double valAnterior;
   double porcentagem;
}BolsaVal;


void cadastrarbolsa(BolsaVal *bolsa){
        printf("Entre com o nome da companhia:\n");
        scanf(" %[^\n]s", bolsa->nome);
        printf("Entre com a area de atuação:\n");
        scanf(" %[^\n]s", bolsa->area);
        printf("Entre com o valor atual da ação:\n");
        scanf("%lf", &bolsa->valAtual);   
        printf("Entre com o valor atual da ação:\n");
        scanf("%lf", &bolsa->valAnterior);
        printf("Entre com a variação da ação em porcentagem:\n");
        scanf("%lf", &bolsa->porcentagem);
        fflush(stdin);
}

void mostrar(BolsaVal bolsa) {
	printf("\nNome da compania: %s\n", bolsa.nome);
	printf("Área de atuação da compania: %s\n", bolsa.area);
	printf("Valor atual da ação: %0.2lf\n", bolsa.valAtual);
	printf("Valor anterior: %0.2lf\n", bolsa.valAnterior);
    printf("Variação da ação em porcentagem: %0.2lf\n", bolsa.porcentagem);
}


int main() {
    BolsaVal *vetor = (BolsaVal *) malloc(sizeof(BolsaVal)*TAM);
    
	for(int i = 0; i < TAM; i++) {
		printf("\nInforme os dados da %d bolsa\n", i+1);
		cadastrarbolsa(&vetor[i]);
	}

    for(int j = 0; j < TAM; j++){
        mostrar(vetor[j]);
    }  

	return 0;
}
