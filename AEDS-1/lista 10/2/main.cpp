#include <iostream>
#include "Empregado.cpp"
#include "Empregado.h"
#include <string.h>

using namespace std;


int main (){
char n[20]="0", pe[20]="p";
float p=0;

Empregado *e1 = new Empregado(" "," ",0);
Empregado *e2 = new Empregado(" "," ",0);
strncpy(n, "Cecilia", 20);
strncpy(pe, "Capurucho", 20);
p = 1000;

e1->setnome(n);
e1->setsobrenome(pe);
e1->setsalario(p);

cout<<"\n O salario eh: "<<e1->getsalario()<<endl;

e2->setnome(n);
e2->setsobrenome(pe);
e2->setsalario(p);
e2->aumento();

cout<<"\n O salario novo eh: "<<e2->getsalario()<<endl;
return 0;    
}