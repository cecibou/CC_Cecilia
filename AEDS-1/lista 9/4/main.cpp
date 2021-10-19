/*4. Denir uma classe que represente um círculo. Esta classe deve possuir métodos
Privados para:
 calcular a área do círculo;
 calcular a distância entre os centros de 2 círculos;
 calcular a circunferência do círculo.
E métodos Públicos para:
 definir o raio do círculo, dado um número real;
 aumentar o raio do círculo, dado um percentual de aumento;
1
 denir o centro do círculo, dada uma posição (X,Y);
 imprimir o valor do raio;
 imprimir o centro do círculo.
 imprimir a área do círculo.
Criar um programa principal para testar a classe.*/

#include <iostream>
#include "Circulo.h"
#include "Circulo.cpp"
using namespace std;

void menu()
{
    system("cls || clear");
    cout << "1 - imprimir a área do círculo" << endl;
    cout << "2 - calcular a distância entre os centros de 2 círculos" << endl;
    cout << "3 - calcular a circunferência do círculo" << endl;
    cout << "4 - aumentar o raio do círculo, dado um percentual de aumento" << endl;
    cout << "5 - imprimir o valor do raio" << endl;
    cout << "6 - imprimir o centro do círculo"<<endl;
    cout << "7 - definir centro" << endl;
    cout << "8 - definir centro" << endl;
    cout << "9 - Sair" << endl;
}

int main()
{
    int opcao, a, b;
    float p, r;
    Circulo *c1 = new Circulo();
    menu();
    cin >> opcao;
    cin.ignore();
    while (opcao != 9)
    {
        switch (opcao)
        {
        case 1:
            cout<<"Imprimindo a área do círculo..."<<endl;
            cout<<"A area eh: "<<c1->getArea()<<endl;
            getchar();
            break;
        case 2:
            cout<<"Calculando a distância entre os centros de 2 círculos..."<<endl;
             cout<<"O segundo circulo tem centro igual a (2,2)."<<endl;
            cout<<"A distância eh: "<<c1->getDistancia(2,2)<<endl;
            getchar();
            break;
        case 3:
            cout<<"Calculando a circunferência do círculo..."<<endl;
            cout<<"a circuferencia: "<<c1->getCircuferencia()<<endl;
            getchar();
            break;
        case 4:
            cout<<"Entre com o valor a ser aumentado"<<endl;
            cin >> p;
            c1-> aumentarRaio(p);
            cout<<"Novo raio eh: "<<c1->getRaio()<<endl;
            getchar();
            break;
        case 5:
            cout<<"Imprimindo o valor do raio"<<endl;
            cout<< c1->getRaio();
            getchar();
            break;
        case 6:
            cout<<"Imprimindo o centro do círculo "<<endl;
            c1->getCentro(a,b);
            cout<<"O centro eh:"<<"("<<a<<","<<b<<")"<<endl;
            getchar();
            break;
        case 7:
            cout<<"Entre com o valor do raio"<<endl;
            cin >> r ;
            c1-> setRaio(r);
            cout<<"O raio eh: "<<c1->getRaio()<<endl;
            getchar();
            break;
        case 8:
            cout<<"Entre com o valor do centro X"<<endl;
            cin >> a;
            cout<<"Entre com o valor do centro Y"<<endl;
            cin >> b;
            c1-> setCentro(a,b);
            cout<<"O centro eh:"<<"("<<a<<","<<b<<")"<<endl;
            getchar();   
        }
        menu();
        cin >> opcao;
        cin.ignore();
    }


    return 0;
}