#include <iostream>
#include "Relogio.cpp"
#include "Relogio.h"

using namespace std;


int main (){
int h, m, s;
Relogio *r1 = new Relogio(0,0,0);
r1-> setHora();
r1->getHora(h,m,s);
cout<<h<<":"<<m<<":"<<s<<endl;
r1-> avancarHora();
r1-> getHora(h,m,s);
cout<<h<<":"<<m<<":"<<s;
return 0;    
}