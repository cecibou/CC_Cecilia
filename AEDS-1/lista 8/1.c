/*1-Crie um programa que permita armazenar o nome, a altura e da data de nascimento de até 10 pessoas.
Cada pessoa deve ser representada por uma struct dentro de um vetor. A data de nascimento também
deve ser uma struct. O nome e a altura de cada pessoa devem ser informados pelo teclado. A geração
da data de nascimento deve ser feita aleatoriamente através de uma função*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<time.h>
#define TAM 10

typedef struct Data {
   short dia;
   short mes;
   short ano;
}Data;

typedef struct Pessoa {
   char nome [30];
   float altura;
   Data nascimento;
}Pessoa;

void gerarData( Data *dataNascimento){
    srand(time(NULL));
    dataNascimento->dia= rand()%31+1;
    dataNascimento->mes= rand()%12+1;
    dataNascimento->ano= 1950 + (rand()%71);
}

void mostrarPessoa(Pessoa p){
    printf("Nome: %s\n", p.nome);
    printf("Altura:%g\n", p.altura);
    printf("Data de nascimento: %02d/%02d/%02d\n", p.nascimento.dia, p.nascimento.mes, p.nascimento.ano);
}

void cadastrarPessoa(Pessoa *p){
    printf("Entre com o nome: ");
    scanf(" %[^\n]s", p->nome);
    printf("Entre com a altura: ");
    scanf("%f", &p->altura);
    gerarData(&p->nascimento);
    fflush(stdin);
}


int main(){
    
    Pessoa *vetor = (Pessoa *) malloc(sizeof(Pessoa)*TAM);

   for(int i=0; i<TAM; i++)
   cadastrarPessoa(&vetor[i]);

   for(int i=0; i<TAM; i++)
    mostrarPessoa(vetor[i]);
    
    return 0;
}