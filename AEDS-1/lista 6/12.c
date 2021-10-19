/*12. Elabore uma função que receba duas strings como parâmetros e verifique se a segunda string ocorre dentro da primeira. Use aritmética de ponteiros para acessar os caracteres das strings.*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool contains(char string[], char padrao[]){
    bool resp;
    int j, i;
    for(i=0; i < (strlen(string) - strlen(padrao)); i++){
        resp= true;
        for(j=0; j < strlen(padrao); j++){
            if(string[i+j] != padrao[j]){
                resp= false;
                j= strlen(padrao);
            }
        }
        if(resp==true)
        i= strlen(string);
    }
    return resp;
}

int main(){
    
    char s1[50], s2[50];

    printf("Entre com a expressão \n");
    scanf("%s", &s1);
    printf("Entre com a palavra \n");
    scanf("%s", &s2);

    if (contains(s1,s2)){
        printf("Contem");

    }else{
        printf("Não contém");}

    return 0;
}
