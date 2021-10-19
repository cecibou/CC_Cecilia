/*3. Crie uma classe para representar uma conta corrente, com métodos para depositar uma quantia,
sacar uma quantia e obter o saldo. Para cada saque será debitada também uma taxa de operação
equivalente à 0, 5% do valor sacado. Crie, em seguida, uma subclasse desta classe anterior para
representar uma conta corrente de um cliente especial. Clientes especiais pagam taxas de operação
de apenas 0, 1% do valor sacado. Faça testes com as duas classes e verique seus resultados.*/

#include <iostream>
#include "Conta.cpp"
#include "Conta.h"
#include <string.h>

using namespace std;

int main (){
    float d =0;
    cout<< "Qual valor da sua conta atual?"<<endl;
    cin>>d;

    Conta *c1 = new Conta(d);
    Especial *e1 = new Especial(d);

    int i;
    cout<<"Escolha seu tipo de Cliente:"<<endl;
    cout<<"(1) Cliente Normal e (2) Cliente Especial:"<<endl;
    cin>>i;

    if(i=1){
        cout<<"Você escolheu Cliente Normal:"<<endl;
        c1-> sacar();
        cout<<"Valor da sua conta atual eh: "<<c1-> obter()<<endl;
        c1-> depositar();
        cout<<"Valor da sua conta atual eh: "<<c1-> obter()<<endl;

    }else if(i=2){
        cout<<"Você escolheu Cliente Especial:"<<endl;
        e1-> sacar();
        cout<<"Valor da sua conta especial atual eh: "<<e1-> obter()<<endl;
        e1-> depositar();
        cout<<"Valor da sua conta especial atual eh: "<<e1-> obter()<<endl;

    }else{
        cout<<"Você escolheu Cliente Inexistente:"<<endl;
    }
return 0;    
}