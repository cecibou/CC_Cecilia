/*6. Is em Java - Crie um metodo iterativo que recebe uma string e retorna true se a mesma e
composta somente por vogais. Crie outro metodo iterativo que recebe uma string e retorna
true se a mesma e composta somente por consoantes. Crie um terceiro metodo iterativo que
recebe uma string e retorna true se a mesma corresponde a um numero inteiro. Crie um quarto
metodo iterativo que recebe uma string e retorna true se a mesma corresponde a um numero
real. Na sada padr~ao, para cada linha de entrada, escreva outra de sada da seguinte forma X1
X2 X3 X4 onde cada Xi e um booleano indicando se a e entrada e: composta somente por vogais
(X1); composta somente somente por consoantes (X2); um numero inteiro (X3); um numero real
(X4). Se Xi for verdadeiro, seu valor sera SIM, caso contrario, N~AO.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h> 


bool isFim(char s[]) {

    return (strlen(s) == 3 && s[0] == 'F' && s[1] == 'I' && s[2] == 'M');
}

bool vogal(char s[]){
    bool resposta=true;
    for(int i=0; i<strlen(s);i++){
        if(s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U' && s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u'){
            resposta=false;
        }

    }
    return resposta;
}

bool consoante(char s[]){
    bool resposta=true;
    for(int i=0; i<strlen(s);i++){
        if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'|| s[i] != '1' || s[i] != '2' || s[i] != '3' || s[i] != '4' || s[i] != '5' || s[i] != '6' || s[i] != '7' || s[i] != '8' || s[i] != '9'||s[i] == '.' || s[i] == ','){
            resposta=false;
        }
    }
    
    return resposta;
}

bool inteiro(char s[]){
    bool resposta=true;
    for(int i=0; i<strlen(s);i++){
        if(s[i] != '0' && s[i] != '1' && s[i] != '2' && s[i] != '3' && s[i] != '4' && s[i] != '5' && s[i] != '6' && s[i] != '7' && s[i] != '8' && s[i] != '9'){
            resposta=false;
        }
        else if(s[i] == '.' || s[i] == ','){
            resposta=false;
        }
    }
    
    return resposta;  

}
    

bool real(char s[]){
    bool resposta=true;
    bool simbolo=false;
    for(int i=0; i<strlen(s);i++){
        if(s[i] == '.' || s[i] == ','){
            if(simbolo==false){
                simbolo=true;
            }else{                    
            resposta=false;
            i = strlen(s);
            }
        }
        else if(s[i] != '0' && s[i] != '1' && s[i] != '2' && s[i] != '3' && s[i] != '4' && s[i] != '5' && s[i] != '6' && s[i] != '7' && s[i] != '8' && s[i] != '9'){
            resposta=false;
            i = strlen(s);
        }
        
    }
    
    return resposta;

}

main (){
    char entrada[1000][100];
    int numEntrada = 0;
    

    // Leitura da entrada padrao
    do {
        scanf(" %[^\n]s", entrada[numEntrada]);
    } while (isFim(entrada[numEntrada++]) == false);
        numEntrada--; // Desconsiderar ultima linha contendo a palavra FIM

    //Leitura da entrada padrao
    for(int i=0;i<numEntrada;i++){
    if(vogal(entrada))
        printf("SIM ");
    else
        printf("NAO ");
    if(consoante(entrada))
        printf("SIM ");
    else
        printf("NAO "); 
        
    if(inteiro(entrada))
        printf("SIM ");
    else
        printf("NAO "); 
    if(real(entrada))
        printf("SIM\n");
    else
        printf("NAO\n");   
    
        
    } 
                

        
}