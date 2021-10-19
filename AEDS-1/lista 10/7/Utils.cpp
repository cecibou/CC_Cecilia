#include "Utils.h"
#include <iostream>
#include <string.h>
using namespace std;

Utils::Utils(){

}

double Utils::conta(double F){
    if(F<-459.67){
        cout<<"Número Invalido!!!"<<endl;
        return 0;
    }else
    return 5*(F-32)/9;
}