/*2. Num programa que lê um valor inteiro, faça a sua validação através do tratamento de uma
exceção. Caso não seja inteiro continuar pedindo a introdução do valor inteiro.
*/

#include <stdexcept>
#include <stdio.h>
#include <iostream>

using namespace std;

void testevalor(float i){

    int valor = i;

    if(i != valor){

        throw invalid_argument("Eh permitido apenas a entrada de numeros inteiros!!\n");
    }
}        

int main(){
    float a=0;
try{
    cin>>a;
    testevalor(a);
}

catch(invalid_argument &e){
    cout<<"Nao eh permitido esse numero"<<endl;

}
catch(overflow_error &e){
    cerr << e.what() << '\n';
}

return 0;
}