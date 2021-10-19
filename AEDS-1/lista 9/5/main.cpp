#include <iostream>
#include "Televisao.h"
#include "Televisao.cpp"
using namespace std;

void menu()
{
    system("cls || clear");
    cout << "1 - Para aumentar o volume" << endl;
    cout << "2 - Para abaixar o volume" << endl;
    cout << "3 - Para aumentar o canal" << endl;
    cout << "4 - Para decrementar o canal" << endl;
    cout << "5 - Para setar um canal" << endl;
    cout<<"6 - Verificar status..."<<endl;
    cout << "7 - Para desligar a TV..." << endl;
}

int main()
{
    int opcao;
    Televisao *t1 = new Televisao();
    menu();
    cin >> opcao;
    cin.ignore();
    while (opcao != 7)
    {
        switch (opcao)
        {
        case 1:
            cout<<"Aumentando o volume..."<<endl;
            t1->aumentarVolume();
            cout<<"Novo volume: "<<t1->getVolume()<<endl;
            getchar();
            break;
        case 2:
            cout<<"Abaixando o volume..."<<endl;
            t1->diminuirVolume();
            cout<<"Novo volume: "<<t1->getVolume()<<endl;
            getchar();
            break;
        case 3:
            cout<<"Aumentando o canal..."<<endl;
            t1->aumentarCanal();
            cout<<"Novo canal: "<<t1->getCanal()<<endl;
            getchar();
            break;
        case 4:
            cout<<"Abaixando o canal..."<<endl;
            t1->diminuirCanal();
            cout<<"Novo canal: "<<t1->getCanal()<<endl;
            getchar();
            break;
        case 5:
            cout<<"Entre com o novo canal"<<endl;
            int canal;
            cin>>canal;
            t1->setCanal(canal);
            cout<<"Novo canal: "<<t1->getCanal()<<endl;
            getchar();
            break;
        case 6:
            cout<<"Canal: "<<t1->getCanal()<<"\t Volume: "<<t1->getVolume()<<endl;
            getchar();
        }
        menu();
        cin >> opcao;
        cin.ignore();
    }


    return 0;
}