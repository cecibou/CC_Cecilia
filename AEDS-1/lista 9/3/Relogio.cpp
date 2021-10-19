/*Crie uma classe em C++ chamada Relogio para armazenar um horário, composto por hora,
minuto e segundo. A classe deve representar esses componentes de horário e deve apresentar os
métodos descritos a seguir:
 um método chamado setHora, que deve receber o horário desejado por parâmetro (hora,
minuto e segundo);
 um método chamado getHora para retornar o horário atual, através de 3 variáveis passadas
por referência;
 um método para avançar o horário para o próximo segundo (lembre-se de atualizar o minuto
e a hora, quando for o caso).*/

#include "Relogio.h"
#include <iostream>
#include <string.h>

using namespace std;

Relogio:: Relogio( int hora, int min, int seg){

this-> hora = hora;
this-> min = min;
this-> seg = seg;

}


Relogio::Relogio(){

}

void Relogio:: setHora(){
    this -> hora= hora;
    this -> min= min;
    this -> seg= seg; 
}

void Relogio:: avancarHora(){
    if(this-> seg<60)
        this-> seg++;
        else this -> seg=0;
    if (this-> min<60)
        this-> min++;
        else this -> min=0;
    if (this-> hora<24)
        this-> hora++;
        else this -> min=0;
    
}

void Relogio::getHora(int &hora, int &min, int &seg){
    hora= this -> hora;
    min= this -> min;
    seg= this -> seg;

}
