/*7. Faça um programa que armazene em um registro de dados (estrutura composta) os dados de um
funcionário de uma empresa, compostos de: Nome, Idade, Sexo (M/F), CPF, Data de Nascimento,
Codigo do Setor onde trabalha (0-99), Cargo que ocupa (string de até 30 caracteres) e Salário. Os
dados devem ser digitados pelo usuário, armazenados na estrutura e exibidos na tela.*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<time.h>

typedef struct Dados {
   char nome[30];
   char sexo[1];
   int cpf;
   char data[11];
   int codigo;
   char cargo[30];
   float salario

}Dados;

void cadastrar(Dados * dados){
        printf("Entre com o nome :\n");
        scanf(" %[^\n]s", dados->nome);
        printf("Entre com o sexo(M/F):\n");
        scanf(" %[^\n]s", dados->sexo);
        printf("Entre com a data:\n");
        scanf(" %[^\n]s", dados->data);
        printf("Entre com o cargo que ocupa:\n");
        scanf(" %[^\n]s", dados->cargo);
        printf("Entre com o numero do CPF:\n");
        scanf("%d", &dados->cpf);   
        printf("Entre com valor do salario:\n");
        scanf("%f", &dados->salario);
        printf("Entre com o codigo do setor(0-99):\n");
        scanf("%d", &dados->codigo);
        fflush(stdin);
}

void mostrar(Dados dados) {
	printf("Entre com o nome %s:\n", dados.nome);
    printf("Entre com o sexo(M/F):%s\n", dados.sexo);
    printf("Entre com a data:%s\n",  dados.data);
    printf("Entre com o cargo que ocupa%s:\n", dados.cargo);
    printf("Entre com o numero do CPF:%d\n", dados.cpf);
    printf("Entre com valor do salario:%f\n", dados.salario);
    printf("Entre com o codigo do setor(0-99)%d:\n", dados.codigo);
}

int main() {
    int num;
    printf("Entre com o numero de funcionarios:\n");
    scanf("%d", &num);
    Dados *vetor = (Dados *) malloc(sizeof(Dados)*num);

	for(int i = 0; i < num; i++) {
		printf("\nInforme os dados do %d funcionario\n", i+1);
		cadastrar(&vetor[i]);
	}

    for(int j = 0; j < num; j++){
        printf("\n");
        mostrar(vetor[j]);
    }
        
    return 0;
}