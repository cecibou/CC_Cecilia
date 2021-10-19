//Escreva um programa que receba dois structs do tipo “dma” (dd/mm/aaaa), cada um representando   //uma data válida e calcule qual é a data mais antiga e a data mais recente.

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<time.h>

typedef struct Data { //primeiro Struct
   short dia;
   short mes;
   short ano;
}Data;


void gerarData( Data *dataramd, int r){ //gera data do primeiro Strut
    srand(time(NULL));
    dataramd->dia= rand()%31+1;
    dataramd->mes= rand()%12+1;
    dataramd->ano= 1950 + (rand()%r);
}

int datetoint(Data *dt){
 int ano, mes, dia;
   ano = dt->ano;
   mes = dt->mes;
   dia = dt->dia;
   return ano * 10000 + mes*100 + dia;
}

int maior(Data *dt1, Data *dt2){
 int res, nd1, nd2;
   
   nd1 = datetoint(&dt1);
   nd2 = datetoint(&dt2);
   
 if (nd1 > nd2){
     res = 1;    
 }else{
     res = 0;
 }
 return res;
}

int main (){
    Data dt1, dt2; //data é um número pequeno 
    gerarData(&dt1,71); // primeira data
    gerarData(&dt2,50); //segunda data
   // teste printf("%d",datetoint(&dt1));

    if (maior(&dt1,&dt2)==1){ // condicional de data mais antiga e mais recente
        printf("A data mais antiga eh: %d\n", datetoint(&dt2));
        printf("A data mais recente eh: %d\n", datetoint(&dt1));

    }else{
        printf("A data mais antiga eh: %d\n", datetoint(&dt1));
        printf("A data mais recente eh: %d\n", datetoint(&dt2));
    }

}
