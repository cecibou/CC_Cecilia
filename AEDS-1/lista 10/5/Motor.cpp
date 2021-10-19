#include "Motor.h"
#include <iostream>
#include <string.h>
using namespace std;

Motor::Motor( int cilindros, int potencia){

this->cilindros = cilindros;
this->potencia = potencia; 

}

Motor::Motor(){
this->cilindros = 0;
this->potencia = 0; 
}

void Motor:: setcilindros(int cilindros){
    this->cilindros= cilindros;
    
}

void Motor:: setpotencia(int potencia){
    this->potencia= potencia;
    

}


int Motor::getcilindros(){

return cilindros;

}

int Motor::getpotencia(){

return potencia;

}

void Motor::print(){
    cout<<"\n O cilindros eh: "<< this->cilindros<<endl;
    cout<<"\n O potencia eh "<<this->potencia<<endl;
    
}