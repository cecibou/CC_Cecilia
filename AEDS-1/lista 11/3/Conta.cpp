#include "Conta.h"
#include <iostream>
#include <string.h>
using namespace std;

Conta::Conta(float saldo){
    this-> saldo= saldo;
}

Especial::Especial(float saldo):Conta(saldo){
    
}

float Especial:: sacar(){
    float d;   
    cout<<"Quanto você deseja sacar?"<<endl;
    cin>>d;
    this-> saldo = (saldo - d)-(d * 0.001);
    return saldo;
}

float Conta:: depositar(){
    float d;
    cout<<"Quanto você deseja depositar?"<<endl;
    cin>>d;
    this-> saldo = (saldo + d);
    return saldo;
}

float Conta:: sacar(){
    float d;    
    cout<<"Quanto você deseja sacar?"<<endl;
    cin>>d;
    this-> saldo = (saldo - d)-(d * 0.005);
    return saldo;
}

float Conta::obter(){
    return saldo;
}