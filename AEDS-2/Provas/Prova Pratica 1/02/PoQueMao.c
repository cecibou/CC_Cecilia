
#include <stdio.h> 
#include <math.h>
#include <string.h>

int main() 
{
    //N é o numero de doces
    //x é o num de doces que o primeiro personagem tem que comer
    //y é o num de doces que o segundo personagem tem que comer
    //z é o num de doces que o terceiro personagem tem que comer
    //EVOLUI quantos personagem vão evoluir
    //RESTO controle
    // a1, a2, a3 personagens ordenados
    int N,x,y,z,RESTO,EVOLUI,a1,a2,a3;

    scanf("%d\n",&N);
    scanf("%d\n",&x);
    scanf("%d\n",&y);
    scanf("%d\n",&z);
    


//ordena a quantidade de doces 
   if (x > y){                                           
     if (y > z) {
         a1 = x;
         a2 = y;
         a3 = z;
     }       
     else{                                             
        if (x > z) {
            a1 = x;
            a2 = z;
            a3 = y;
         } else {
            a1 = z;
            a2 = x;
            a3 = y;
         }
     }  
   }          
     else{                                                 
        if (y > z){                                       
           if (x > z) {
              a1 = y;
              a2 = x;
              a3 = z;               
           }   
           else {
               a1 = y;
               a2 = z;
               a3 = x;
            }  
        }       
        else {
              a1 = z;
              a2 = y;
              a3 = x;
        }             
     }    

    EVOLUI = 0;
    RESTO = N;
    // printf("%d\n", RESTO);
    // printf("%d\n", a1);
    // printf("%d\n", a2);
    // printf("%d\n", a3);
    if (RESTO >= a3){
      EVOLUI++;
      RESTO = RESTO - a3;
    }
    if (RESTO >= a2){
      EVOLUI++;
      RESTO = RESTO - a2;
    }
    if (RESTO >= a1){
      EVOLUI++;
      RESTO = RESTO - a1;
    }
    printf("%d",EVOLUI);
    return 0;
}