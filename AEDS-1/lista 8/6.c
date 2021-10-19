/*6. Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve conter a
matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da terceira prova.
 (a) Permita ao usuário entrar com os dados de 5 alunos.
 (b) Encontre o aluno com maior nota da primeira prova.
 (c) Encontre o aluno com maior média geral.
 (d) Encontre o aluno com menor média geral
 (e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para aprovação*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno{
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
}aluno;

int maiorNotaProva1(aluno turma[5]){
    int maior = 0;
    for(int i = 0; i < 5; i++){
        if(turma[i].nota1 > turma[maior].nota1)
            maior = i;
    }
    return maior;
}

float mediaGeral(float p1, float p2, float p3){
    return(p1 + p2 + p3)/3;
}

int maiorMedia(aluno turma[5]){
    int n = 0;
    for(int i = 0; i < 5; i++){
        if(mediaGeral(turma[i].nota1, turma[i].nota2, turma[i].nota3) > mediaGeral(turma[n].nota1, turma[n].nota2, turma[n].nota3))
            n = i;
    }
    return n;
}

int menorMedia(aluno turma[5]){
    int n = 0;
    for(int i = 0; i < 5; i++){
        if(mediaGeral(turma[i].nota1, turma[i].nota2, turma[i].nota3) < mediaGeral(turma[n].nota1, turma[n].nota2, turma[n].nota3))
            n = i;
    }
    return n;
}

int main(){
    aluno turma[5];
    int matricula;
    char nome[30];
    float nota1, nota2, nota3;

    for (int i = 0; i < 5; i++){
        printf("Digite o numero de matricula: \n");
        scanf("%d", &matricula);
        printf("Digite o nome: \n");
        scanf(" %[^\n]s", nome);
        printf("Digite a nota da primeira prova: \n");
        scanf("%f", &nota1);
        printf("Digite a nota da segunda prova: \n");
        scanf("%f", &nota2);
        printf("Digite a nota da terceira prova: \n");
        scanf("%f", &nota3);

        turma[i].matricula = matricula;
        strcpy(turma[i].nome,nome);
        turma[i].nota1 = nota1;
        turma[i].nota2 = nota2;
        turma[i].nota3 = nota3;

        printf("\n");
    }

    printf("%s foi o aluno que tirou a maior nota na primeira prova!\n", turma[maiorNotaProva1(turma)].nome);
    printf("%s foi o aluno com a maior media!\n", turma[maiorMedia(turma)].nome);
    printf("%s foi o aluno com a menor media\n", turma[menorMedia(turma)].nome);
    printf("\nFinal\n\n");
    for(int k = 0; k < 5; k++){
        float media = mediaGeral(turma[k].nota1, turma[k].nota2, turma[k].nota3);
        if(media >= 6){
            printf("%s foi APROVADO!\n", turma[k].nome);
        }else{
            printf("%s foi REPROVADO!\n", turma[k].nome);
        }
    }
    return 0;
}