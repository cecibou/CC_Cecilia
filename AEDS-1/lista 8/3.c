/*3- Crie uma struct chamada ponto2d que tenha como atributos os pontos x,y e z. Crie duas estruturas
do tipo ponto2d chamadas ponto_inicial e ponto_final. Faça um menu com as seguintes opções e
implemente-as:
1 Digitar o valor do primeiro ponto
2 Digitar os valores do segundo ponto
3 Mostrar a distância entre os pontos
4 Sair
DICA: Distância entre dois pontos (x1, y1)(x2, y2): raiz quadrada de (x1 − x2)^2 + (y1 − y2)^2*/


#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<time.h>
#include <math.h>

typedef struct ponto2d {
   int x;
   int y;
   int z;
}ponto2d;

void ponto_inicial(ponto2d *x1, ponto2d *y1){
    printf("Entre com x1:");
    scanf("%d", &x1->x);
    printf("Entre com y1:");
    scanf("%d", &y1->y);
    fflush(stdin);
    printf("Pressione uma tecla para continuar...");
    getchar();    
}

void ponto_final(ponto2d *x2, ponto2d *y2){
    printf("Entre com x2:");
    scanf("%d", &x2->x);
    printf("Entre com y2:");
    scanf("%d", &y2->y);
    fflush(stdin);
    printf("Pressione uma tecla para continuar...");
    getchar();    
}

void distancia(x1, x2, y1, y2, z){
    z= pow(((x1 - x2)*(x1 - x2)) + ((y1 - y2)*(y1 - y2)), 1/2);
    printf("A distância eh %d\n",z);
    fflush(stdin);
    printf("Pressione uma tecla para continuar...");
    getchar();    
}

void menu(){
    system("clear || cls");
    printf("Escolha uma das opções abaixo: \n");
    printf(" 1 - Digitar o valor do primeiro ponto.\n");
    printf(" 2 - Digitar os valores do segundo ponto.\n");
    printf(" 3 - Mostrar a distância entre os pontos....\n");
    printf(" 4 - Sair....\n");
}

int main(){
    ponto2d x1, x2, y1, y2, z;
    int opcao;
    menu();
    printf("Entre com a opção: ");
    scanf("%d", &opcao);
    while(opcao != 4){
        switch(opcao){
            case 1:
                ponto_inicial(&x1,&y1);
                break;
            case 2:
                ponto_final(&x2,&y2);
                break;
            case 3:
                distancia(x1, x2, y1, y2, z);
                break;
                
            default:
                printf("Opção inválida\n");
        }
        fflush(stdin);
        menu();
        printf("Entre com a opção: ");
        scanf("%d", &opcao);
    }
    
    
    return 0;
}