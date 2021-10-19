/*3. Crie uma classe Aluno com atributos que armazenem o nome, a série que cursa e o grau. Crie
um getter e um setter, além de uma variável static que conte a quantidade de objetos criados, a
ser utilizada no construtor e destrutor. Crie um vetor com 15 objetos desta classe e preencha os
dados através do setter.*/

#include <iostream>
#include "Aluno.cpp"
#include "Aluno.h"
#include <string.h>

using namespace std;


int main (){
string n="";
int s=0,g=0;

Aluno *e1 = new Aluno(" ",0,0);

cout<<"\n Entre com o nome: "<<endl;
cin>>n;
e1->setnome(n);
cout<<"\n Entre com o serie: "<<endl;
cin>>s;
e1->setserie(s);
cout<<"\n Entre com o grau: "<<endl;
cin>>g;
e1->setgrau(g);

cout<<"\n O nome eh: "<<e1->getnome()<<endl;
cout<<"\n A serie eh: "<<e1->getserie()<<endl;
cout<<"\n O grau eh: "<<e1->getgrau()<<endl;

return 0;    
}