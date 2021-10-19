/*7. Crie uma classe utilitária (Utils) com um método para converter temperaturas em graus Fahrenheit para graus Celsius (toCelsius()), ambas representadas em ponto-utuante (double). Porém, caso o valor a ser convertido seja menor que zero absoluto (-459,67°F) deve-se lançar a exceção.*/

#include <iostream>
#include "Utils.cpp"
#include "Utils.h"
#include <string.h>

using namespace std;


int main (){
    double F;
    Utils *u1 = new Utils();

    cout<<"Entre com a temperatura em Fahrenheit"<<endl;
    cin>>F;

    cout<<"\nO seu valor em Celsius eh: "<<u1->conta(F)<<endl;

    return 0;
}
