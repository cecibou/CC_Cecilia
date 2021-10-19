//5. Na questão anterior crie uma função que peça o nome de uma banda ao usuário e diga se ela está entre suas bandas favoritas ou não.

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<time.h>
#define TAM 2

typedef struct Bandas {
   char nomeDaBanda[50];
   char tipoDeMusica[50];
   char númeroDeIntegrantes;
   char posiçãoDoRanking;
}Bandas;


void cadastrarBanda(Bandas *banda){
        printf("Entre com o nome da Banda:\n");
        scanf(" %[^\n]s", banda->nomeDaBanda);
        printf("Entre com tipo de musica:\n");
        scanf(" %[^\n]s", banda->tipoDeMusica);
        printf("Entre com o número de integrantes:\n");
        scanf("%d", &banda->númeroDeIntegrantes);   
        printf("Entre com a posição no Top 5:\n");
        scanf("%d", &banda->posiçãoDoRanking);
        fflush(stdin);
}

void exibir(Bandas banda) {
	printf("\nNome da banda: %s\n", banda.nomeDaBanda);
	printf("Tipo de musica: %s\n", banda.tipoDeMusica);
	printf("Numero de integrantes: %d\n", banda.númeroDeIntegrantes);
	printf("Ranking: %d\n", banda.posiçãoDoRanking);
}

void pesquisarBanda(Bandas banda[], char *nome){
    for(int i=0; i < TAM; i++){
        if(strcmp(banda[i].nomeDaBanda, nome) == 0){
            printf("Registro encontrado!\n");
            exibir(banda[i]);
        } else{
            printf("Registro nao encontrado...\n");
        }
    }
}

int main() {
    Bandas *vetor = (Bandas *) malloc(sizeof(Bandas)*TAM);

	for(int i = 0; i < TAM; i++) {
		printf("\nInforme os dados da %d banda\n", i+1);
		cadastrarBanda(&vetor[i]);
	}

    for(int j = 0; j < TAM; j++)
        mostrar(vetor[j]);

    char nome[20];
    printf("\nEntre com o nome a ser pesquisado: ");
    scanf("%[^\n]s", nome);
    pesquisarBanda(vetor, nome);

	return 0;
}


    