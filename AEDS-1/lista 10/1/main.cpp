#include <iostream>
#include "Nota.cpp"
#include "Nota.h"
#include <string.h>

using namespace std;


int main (){
char n[20]="0", pe[20]="p";
int q=0;
float p=0;

Nota *n1 = new Nota("22-33","peca",0,0.0);
strncpy(n, "1234", 20);
strncpy(pe, "peca qualquer", 20);
q = 5;
p = 29.90;

n1->setNum(n);
n1->setPeca(pe);
n1->setQuant(q);
n1->setPreco(p);

cout<<"\n Quantidade comprada eh: "<<n1->getQuant()<<endl;
cout<<"\nPreço da peça eh: "<<n1->getPreco()<<endl;
return 0;    
}