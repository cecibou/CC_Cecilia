/*4. Escreva um programa para preencher valores de um vetor de inteiros com 10 posições. O usuário
irá informar os valores a serem inseridos e suas respectivas posições no array. O programa
deve tratar as exceções ArrayIndexOutOfBoundsException quando for informada uma posição
inexistente do vetor e NumberFormatException quando o valor informado não for numero.*/

#include <stdexcept>
#include <stdio.h>
#include <iostream>

using namespace std;

int main (){​​​​​​​

    int vet[10];

    try{​​​​​​​
        for(int cont=0; cont<10; cont++){​​​​​​​
            cin>>vet[cont];
        }​​​​​​​

    }​​​​​​​catch (out_of_range &e){​​​​​​​
        cout<<"Posicao inexistente do vetor "<<endl;

    }​​​​​​​catch(invalid_argument &e){​​​​​​​
        cout<<"O valor informado não é um número "<<endl;
    }​​​​​​​


    return 0;
}​​​​​​​






