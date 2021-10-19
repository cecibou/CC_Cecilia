/*4. Dena uma estrutura que irá representar bandas de música. Essa estrutura deve ter o nome  da banda,que tipo de música ela toca, o numero de integrantes e em que posicao do ranking       essa banda está dentre as suas 5 bandas favoritas. Crie um looping para preencher as 5 estruturas de bandas criadas no exemplo passado. Após criar e preencher, exiba todas as informações das bandas/estruturas.*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<time.h>
#define TAM 5

typedef struct Bandas {
   char nomeDaBanda[50];
   char tipoDeMusica[50];
   char numeroDeIntegrantes;
   char posicaoDoRanking;
}Bandas;


void cadastrarBanda(Bandas *banda){
        printf("Entre com o nome da Banda:\n");
        scanf(" %[^\n]s", banda->nomeDaBanda);
        printf("Entre com tipo de musica:\n");
        scanf(" %[^\n]s", banda->tipoDeMusica);
        printf("Entre com o numero de integrantes:\n");
        scanf("%d", &banda->numeroDeIntegrantes);   
        printf("Entre com a posicao no Top 5:\n");
        scanf("%d", &banda->posicaoDoRanking);
        fflush(stdin);
}

void mostrar(Bandas banda) {
	printf("\nNome da banda: %s\n", banda.nomeDaBanda);
	printf("Tipo de musica: %s\n", banda.tipoDeMusica);
	printf("Numero de integrantes: %d\n", banda.numeroDeIntegrantes);
	printf("Ranking: %d\n", banda.posicaoDoRanking);
}

int main() {
    Bandas *vetor = (Bandas *) malloc(sizeof(Bandas)*TAM);

	for(int i = 0; i < TAM; i++) {
		printf("\nInforme os dados da %d banda\n", i+1);
		cadastrarBanda(&vetor[i]);
	}

    for(int j = 0; j < TAM; j++){
        mostrar(vetor[j]);
    }
        
    return 0;
}